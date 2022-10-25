#include<stdio.h>
#include<stdlib.h>
void transpose(int arr[m][n])
{
    int trans[n][m];
    int i, j;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            arr[i][j] = trans[j][i];
    trans[i][j] = arr[i][j];
}
struct Node
{
    int value;
    int row;
    int column;
    struct Node *next;
};
void create(struct Node **start, int non_zero, int row, int col)
{
    struct Node *temp, *r;
    temp = *start;
    if(temp == NULL)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->value = non_zero;
        temp->row = row;
        temp->column = col;
        temp->next = NULL;
        *start = temp;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        r = (struct Node*)malloc(sizeof(struct Node));
        r->value = non_zero;
        r->row = row;
        r->column = col;
        r->next = NULL;
        temp->next = r;
    }
}
void printList(struct Node *start)
{
    struct Node *temp, *r, *s;
    temp = r = s = start;
    printf()
}