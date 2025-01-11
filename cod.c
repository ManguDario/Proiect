#include<stdio.h> 
#include<stdlib.h> 
 
struct Node
{
    int key;
    struct Node* left;
    struct Node* right;
    int height;
};

int MAX(int a, int b);

int height(struct Node* N)
{
    if (N == NULL)
        return 0;
    return N->height;
};

int MAX(int a, int b)
{
    return (a > b) ? a : b;
};
int main()
{
    struct Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

  
}
