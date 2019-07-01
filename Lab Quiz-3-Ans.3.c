//Q.3. Write a Program to implement the following functionalities of a queue using an array
//1.Enqueue
//2.Dequeue
//3.Display.

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Size = 5,Head=0,Tail=0;
int Queue[5];

int Is_Empty()
{
    if(Head==Tail)
    {
        printf("Queue is empty\n");
        return 1;
    }
    return 0;
}

int Is_Full()
{
    if(Tail==Size)
    {
        printf("Queue is Full\n");
        return 1;
    }
    return 0;
}

void Enqueue()
{
    int data;
    if(Is_Full()==1)
        return 1;
    printf("Insert the Element in Queue:\n");
    scanf("%d",&data);
    Queue[Tail]=data;
    Tail++;
    return 0;
}

void Dequeue()
{
    int data;
    if(Is_Empty()==1)
        return 1;
    data=Queue[Head];
    Head++;
    printf("%d has been De_Queued\n",data);
    return 0;
}

int Display()
{
    int i;
    if(Is_Empty()==1)
        return 1;
    printf("The Elements are:\n");
    for(i=Head;i<=Tail-1;i++)
    {
        printf("%d \n",Queue[i]);
    }
    return 0;
}

void Exit()
{
    printf("Program Exit Successfully\n");
    exit(1);
}

int main()
{
    int x;
    do{
        printf("Queue Implementation\n\n");
        printf("1.EnQueue\n");
        printf("2.DeQueue\n");
        printf("3.Display\n");
        printf("4.Exit\n");

        printf("\nEnter your Choice:");
        scanf("%d", &x);

        if(x==1)
            Enqueue();
        else if(x==2)
            Dequeue();
        else if(x==3)
            Display();
        else if(x==4)
            Exit();
    }while(x!=4);

    return 0;
}
