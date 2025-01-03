#include <stdio.h>
#include <string.h>
int main()
{
    char Name[100];
    gets(Name);
    char lastname[100];
    gets(lastname);
    int len = strlen(Name);
    int len2 = strlen(lastname);
    int i = 0;
    for (int j = 0; j < 3; j++)
    {
        char temp = Name[j];
        Name[j] = lastname[len2 - 3 + j];
        lastname[len2 - 3 + j] = temp;
    }
    i++;
    puts(Name);
    puts(lastname);
}