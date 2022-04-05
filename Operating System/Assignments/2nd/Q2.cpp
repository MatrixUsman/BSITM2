//
//  main.cpp
//  Q2 OS
//
//  Created by Usman Razwan on 14/3/22.
//

#include<stdlib.h>
#include<stdio.h>
#include "iostream"
using namespace std;
struct bin_tree {
int data;
struct bin_tree * right, * left;
};
typedef struct bin_tree btree_t;

int insert(btree_t ** t, int value)
{
    btree_t *temp = NULL;
    if(!(*t))
    {
        temp = (btree_t *)malloc(sizeof(btree_t));
        temp->left = temp->right = NULL;
        temp->data = value;
        *t = temp;
        return 1;
    }
    if(value < (*t)->data)
    {
        insert(&(*t)->left, value);
        return 1;
    }
    else if(value > (*t)->data)
    {
        insert(&(*t)->right, value);
        return 1;
    }
    else
        return 0;
}

int btree_remove_node (btree_t *t, int value){
    if(!t)
        return 0;
    if(value < t->data)
        return btree_remove_node(t->left, value);
    else if(value > t->data)
        return btree_remove_node(t->right, value);
    else
    {
        if(!t->left && !t->right)
        {
            free(t);
            return 1;
        }
        else if(!t->left)
        {
            btree_t *temp = t;
            t = t->right;
            free(temp);
            return 1;
        }
        else if(!t->right)
        {
            btree_t *temp = t;
            t = t->left;
            free(temp);
            return 1;
        }
        else
        {
            btree_t *temp = t->left;
            while(temp->right)
                temp = temp->right;
            t->data = temp->data;
            btree_remove_node(t->left, temp->data);
            return 1;
        }
    }
   
}
btree_t* search(btree_t ** tree, int val) {
    if(!(*tree)) {
        return NULL;
    }

    if(val < (*tree)->data) {
        return search(&((*tree)->left), val);
    }
    else if(val > (*tree)->data) {
        return search(&((*tree)->right), val);
    }
    else if(val == (*tree)->data) {
        return *tree;
    }
    else
        return *tree;
}

int main() {
    btree_t *root;
    btree_t *tmp;
    
    root = NULL;
    if (insert(&root, 2) == 1 && insert(&root, 9) ==1 && insert(&root, 4) ==1
        && insert(&root, 15) == 1 && insert(&root, 6) == 1 && insert(&root, 12) ==1 && insert(&root, 17) == 1){
        cout<<"Inseted Values Sucessfully in tree."<<endl;
    }
    else
        cout<<"Could not insert values into tree."<<endl;

    btree_remove_node(root, 15);
    cout<<"Removed an element."<<endl;
    
    tmp = search(&root, 9);
    if (tmp) {
        cout<<"Searched node= "<<tmp->data<<endl;
    }
    else {
        cout<<"Data Not found in tree."<<endl;
    }}
