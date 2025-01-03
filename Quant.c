#include<stdio.h>
int main(void){
    int quant;
    float price, res;
    char cust;
    printf("Enter the Quantity of Product");
    scanf("%d", &quant);
    printf("Enter theprice per unit");
    scanf("%f", &price);
    printf("Are you Regular Customer or Member (R/M)");
    scanf(" %c", &cust);
    if(cust == 'R'){
        res = price * quant;
        res-= ((res*5) /100);
        printf("Total result: %.2f", res);
    }
    }