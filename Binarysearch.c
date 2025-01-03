#include <stdio.h>
int binarysearch(int array[], int size, int number)
{
    int least = 0;
    int max = size - 1;
    while (least <= max)
    {
        int half = least + (max - least) / 2;
        if (array[half] == number)
        {
            return half;
        }
        if (array[half] < number)
        {
            least = half + 1;
        }
        if (array[half] > number)
        {
            max = half - 1;
        }
    }
    return 2;
}
int main()
{
    int array[10];
    int number, result;
    printf("Populate your array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter your value to search\n");
    scanf("%d", &number);
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++) //For binary search it's compulsoray to sort
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    result = binarysearch(array, 10, number);
    if (result !=2)
    {
        printf("Your number is found at index number %d in the sorted array", result);
    }
    else
        printf("Not found\n");
}