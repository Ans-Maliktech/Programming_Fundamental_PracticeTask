#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter your letter to capitalize\n");
    scanf("%c",&alphabet);
    printf("%c\n",alphabet-32); //As the least minimum alphabet is a which have asci value of 97 and that its capital have 65 so 97-65=32
    //To find out the ascii number of any char just simply print the %d of that char as it carries the ascii value
    //e.g
    printf("The ascii value of your capitalized letter is %d",alphabet-32);
}