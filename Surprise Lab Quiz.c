//Q.1. Write a C program to implement the following stack functionalities using an array *Push *Pop *Display.

#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5

int main()
{
    struct stack{
        int stk[MAXSIZE];
        int top;
    };

    typedef struct stack STACK;
    STACK s;

    int choice,i,num,top;
    int option = 1;
    s.top = -1;

    while(option)
    {
        printf("---Stack Implementation---\n\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n\n");

        printf("\nEnter your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if (s.top == (MAXSIZE - 1))
                {
                    printf ("Stack is Full\n\n");
                }
                else
                {
                    printf("\nEnter the Element to be Pushed: ");
                    scanf ("%d", &num);
                    s.top = s.top + 1;
                    s.stk[s.top] = num;
                }
                printf("\n");
            break;

            case 2:
                   if (s.top == - 1)
                    {
                        printf ("Stack is Empty\n\n");
                    }
                    else
                    {
                        num = s.stk[s.top];
                        printf ("\nPoped Element is = %d\n\n", s.stk[s.top]);
                        s.top = s.top - 1;
                    }
                    printf("\n");
            break;

            case 3:
                 if (s.top == -1)
                    {
                        printf ("Stack is empty\n\n");
                    }
                    else
                    {
                        printf ("\nThe Elements of the Stack are: \n");
                        for (i = s.top; i >= 0; i--)
                        {
                            printf("%d\t", s.stk[i]);
                        }
                    }
                    printf("\n");
            break;

            case 4:
                printf("\n\nProgram Exit Successfully\n\n");
                exit(1);
                break;

            default:
                printf("\n\nWrong Choice\n\n");
       }
   }
        return 0;
}
