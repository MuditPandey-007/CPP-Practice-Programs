//Array input using loops

#include <stdio.h>
int main() {
    int i;
    int marks[5];

    for(i=0; i<5; i++)
    {
        printf("Enter marks for student %d:",i+1);
        scanf("%d",&marks[i]);
    }

    for(i=0; i<5; i++)
    {
        printf("The marks of student %d is %d \n",i+1,marks[i]);
    }

return 0;
}