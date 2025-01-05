#include <stdio.h>
#include <string.h>
#include <stdio.h>
typedef struct Userinformation
{
    char name[100];
    char cellNo[100];
    char email[100];
    char username[100];
    char cnic[15];
} User;
typedef struct
{
    int kms;
    float schedule[3][24]; // Can be used for corrier as well
    char city[20];
} Bus;
int userinfo(User *user)
{
    char inputUsername[100];
    int pin = 1973, userpin;
    int choice;
    printf("\n1. Sign Up\n2. Sign In\n3. Exit\nChoose an option: ");
    scanf("%d", &choice);
    getchar(); // cosume the previous space
    if (choice == 1)
    {
        printf("Enter your name: ");
        gets(user->name);
        printf("Enter your Cnic with dashes\n");
        gets(user->cnic);
        printf("Enter your cell number: ");
        gets(user->cellNo);
        printf("Enter your email: ");
        gets(user->email);
        printf("Enter a username: ");
        gets(user->username);
        printf("Enter a pin: ");
        scanf("%d", &pin);
        printf("Sign up successful\n");
        return 1;
    }
    else if (choice == 2)
    {
        int total_count = 3, try_count = 0;
        ;
        printf("Enter username: ");
        gets(inputUsername);
        printf("Enter password: ");
        scanf("%d", &userpin);
        while (userpin != pin)
        {
            try_count++;
            printf("You have entered the wrong pin\nPlease Try again\n");
            scanf("%d", &userpin);
            total_count--;
            printf("You have left with %d try\n", total_count);
            if (userpin != pin && try_count == 3)
            {
                printf("Your account have been locked\nPlease try again\n");
                return 0;
            }
        }
        return 1;
    }
    else if (choice == 3)
    {
        printf("Exiting\n");
        return 0;
    }
    else
    {
        printf("Invalid choice Please try again\n");
        return 0;
    }
}
int options(User user);
int seat_reservation(User);
void schedule();
void corrier_service();
int available_seats();
void schedule()
{
    char weekdays[8][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "\0"};
    for (int i = 0; i < 7; i++)
    {
        printf("%s:\n", weekdays[i]); // Print the weekday name

        // Loop through each hour
        for (float hour = 0.0; hour <= 23.0; hour += 3)
        {
            if (hour < 12.0)
            {
                printf("%.1f AM\t", hour); // Print AM times
            }
            else if (hour == 12.0)
            {
                printf("%.1f PM\t", hour); // Handle noon as PM
            }
            else
            {
                printf("%.1f PM\t", hour - 12.0); // Convert to 12-hour format for PM times
            }

            // Add a new line after every 6 hours for better readability
            if ((int)(hour + 1) % 6 == 0)
            {
                printf("\n");
            }
        }

        printf("\n\n"); // Add a blank line between days
    }
}
void totalseats()
{
    int buses = 8;
    int Total_seats = 40;
    int daily_seats = 8 * 40;
    printf("Total Available seats for a particular time are %d \n and for a day are \n", Total_seats, daily_seats);
}
int available_seats(int a)
{
    int buses = 8;
    int Total_seats = 40;
    if (a <= Total_seats)
    {
        Total_seats -= a;
        return 1;
    }
    else
    {
        printf("No number of requuired seats available\n");
        printf("Maximum seats available for a particular time is: %d \n", Total_seats);
        return 0;
    }
}
void ticket_Confirmation_message(User user, char *b, char *c, float d, float e, char *f,char *g)
{
    printf("********************Ticket Confirmation*******************\n");
    printf("Name: \t\t %s\n", user.name);
    printf("Cnic: \t\t %s\n", user.cnic);
    printf("Cell number: \t\t %s\n", user.cellNo);
    printf("Departure: \t\t %s\n", b);
    printf("Arrival: \t\t %s\n", c);
    printf("Time: \t\t  %.1f\n", d);
    printf("Fare: \t\t %.1f\n",e);
    printf("Departure Day: \t\t %s\n",f);
    printf("Seat : \t\t %s\n",g);
}
int seat_reservation(User user)
{
    
    char weekdays[8][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", ""};
    char dep_day[10];
    Bus Arrival, dep;
    printf("Enter your Departure city\n");
    getchar();
    gets(dep.city);
    printf("Enter Your arrival city\n");
    gets(Arrival.city);
    printf("Enter your Total kms\n");
    scanf("%d", &Arrival.kms);
    printf("We have the buses in below available times\nPlease select your preffered time and day to reserve a seat\n");
    schedule();
    float time;
    scanf("%f", &time);
    char seat_prefrence[10];
    printf("Enter your prefered day\n");
    scanf(" %s", dep_day);
    int f = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (strcmp(dep_day, weekdays[j]) == 0)
            {
                f = 0;
                break;
            }
            else
            {
                f = 1;
            }
        }
        if (f == 0)
        {
            break;
        }
    }
    if (f == 1)
    {
        printf("You have entered invalid day\nPlease Try again\n");
        return 0;
    }
    int seats_required;
    printf("How many seats would you like to book\n");
    scanf("%d", &seats_required);
    int Return = available_seats(seats_required);
    if (Return == 1)
    {
        printf("Enter your seat Prefrence\nWindow or Asile\n");
        scanf(" %s",seat_prefrence);
        float fare = (Arrival.kms) * 5.5 * seats_required;
        ticket_Confirmation_message(user,dep.city, Arrival.city, time, fare, dep_day,seat_prefrence);
    }
    return 0;
}
void corrier_service()
{
}
int options(User user)
{
    int options;
    printf("1.Schedule\n2.Available seats\n3.Seat Reservation\n4.Corrier service\n5.Exit\n");
    scanf("%d", &options);

    switch (options)
    {
    case 1:
        printf("We have buses opertaing every hour with following time\n");
        schedule();
        return 1;
        break;
    case 2:
        totalseats();
        char choice;
        printf("Would you like to reserve a seat\nEnter Y for Yes and N for NO\n");
        scanf(" %c", &choice);
        if (choice == 'Y' || choice == 'y')
        {
            printf("Enter your Data to reserve a seat\n");
            seat_reservation(user);
        }
        else
        {
            printf("Thank you for visiting daewoo express Pakitsan\n");
            return 0;
        }
        return 2;
    case 3:
        seat_reservation(user);
        return 3;
        break;
    case 4:
        corrier_service();
        return 4;
        break;
    default:
        printf("You have been exit from Menu\nThank you for Visiting Daewoo Express Pakistan\n");
        break;
        return 0;
    }
}

int main()
{
    User user;
    printf("------Welcome to Daewoo Express Pakistan-------\n");
    int usercheck = userinfo(&user);
    if (usercheck == 1)
    {
        printf("Select your prefrence\n");
        options(user);
    }
}