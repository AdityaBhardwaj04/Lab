#include <stdlib.h>
#include <stdio.h>
struct node
{
    int pr;
    int ele;
    struct node *next;
};
struct node *front = NULL;
void insert(int p, int v)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->pr = p;
    newnode->ele = v;
    newnode->next = NULL;
    if (front == NULL)
    {
        front = newnode;
    }
    else if (front != NULL && front->pr > p)
    {
        newnode->next = front;
        front = newnode;
    }
    else
    {
        struct node *prev = NULL;
        struct node *temp = front;
        while (temp->next != NULL && temp->pr < p)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp->next == NULL && temp->pr < p)
        {
            temp->next = newnode;
        }
        else 
        {
            prev->next = newnode;
            newnode->next = temp;
        }
    }
}
void deletion_PQ()
{ 
    if (front == NULL)
    {
        printf("Underflow");
        return;
    }
    struct node *ptr = front;
    front = front->next;
    free(ptr);
}
void display_PQ()
{
    struct node *ptr = front;
    while (ptr != NULL)
    {
        printf("Priority:%d, Value:%d\n", ptr->pr, ptr->ele);
        ptr = ptr->next;
    }
}
int main()
{
    insert(1, 50);
    insert(3, 40);
    insert(4, 30);
    insert(2, 20);
    display_PQ();
    return 0;
}