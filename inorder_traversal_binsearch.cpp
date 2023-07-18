#include <iostream>

struct TreeNode{
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(),right(){}

};

TreeNode* insert (TreeNode* root , int value){
    if (root==0){
        return new TreeNode(value);
    }
    if (value<root->value){
        root->left=insert(root->left,value);

    }
    else{
        root->right=insert(root->right,value);
    }
    return root;
}

void inorderTraversal(TreeNode* root){
    if (root){
        inorderTraversal(root->left);
        std::cout<<root->value<<" " ;
        inorderTraversal(root->right);

    }
}

int main(){
    TreeNode* root =0;
    int values[]={5,3,8,2,4,7,9};
    int numValues = sizeof(values)/sizeof(values[0]);

    for (int i=0; i< numValues; ++i){
        root= insert(root,values[i]);

    }

    std::cout<<"Binary Tree";
    inorderTraversal(root);
    std::cout<<std::endl;
    return 0;
    }