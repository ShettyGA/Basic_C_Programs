// In this program it is assumed that each subject is out of 100 marks
// Assumed three subjects are: Maths, English and Science
#include<stdio.h>
#include<conio.h>
int main()
{
    float english = 0.0, maths = 0.0, science = 0.0,
    prctge = 0.00;
    char grade = '0';

    printf("\n\tEnter Marks=> \n\n");
    printf("\tEnter Maths marks: \n\t");
    scanf("%f",&maths);
    printf("\tEnter English marks: \n\t");
    scanf("%f",&english);
    printf("\tEnter Science marks: \n\t");
    scanf("%f",&science);

    prctge = (english + maths + science);
    prctge /= 3;
       
    printf("\n\tPercentage = %.2f\n", prctge);

    grade = prctge / 10;
    switch (grade)
    {
        case 10:
        case 9:
            printf("\tGrade : A");
            break;
        case 8:
            printf("\tGrade : B");
            break;
        case 7:
            printf("\tGrade : C");
            break;
        case 6:
            printf("\tGrade : D");
            break;
        case 5:
            printf("\tGrade : E");
            break;
        default:
            printf("\tGrade : F");
            break;
        
    }

    getch();
    return 0;
}