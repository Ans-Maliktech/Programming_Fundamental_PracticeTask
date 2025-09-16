/*
 * GeometryCalculator.c
 *
 * A single-file, menu-driven geometry calculator in C.
 * - Validates user input (rejects non-numeric and negative values where inappropriate).
 * - Uses fgets + strtod to avoid scanf issues.
 * - Provides area/perimeter/circumference for 2D shapes and surface area/volume for 3D shapes.
 *
 * Author: AnsAbdullahtech
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>

#define BUF_SIZE 200
#define PI acos(-1.0)

static void clear_stdin_line(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

/* Read a double from user with a prompt. Ensures a valid numeric parse.
 * If positive_only is non-zero, requires value > 0.
 * Returns 1 on success and stores value in *out; 0 on user cancellation (input "q" or EOF).
 */
int read_double(const char *prompt, double *out, int positive_only) {
    char buf[BUF_SIZE];
    char *endptr;
    double val;
    while (1) {
        printf("%s", prompt);
        if (!fgets(buf, sizeof(buf), stdin)) return 0; /* EOF */
        /* Trim leading spaces */
        char *p = buf;
        while (*p == ' ' || *p == '\t') p++;
        /* allow user to cancel with q or Q */
        if ((p[0] == 'q' || p[0] == 'Q') && (p[1] == '\n' || p[1] == '\0')) return 0;
        errno = 0;
        val = strtod(p, &endptr);
        /* skip trailing spaces */
        while (*endptr == ' ' || *endptr == '\t') endptr++;
        if (errno == ERANGE) {
            printf("Number out of range. Try again or type 'q' to cancel.\n");
            continue;
        }
        if (endptr == p || (*endptr != '\n' && *endptr != '\0')) {
            printf("Invalid number. Try again or type 'q' to cancel.\n");
            continue;
        }
        if (positive_only && val <= 0.0) {
            printf("Value must be greater than 0. Try again or type 'q' to cancel.\n");
            continue;
        }
        *out = val;
        return 1;
    }
}

/* Read an integer choice from the user (non-negative). Returns -1 on EOF/cancel */
int read_int_choice(const char *prompt, int min_allowed, int max_allowed) {
    char buf[BUF_SIZE];
    long val;
    char *endptr;
    while (1) {
        printf("%s", prompt);
        if (!fgets(buf, sizeof(buf), stdin)) return -1;
        errno = 0;
        val = strtol(buf, &endptr, 10);
        while (*endptr == ' ' || *endptr == '\t') endptr++;
        if (errno == ERANGE || endptr == buf || (*endptr != '\n' && *endptr != '\0')) {
            printf("Invalid integer. Try again.\n");
            continue;
        }
        if (val < min_allowed || val > max_allowed) {
            printf("Enter a number between %d and %d.\n", min_allowed, max_allowed);
            continue;
        }
        return (int)val;
    }
}

/* 2D shapes */
double area_circle(double r) { return PI * r * r; }
double circumference_circle(double r) { return 2.0 * PI * r; }

double area_rectangle(double w, double h) { return w * h; }
double perimeter_rectangle(double w, double h) { return 2.0 * (w + h); }

double area_square(double a) { return a * a; }
double perimeter_square(double a) { return 4.0 * a; }

/* Triangle area using Heron's formula given three sides */
int triangle_area_by_sides(double a, double b, double c, double *area_out) {
    /* Validate triangle inequality */
    if (a <= 0 || b <= 0 || c <= 0) return 0;
    if (a + b <= c || a + c <= b || b + c <= a) return 0;
    double s = (a + b + c) / 2.0;
    double area = sqrt(fmax(0.0, s * (s - a) * (s - b) * (s - c)));
    *area_out = area;
    return 1;
}

/* 3D shapes */
double surface_area_sphere(double r) { return 4.0 * PI * r * r; }
double volume_sphere(double r) { return (4.0 / 3.0) * PI * r * r * r; }

double surface_area_cylinder(double r, double h) { return 2.0 * PI * r * (r + h); }
double volume_cylinder(double r, double h) { return PI * r * r * h; }

double surface_area_cone(double r, double h) {
    double l = sqrt(r * r + h * h); /* slant height */
    return PI * r * (r + l);
}
double volume_cone(double r, double h) { return (1.0 / 3.0) * PI * r * r * h; }

