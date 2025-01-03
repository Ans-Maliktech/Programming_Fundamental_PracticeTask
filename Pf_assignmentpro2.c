#include <stdio.h>
#include <string.h>
// ANS ABDULLAH MALIK
void input(char a[])
{
    gets(a);
}

int check_capital(char a[])
{
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        if (a[i] < 65 || a[i] > 90)
        {
            return 0;
        }
    }
    return 1;
}

void print_char_after_space(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] == ' ')
        {
            printf("Char after Space(s) is %c\n", a[i + 1]);
        }
        i++;
    }
}

void print_sec_half(char a[])
{
    int len = strlen(a);
    for (int i = len / 2; i < len; i++)
    {
        printf("%c\n", a[i]);
    }
}

void swap_char(char a[])
{
    int len = strlen(a);
    int half_len = len / 2;
    if (len % 2 != 0 || len < 6)
    {
        printf("Length should be even and greater than 6\n");
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        // using the process of swapping first three chars of first half of with second half
        char temp = a[half_len - 3 + i];
        a[half_len - 3 + i] = a[half_len + i]; // last 3 is from half len
        a[half_len + i] = temp;
    }
}

void char_Search(char a[], char b)
{
    int i = 0, f = 0;
    int count = 0;
    while (a[i] != '\0')
    {
        if (b == a[i])
        {
            count++;
            if (count == 3)
            {
                a[i] = '\0';
                f = 1;
                return;
            }
        }
        i++;
    }
    if (count == 1)
    {
        i = 0;
        while (a[i] != '\0')
        {
            if (a[i] == b)
            {
                a[i] = '\0';
                return;
            }
            i++;
        }
    }
}

void sequence_check(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] + 1 == a[i + 1] && a[i + 1] != '\0')
        { // The next char should not be null
            printf("%c\n", a[i]);
        }
        else
        {
            printf("%c\n", a[i]); // Print the last char coming in sequence only
            break;
        }
        i++;
    }
}

void str_compare(char a[], char b[][100])
{
    for (int i = 0; i < 5; i++)
    {
        char *search = strstr(a, b[i]);
        if (search != NULL)
        {
            printf("Remaining part of the sentence after '%s' is: %s\n", b[i], search + strlen(b[i])); // Print the remaining but adding in the founded address
        }
        else
        {
            printf("String '%s' not found in the sentence.\n", b[i]);
        }
    }
}
void extract_substring(char a[])
{
    int len = strlen(a);
    char min_char = a[0];
    char max_char = a[0];
    int min_index = 0;
    int max_index = 0;
    for (int i = 1; i < len; i++)
    {
        if (a[i] < min_char)
        {
            min_char = a[i];
            min_index = i;
        }
        if (a[i] > max_char)
        {
            max_char = a[i];
            max_index = i;
        }
    }
    if (min_index > max_index)
    {
        int temp = min_index;
        min_index = max_index;
        max_index = temp;
    }
    char substring[100];
    int j = 0;
    for (int i = min_index; i <= max_index; i++)
    {
        substring[j++] = a[i];
    }
    substring[j] = '\0';
    printf("Extracted substring: %s\n", substring);
}

int main()
{
    char sen1[100], sen2[100];
    printf("Write your first sentence\n");
    input(sen1);
    printf("Write your second sentence\n");
    input(sen2);

    char sen1_copy[100], sen2_copy[100];

    // Make copies of sen1 and sen2
    strcpy(sen1_copy, sen1);
    strcpy(sen2_copy, sen2);

    int return_cap = check_capital(sen1_copy);
    if (return_cap == 1)
        printf("Yes Every letter is capital\n");
    else
        printf("Not every letter is capital\n");

    strcpy(sen1_copy, sen1); // We have to reset the copy after every function so that we can use it later
    // I will mention it evry time i reset the value
    int return_cap2 = check_capital(sen2_copy);
    if (return_cap2 == 1)
        printf("Yes Every letter is capital\n");
    else
        printf("Not every letter is capital\n");

    strcpy(sen1_copy, sen1); // Reset the copy
    print_char_after_space(sen1_copy);
    strcpy(sen2_copy, sen2); // Reset the copy
    print_char_after_space(sen2_copy);
    strcpy(sen1_copy, sen1); // Reset the copy
    print_sec_half(sen1_copy);
    strcpy(sen2_copy, sen2); // Reset the copy
    print_sec_half(sen2_copy);
    strcpy(sen1_copy, sen1); // Reset the copy
    swap_char(sen1_copy);
    printf("%s\n", sen1_copy);
    printf("Enter character to search for\n");
    char search;
    scanf(" %c", &search);   // Added space before %c to consume the newline character
    strcpy(sen1_copy, sen1); // Reset the copy
    char_Search(sen1_copy, search);
    puts(sen1_copy);
    strcpy(sen2_copy, sen2); // Reset the copy
    char_Search(sen2_copy, search);
    puts(sen2_copy);
    strcpy(sen1_copy, sen1); // Reset the copy
    sequence_check(sen1_copy);
    char strs[5][100];
    for (int i = 0; i < 5; i++)
    {
        gets(strs[i]);
    }
    str_compare(sen1_copy, strs); // Fun could be called for sen2 with already inputted string
    extract_substring(sen1_copy);
    return 0;
}
