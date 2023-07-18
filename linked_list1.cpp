#include <iostream>
using namespace std;
 
struct node{
    int x;
    node *next;
};

void printList (node* n){
    while (n != NULL){
        cout<<n->x<<" ";
        n=n ->next;
    }
}

int main (){

    node *root;
    root=new node;
    root->next=0;
    root->x=5;
    printList(root);
    return 0;
}
