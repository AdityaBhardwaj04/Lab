#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
void create_BST()
{
    printf("Enter number of nodes: ");
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
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

int maxValue(struct node *node)
{
    if (node == NULL)
    {
        return 0;

        int leftMax = maxValue(node->left);
        int rightMax = maxValue(node->right);
        int value = 0;
        if (leftMax > rightMax)
        {
            value = leftMax;
        }
        else
        {
            value = rightMax;
        }
        if (value > node->data)
        {
            value = node->data;
        }
        return value;
    }
    int minValue(struct node * node)
    {
        if (node == NULL)
        {
            return 1000000000;
        }
        int leftMax = minValue(node->left);
        int rightMax = minValue(node->right);
        int value = 0;
        if (leftMax < rightMax)
        {
            value = leftMax;
        }
        else
        {
            value = rightMax;
        }
        if (value < node->data)
        {
            value = node->data;
        }
        return value;
    }
    int isBST(struct node * node)
    {
        if (node == NULL)
            return 1;
        if (node->left != NULL && maxValue(node->left) > node->data)
            return 0;
        if (node->right != NULL && minValue(node->right) < node->data)
            return 0;
        if (!isBST(node->left) || !isBST(node->right))
            return 0;

        return 1;
    }
    void print_level()
    {
        int h, i;
        h = height(root);
        for (i = 0; i < h; i++)
        {
            printf("\nLEVEL %d  :", i);
            printlevel(root, i, 0);
            printf("\n");
        }
    }
    int height(node * n)
    {
        int lheight, rheight;
        if (n != NULL)
        {
            lheight = height(n->l);
            rheight = height(n->r);
            if (lheight > rheight)
                return (lheight + 1);
            else
                return (rheight + 1);
        }
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
                if (isBST(root))
                    printf("Is BST");
                else
                    printf("Not a BST");
                getchar();
                break;
            }
            case 7:
            {
                print_level();
                break;
            }
            }
        }
    }