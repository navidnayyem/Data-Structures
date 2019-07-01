#include<stdio.h>
#include<stdbool.h>
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
    //printf("\n\n%d\n",Tail);
    int data;
    if(Is_Full()==1)
        return 0;
    printf("Enter a Number\n");
    scanf("%d",&data);
    Queue[Tail]=data;
    Tail++;
    return 1;
}

void Dequeue()
{
    int data;
    if(Is_Empty()==1)
        return 0;
    data=Queue[Head];
    Head++;
    printf("%d has been De_Queued\n",data);
    return 1;
}

int Print()
{
    int i;
    if(Is_Empty()==1)
        return 0;
    printf("The Elements are:\n");
    for(i=Head;i<=Tail-1;i++)
    {
        printf("%d \n",Queue[i]);
    }
    return 1;
}

int main()
{
    int x;
    do{
        printf("01.EnQueue\n");
        printf("02.DeQueue\n");
        printf("03.Print\n");
        printf("04.Exit\n");
        scanf("%d",&x);
        if(x==1)
            Enqueue();
        else if(x==2)
            Dequeue();
        else if(x==3)
            Print();
    }while(x!=4);
    return 0;
}
