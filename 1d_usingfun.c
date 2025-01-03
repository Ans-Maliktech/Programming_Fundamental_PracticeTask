#include <stdio.h>
int c = 0;
int inputanswers(int a[])
{
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
}
int grades(int cor[], int std[])
{
    for (int i = 0; i < 6; i++)
    {
        if (cor[i] == std[i])
        {
            c++;
        }
    }
    if (c >= 3)
    {
        return 1;
    }
    else
        return 0;
}
int index_of_correct(int cor[], int std[])
{
    int incorrect;
    printf("Incorrect:\n");
    for (int i = 0; i < 6; i++)
    {
        if (cor[i] != std[i])
        {
            incorrect = i + 1;
            printf("%d", incorrect);
        }
    }
}
int concer_index_option(int a[], int b)
{
    for (int i = 0; i < 6; i++)
    {
        int f = 0;
        if (b == i)
        {
            printf("Option against index is %d\n", a[i]);
            
        }
    }
}
int Sequence(int a[],int b[],int c)
{
    for(int i=0;i<c;i++)
    {
        for(int j=i+1;j<c;j++)
        {
            
        }
    }
}
// int occurance(int a[],int b[],int *b,int *c,int *d,int*e)
// {
//     // int c0,c1,c2,c3;
//     for(int i=0;i<6;i++)
//     {
//         if(b[0]==a[i])
//         {
//             b++;
//         }
//         if(b[1]==a[i])
//         {
//             c++;
//         }
//         if(b[2]==a[i])
//         {
//             d++;
//         }
//         if(b[3]==a[i])
//         {
//             e++;
//         }
        
//     }
// }
int main()
{
    int n = 6;
    int correct_answer[6] = {2, 2, 4, 3, 2, 1};
    int student_answer[6];
    printf("Enter Your options for 6 mcqs respecitvely\n");
    inputanswers(student_answer);
    int grade_rtn = grades(correct_answer, student_answer);
    if (grade_rtn == 1)
    {
       Sequence(correct_answer,student_answer,c);
        printf("You are passed\n");
        if (c == 6)
        {
            printf("Excellent\n");
        }
    }
    else
    {
        printf("You are fail\n");
        if (c == 0)
            printf("Poor performance\n");
    }

    index_of_correct(correct_answer, student_answer);
    /*DisplayTheSpecificAnswerFromCorrectAnswersofQuestionsArrayUsingPassedIndex: User will pass the
index number. And then using that index value display the correct answer/option from
CorrectAnswersofQuestions Array.  CorrectAnswersofQuestionsmust be passed. */
    int correct_index;
    printf("Enter your index\n");
    scanf("%d", &correct_index);
    concer_index_option(correct_answer, correct_index);
    /*CountTheOccuranceOfAllOptions_1_2_3_4_inTheCorrectAnswersofQuestionsArray: In this function 
separately count the Occurrence Of All the Options (1,2,3,4) in CorrectAnswersofQuestions array. 
and all count values should be printed in the main function. Use CorrectAnswersofQuestions array in this 
function.*/
    // int occurance_array[4]={1,2,3,4};
    // int c0,c1,c2,c3=0;
    // occurance(correct_answer,occurance_array,&c0,&c1,&c2,&c3);
    // printf("%d %d %d %d",c0,c1,c2,c3);
/*CheckAnswersofQuestionsArray: In this function, Check that whether question numbers of all correct 
answers given by the student are in consecutive order or not. return 1 in case Yes and return 0 in case No. 
Use StudentAnswersofQuestions and Use StudentAnswersofQuestions arrays. */
    
}