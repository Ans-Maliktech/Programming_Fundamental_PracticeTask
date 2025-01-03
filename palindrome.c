#include <stdio.h>
int main()
{
  int num, rem, revserse;
  printf("Enter your number\n");
  scanf("%d", &num);
  while (num != 0)
  {
    rem = num % 10;
    printf("%d", rem);
    revserse = rem;
    num = num / 10;
  }
  if (revserse == num)
  {
    printf("Palnidrome\n");
  }
}