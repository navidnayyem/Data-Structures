#include<stdio.h>
#define MAX 6

int main()
{
    int queue_array[MAX];
    int front = - 1;
    int rear = - 1;
    int choice, add_item, i;

    while(1)
        {
            printf("Queue Implementation\n\n");
            printf("1. Enqueue\n");
            printf("2. Dequeue\n");
            printf("3. Check if queue is underflowing/overflowing\n");
            printf("4. Print the Queue\n");
            printf("5. Exit\n\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    if(rear == MAX - 1)
                        {
                            printf("Queue Overflow \n");
                        }
                        else
                            {
                                if (front == - 1)
                                /*If queue is initially empty */
                                front = 0;
                                printf("Insert the Element in Queue: ");
                                scanf("%d", &add_item);
                                rear = rear + 1;
                                queue_array[rear] = add_item;
                            }
                            break;

                        case 2:
                            if(front == - 1 || front > rear)
                                {
                                    printf("Queue Underflow \n");
                                }
                                else
                                    {
                                        printf("Element deleted from queue is : %d\n", queue_array[front]);
                                        front = front + 1;
                                    }
                                    break;
                        case 3:

                        case 4:
                            if(front == - 1)
                            {
                                printf("Queue is empty \n");
                            }
                            else
                                {
                                    printf("\nQueue is: \n\n");
                                    for(i = front; i <= rear; i++)
                                        printf("%d\n", queue_array[i]);
                                        printf("\n");
                                }
                                break;

                        case 5:
                            printf("\n\nProgram Exit\n\n");
                            break;

                        default:
                            printf("\n\nWrong Choice: Please See the Options\n\n");
            }
        }
}


