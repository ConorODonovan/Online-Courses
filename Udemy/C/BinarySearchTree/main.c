#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct tNode
    {
        int key;
        struct tNode *left;
        struct tNode *right;
    } tNode;

    void preorder(tNode *ptr)
    {
        if(ptr != NULL)
        {
            printf("%d, ", ptr->key);

            preorder(ptr->left);
            preorder(ptr->right);
        }
    }

    void postorder(tNode *ptr)
    {
        if(ptr != NULL)
        {
            postorder(ptr->left);
            postorder(ptr->right);

            printf("%d, ", ptr->key);
        }
    }

    void inorder(tNode *ptr)
    {
        if(ptr != NULL)
        {
            inorder(ptr->left);

            printf("%d, ", ptr->key);

            inorder(ptr->right);
        }
    }

    tNode* min(tNode *root)
    {
        if(root == NULL)
        {
        return NULL;
        }
        else if(root->left == NULL)
        {
            return root;
        }
        else
        {
            return min(root->left);
        }
    }

    tNode* max(tNode *root)
    {
        if(root == NULL)
        {
        return NULL;
        }
        else if(root->right == NULL)
        {
            return root;
        }
        else
        {
            return max(root->right);
        }
    }

    tNode* insert(int k, tNode *root)
    {
        if(root == NULL)
        {
            root = (tNode *)malloc(sizeof(tNode));
            if(root == NULL)
            {
                printf("No Free Memory!\n");
                exit(0);
            }
            else
            {
                root->key = k;
                root->left = root->right = NULL;
            }
        }
        else if(k < root->key)
        {
            root->left = insert(k, root->left);
        }
        else if(k > root->key)
        {
            root->right = insert(k, root->right);
        }
        else
        {
            printf("\n%d already in tree!\n", k);
        }
        return root;
    }

    tNode* delete(int k, tNode *root)
    {
        tNode *temp;
        if(root == NULL)
        {
            printf("key not found");
        }
        else if(k < root->key)
        {
            root->left = delete(k, root->left);
        }
        else if(k > root->key)
        {
            root->right = delete(k, root->right);
        }
        else if(root->left && root->right)
        {
            temp = min(root->right);
            root->key = temp->key;
            root->right = delete(root->key, root->right);
        }
        else
        {
            temp = root;
            if(root->left == NULL)
                root = root->right;
            else if(root->right == NULL)
                root = root->left;
            free(temp);
        }
        return root;
    }

    tNode *root = NULL;

    root = insert(3, root);
    root = insert(44, root);
    root = insert(5, root);
    root = insert(1, root);
    root = insert(90, root);
    root = insert(66, root);
    root = insert(77, root);
    root = insert(89, root);
    root = insert(43, root);
    root = insert(13, root);

    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    inorder(root);
    printf("\n");

    delete(77, root);
    inorder(root);
    printf("\n");

    return 0;
}
