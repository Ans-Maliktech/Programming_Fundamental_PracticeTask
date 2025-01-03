// Progarm For ATM
/*It's an atm program that is used to make easy transcations, can check balance, withdraw money easily, transfer amounts as well. */
#include <stdio.h>
#include <math.h>
#include <conio.h>
#define Max_Lenght 100

int main()
{
    int cnic;
    int options;
    int balance = 100000;
    int dpin = 1973, upin = 0;
    int foptions = 0;
    char feedback;
    int withdraw;
    int remaining;
    int amount, tremaining;
    int counter = 0;

    printf("-----------------Welcome To UBL ATM------------------\n");
    printf("-------------------------------------------------\n");
    printf("Enter Your CNIC Number : \n");
    scanf("%i", &cnic);
    printf("Enter Your 4 digit-pin: \n");
    scanf("%i", &upin);
    // making the loop in start to consice the program
    if (upin != dpin)
    {
        int attempts = 1;
        while (upin != dpin)
        {
            printf("Ivalid pin\nRe-Enter Pin: ");
            scanf("%d", &upin);
            attempts++; //making counter to limit the attempts.
            if (attempts == 3 && upin != dpin) //making both conditions true then breaking the code.
            {
                printf("Your account has been locked\nVisit the branch");
                break;
            }
            // intializing a new variable to limit the re try options.Making a counter
        }
    }
    if (upin == dpin)
    {
        printf("[1]Fast Cash\n[2]Current Balnce\n[3]Deposit Cash\n[4]Transfer amount\n[5]Exit\n");
        scanf("%d", &options);
        if (options == 1)
        {
            printf("Enter your amount need to be withdraw\n");
            scanf("%d", &withdraw); // Displays your withdrawn money
            if (balance >= withdraw)
            {
                printf("Your withdrawn amount is %d\n", withdraw);

                remaining = balance - withdraw;
                printf("Your remaining balance is %d\nThank you for using UBL\n", remaining);
            }
            else if (balance < withdraw)
            {
                printf("Insufficent balance\n");
            }
        }
        else if (options == 2)
        {
            printf("Your current balance is %i\nThank you for using UBL\n", balance);
        }
        else if (options == 3)
        {
            int deposit;

            printf("Enter your deposit amount\n");
            scanf("%i", &deposit);
            deposit = balance + deposit;
            printf("Your new amount is %i\nThank you For choosing UBL\n", deposit);
        }
        else if (options == 4)
        {
            int accountnum;
            printf("Enter your account number\n");
            scanf("%d", &accountnum);

            printf("Enter amount need to be transferred\n");
            scanf("%i", &amount);
            if (amount <= balance)
            {
                tremaining = balance - amount;
                printf("Your transferred amount is %d \nYour remaining balance is : %d", amount, tremaining);
            }
            else
            {
                printf("Insufficent balance\nTry again later\n");
            }
        }
        else if (options == 5)
        {
            printf("Thank you for choosing United Bank Limited\nVisit again\n");
        }
        else{
            printf("Invalid input\n");
            }
        printf("Give your feedback\nSelect Y for Yes\n N for No\n");
        // Consume the leftover newline character from previous input
        while (getchar() != '\n');//The buffer holds any characters entered by the user until they are consumed by the program
        scanf("%c", &feedback);
        switch (feedback)
        {
        case 'Y': 
        {
            int foptions;
            printf("[1]. Excellent\n[2]. Good\n[3]. Average\n[4]. Laggy\n");
            scanf("%d", &foptions);
            if (foptions >= 1 && foptions <= 4)
            {
                printf("Thank you for your kind feedback\nVisit again\n");
            }
            else
            {
                printf("Invalid choice\nThank you\n");
            }
            break;
        }
        case 'y':
        {
            int foptions;
            printf("[1]. Excellent\n[2]. Good\n[3]. Average\n[4]. Laggy\n");
            scanf("%d", &foptions);
            if (foptions >= 1 && foptions <= 4)
            {
                printf("Thank you for your kind feedback\nVisit again\n");
            }
            else
            {
                printf("Invalid choice\nThank you\n");
            }
            break;
        }
        case 'N':
            printf("Thank you\nHave a nice day\n");
            break;
        case 'n':
            printf("Thank you\nHave a nice day\n");
            break;
        default:
            printf("Invalid input\n");
            break;
        }
    }

    return 0;
}