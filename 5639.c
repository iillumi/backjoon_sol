// refer to "https://wkdtjsgur100.github.io/binary-search-tree/"
// refer to "https://royhelen.tistory.com/28"

#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
        struct TreeNode *left;
        struct TreeNode *right;
        int data;
} TreeNode;

TreeNode *root = NULL;

TreeNode *TreeInsert(TreeNode *root, int data){
        if(root==NULL) {
                root = (TreeNode*)malloc(sizeof(TreeNode));
                root->left=NULL;
                root->right=NULL;
                root->data=data;
                return root;
        }

        else {
                if(root->data>data) {
                        root->left=TreeInsert(root->left,data);
                }
                else {
                        root->right=TreeInsert(root->right,data);
                }
        }
        return root;
}

void TreePrint(TreeNode *root) {
        if(root==NULL) return;
        TreePrint(root->left);
        TreePrint(root->right);
        printf("%d\n",root->data);

}

int main () {
        int data;
        while (scanf("%d", &data)!=EOF) {
                root=TreeInsert(root,data);
        }
        TreePrint(root);
        return 0;
}
