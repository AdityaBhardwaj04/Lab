#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
int sum = 0, total;
void create_BST()
{
    printf("Enter number of nodes: ");
    int n, i;
    scanf("%d", &n);
    total = n;
    for (i = 1; i <= n; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        sum = sum + newnode->data;
        newnode->left = newnode->right = NULL;
        struct node *ptr = root;
        if (root == NULL)
            root = newnode;
        else
        {
            while (1)
            {
                if (newnode->data > ptr->data)
                {
                    if (ptr->right == NULL)
                    {
                        ptr->right = newnode;
                        break;
                    }
                    else
                        ptr = ptr->right;
                }
                else
                {
                    if (ptr->left == NULL)
                    {
                        ptr->left = newnode;
                        break;
                    }
                    else
                        ptr = ptr->left;
                }
            }
        }
    }
}
void preorder(struct node *p)
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        preorder(p->left);
        preorder(p->right);
    }
}
void inorder(struct node *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        printf("%d ", p->data);
        inorder(p->right);
    }
}
void postorder(struct node *p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d ", p->data);
    }
}
unsigned int getLeafCount(struct node *node)
{
    if (node == NULL)
        return 0;
    if (node->left == NULL && node->right == NULL)
        return 1;
    else
        return getLeafCount(node->left) + getLeafCount(node->right);
}
int main()
{
    int choice, s;
    while (choice != 1)
    {
        printf("\n---------------------------------------------------------------------------\n");
        printf("BINARY SEARCH TREE MENU \n");
        printf("\n---------------------------------------------------------------------------\n");
        printf("1.Quit\n");
        printf("2.Create\n");
        printf("3.In-Order Traversal\n");
        printf("4.Pre-Order Traversal\n");
        printf("5.Post-Order Traversal\n");
        printf("6.Tree Information\n");
        printf("\n---------------------------------------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            break;
            return 0;
        }
        case 2:
        {
            create_BST();
            break;
        }
        case 3:
        {
            inorder(root);
            break;
        }
        case 4:
        {
            preorder(root);
            break;
        }
        case 5:
        {
            postorder(root);
            break;
        }
        case 6:
        {
            int x;
            x = getLeafCount(root);
            printf("Number of leafs in the Binary Tree: %d\n", x);
            printf("Number of non-leaf node in the Binary Tree: %d\n", total - x);
            printf("Total number of nodes: %d\n", total);
            printf("Sum of all nodes: %d", sum);
            break;
        }
        }
    }
}