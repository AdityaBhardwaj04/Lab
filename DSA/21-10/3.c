//Write a menu driven program to implement queue operations such as Insert, Delete, Display, whether queue is empty etc. by using array.
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int f = -1;
int r = -1;
int queue[MAX];
void enqueue(int value)
{
    if(r == MAX - 1)
    {
        printf("Overflow!\n");
        return;
    }
    else
    {
        r++;
    }
    queue[r] = value;
}
int dequeue()
{
    int x = -1;
    if(f == r)
    {
        printf("Queue is Empty/n");
    }
    else
    {
        f++;
        x = queue[f];
    }
    return x;
}
void display()
{
    int i;
    for(i = f+1; i <= r;i ++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
int main()
{
    int choice;
    while(1)
    {
        printf("----------Options--------------\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Select choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                int x;
                printf("Enter element to be entered: ");
                scanf("%d", &x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
        }
    }
    return 0;
}