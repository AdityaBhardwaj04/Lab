#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int DQ[MAX];
int L = -1, R = -1;
void insert_left(int elt)
{
    if(L == (R+1) % MAX)
        printf("Overflow!");
        return;
    if(L == -1)
        L = R = 0;
    else if(L == 0)
        L = MAX-1;
    else    
        L = L - 1;
    DQ[L] = elt;
}
void insert_right(int elt)
{
    if(L == (R + 1) % MAX)
        printf("Overflow!");
        return;
    if(L == -1)
        L = R = 0;
    else if(R == MAX-1)
        R = 0;
    else 
        R++;
    DQ[R] = elt;
}
void delete_left()
{
    if(L == -1)
        printf("Underflow!");
        return;
    if(L == R)
        L = R = 1;
    else if(L == MAX-1)
        L = 0;
    else    
        L = L + 1;
}
int main()
{
    int elt;
    DQ[0] = 5;
    int opt;
    while(opt =! 6)
    printf("Enter options:\n");
    printf("1.Insert at left\n");
    printf("2.Insert at right\n");
    printf("3.Delete from left\n");
    printf("4.Delete from right\n");
    printf("5. Display\n");
    printf("6. Exit\n");
    printf("Type the option: ");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
            {
                printf("Enter number to be added: ");
                scanf("%d", &elt);
                insert_left(elt);
            }
        case 2:
            {
                printf("Enter number to be added: ");
                scanf("%d", &elt);
                insert_right(elt);
            }
        case 3:
            {
                delete_left();
            }
    }
}