/* Menu functions */
void menu_2d_shapes(void) {
    while (1) {
        printf("\n--- 2D Shapes ---\n");
        printf("1) Circle (area / circumference)\n");
        printf("2) Rectangle (area / perimeter)\n");
        printf("3) Square (area / perimeter)\n");
        printf("4) Triangle (area by base/height or by 3 sides)\n");
        printf("0) Back to main menu\n");
        int choice = read_int_choice("Choose option: ", 0, 4);
        if (choice == -1) return;
        if (choice == 0) return;
        if (choice == 1) {
            double r;
            if (!read_double("Enter radius (positive) [or 'q' to cancel]: ", &r, 1)) continue;
            printf("Area = %.10g\n", area_circle(r));
            printf("Circumference = %.10g\n", circumference_circle(r));
        } else if (choice == 2) {
            double w, h;
            if (!read_double("Enter width (positive) [or 'q' to cancel]: ", &w, 1)) continue;
            if (!read_double("Enter height (positive) [or 'q' to cancel]: ", &h, 1)) continue;
            printf("Area = %.10g\n", area_rectangle(w, h));
            printf("Perimeter = %.10g\n", perimeter_rectangle(w, h));
        } else if (choice == 3) {
            double a;
            if (!read_double("Enter side length (positive) [or 'q' to cancel]: ", &a, 1)) continue;
            printf("Area = %.10g\n", area_square(a));
            printf("Perimeter = %.10g\n", perimeter_square(a));
        } else if (choice == 4) {
            printf("Triangle options:\n1) Base & height\n2) Three sides (Heron's formula)\n");
            int tchoice = read_int_choice("Choose option: ", 1, 2);
            if (tchoice == -1) continue;
            if (tchoice == 1) {
                double base, height;
                if (!read_double("Enter base (positive) [or 'q' to cancel]: ", &base, 1)) continue;
                if (!read_double("Enter height (positive) [or 'q' to cancel]: ", &height, 1)) continue;
                printf("Area = %.10g\n", 0.5 * base * height);
            } else {
                double a, b, c;
                if (!read_double("Enter side a (positive) [or 'q' to cancel]: ", &a, 1)) continue;
                if (!read_double("Enter side b (positive) [or 'q' to cancel]: ", &b, 1)) continue;
                if (!read_double("Enter side c (positive) [or 'q' to cancel]: ", &c, 1)) continue;
                double area;
                if (!triangle_area_by_sides(a, b, c, &area)) {
                    printf("Invalid triangle sides (do not satisfy triangle inequality). Try again.\n");
                } else {
                    printf("Area (Heron's) = %.10g\n", area);
                }
            }
        }
    }
}

void menu_3d_shapes(void) {
    while (1) {
        printf("\n--- 3D Shapes ---\n");
        printf("1) Sphere (surface area / volume)\n");
        printf("2) Cylinder (surface area / volume)\n");
        printf("3) Right Circular Cone (surface area / volume)\n");
        printf("0) Back to main menu\n");
        int choice = read_int_choice("Choose option: ", 0, 3);
        if (choice == -1) return;
        if (choice == 0) return;
        if (choice == 1) {
            double r;
            if (!read_double("Enter radius (positive) [or 'q' to cancel]: ", &r, 1)) continue;
            printf("Surface Area = %.10g\n", surface_area_sphere(r));
            printf("Volume = %.10g\n", volume_sphere(r));
        } else if (choice == 2) {
            double r, h;
            if (!read_double("Enter radius (positive) [or 'q' to cancel]: ", &r, 1)) continue;
            if (!read_double("Enter height (positive) [or 'q' to cancel]: ", &h, 1)) continue;
            printf("Surface Area = %.10g\n", surface_area_cylinder(r, h));
            printf("Volume = %.10g\n", volume_cylinder(r, h));
        } else if (choice == 3) {
            double r, h;
            if (!read_double("Enter radius (positive) [or 'q' to cancel]: ", &r, 1)) continue;
            if (!read_double("Enter height (positive) [or 'q' to cancel]: ", &h, 1)) continue;
            printf("Surface Area = %.10g\n", surface_area_cone(r, h));
            printf("Volume = %.10g\n", volume_cone(r, h));
        }
    }
}

int main(void) {
    printf("Welcome to Geometry Calculator (type 'q' anytime to cancel an input)\n");
    while (1) {
        printf("\n=== Main Menu ===\n");
        printf("1) 2D shapes (area, perimeter, circumference)\n");
        printf("2) 3D shapes (surface area, volume)\n");
        printf("3) Unit conversions (length) - simple\n");
        printf("0) Exit\n");
        int choice = read_int_choice("Choose category: ", 0, 3);
        if (choice == -1) {
            printf("\nInput ended. Exiting.\n");
            break;
        }
        if (choice == 0) {
            printf("Goodbye!\n");
            break;
        } else if (choice == 1) {
            menu_2d_shapes();
        } else if (choice == 2) {
            menu_3d_shapes();
        } else if (choice == 3) {
            /* Simple length conversions: meters <-> centimeters <-> kilometers <-> inches <-> feet */
            double val;
            if (!read_double("Enter length value (positive) [or 'q' to cancel]: ", &val, 1)) continue;
            printf("Length in:\n");
            printf("Meters: %.10g\n", val);
            printf("Centimeters: %.10g\n", val * 100.0);
            printf("Kilometers: %.10g\n", val / 1000.0);
            printf("Inches: %.10g\n", val * 39.37007874015748);
            printf("Feet: %.10g\n", val * 3.280839895013123);
        }
    }
    return 0;
}
