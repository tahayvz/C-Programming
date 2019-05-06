#include <stdio.h>
#include <stdlib.h>
#include "LinkedLists.h"
#define MULTIPLIER 10

node * fillLinkedList(node *root,int sizeOfLinkedList,int multiplier){
    if(root==NULL)
        root = (node*)malloc(sizeof(node));

    node * iterator;
    iterator = root;
    int i = 1;

    while(i<=sizeOfLinkedList){
        iterator -> content = i*multiplier;
        if(i++ == sizeOfLinkedList){
            iterator -> next = NULL;
        }else{
            iterator -> next = (node*)malloc(sizeof(node));
            iterator = iterator -> next;
        }
    }
    return root;
}

static void swap(node *a, node *b){
    int temp = a->content;
    a->content = b->content;
    b->content = temp;
}

node * addSequentially(node *root,int content){
    if(root==NULL){//If linked list is empty
        root=(node*)malloc(sizeof(node));
        root->next= NULL;
        root->content = content;
        return root;
    }
    if(root->content > content){ // If added number is less than root(first element of the linked list)
        node * temp = (node*)malloc(sizeof(node));
        temp -> content = content;
        temp -> next = root;
        return temp;
    }
    node * temp = (node*)malloc(sizeof(node));
    node * iterator = root;
    while(iterator -> next != NULL && iterator ->next-> content < content){ //root point first value, iter point ordered value with next
        iterator = iterator -> next;//We iterate the linked list for the right place to add a new element
    }
    temp -> next = iterator -> next;
    iterator -> next = temp;
    temp -> content = content;
    return root;
}

void printLinkedList(node *root){
    node * iterator;
    iterator = root;
    int i = 0;
    while(iterator != NULL){
        printf("%d.element of linked list has content ->%d\n",i++,iterator->content);
        iterator = iterator -> next;
    }
}

void addToEnding(node *root,int content){

    if(root == NULL){
        root = (node*)malloc(sizeof(node));
        root -> next = NULL;
        root -> content = content;
    }else{
        node * iterator;
        iterator = root;
        while(iterator !=NULL){
            if(iterator->next == NULL){
                iterator->next = (node*)malloc(sizeof(node));
                iterator -> next -> content = content;
                iterator -> next -> next = NULL;
                break;
            }
            iterator = iterator -> next;
        }
    }
}

void addToStart(node *root,int content){
    node *temp = (node*)malloc(sizeof(node));
    temp -> next = root -> next;
    root -> next = temp;
    temp -> content = content;
    swap(root,temp);
}

void removeFromStart(node **root){
    node *temp = *root;
    temp = temp->next;
    free(root);
    *root = temp;
}

void removeFromEnding(node *root){
    node * iterator;
    iterator = root;

    while(iterator !=NULL){
        if(iterator->next->next == NULL){
            iterator->next = NULL;
            break;
        }
        iterator = iterator -> next;
    }
}

void changeContent(node *root,int index,int content){
    node * iterator;
    iterator = root;

    int i = 0;
    while(i != index){
        iterator = iterator -> next;
        if(++i == index){
            iterator -> content = content;
            break;
        }
    }
}

void insertToLL(node *root,int whereTo,int content){
    node * iterator;
    iterator = root;
    int i = 0;
    while(i != whereTo){
        if(++i == whereTo){
            node * temp;
            temp = (node*)malloc(sizeof(node));

            temp -> next = iterator -> next;
            iterator -> next = temp;
            temp -> content = content;
            break;
        }
        iterator = iterator -> next;
    }
}

void bubbleSortLinkedList(node *root){
    node * iterator;
    iterator = root;
    int sizeOfLL=0,first,second,flag;

    while(iterator != NULL){
        iterator = iterator -> next;
        sizeOfLL++;
    }

    for(int i=0;i<sizeOfLL;i++){
        iterator = root;
        flag = 1;
        for(int j = 0;j<sizeOfLL-i-1;j++){
            first = iterator -> content;
            second = iterator -> next -> content;
            if(first > second ){
                //changeContent(root,j,second);
                //changeContent(root,j+1,first);
                swap(iterator,iterator->next);
                flag = 0;
            }
            iterator = iterator -> next;
        }
        if(flag)
            break;
    }
}

void linkedListExamples(){

    node * root;
    //root = (node*)malloc(sizeof(node));
    root = NULL;

    root = fillLinkedList(root,2,MULTIPLIER); //10
    root = addSequentially(root,9);//9,10
    root = addSequentially(root,15);//iterator:10 root:10 temp:15
    root = addSequentially(root,450);
    root = addSequentially(root,25);
    printLinkedList(root);
    //root = fillLinkedList(root,3,MULTIPLIER);
    //printLinkedList(root);
  /*  addToEnding(root,40);
    addToEnding(root,50);
    addToEnding(root,70);
    printf("-------------------------\n");
    printLinkedList(root);
    removeFromEnding(root);
    printf("-------------------------\n");
    printLinkedList(root);
    insertToLL(root,2,2000);
    insertToLL(root,2,1500);
    insertToLL(root,2,1800);
    insertToLL(root,2,900);
    printf("-------------------------\n");
    printLinkedList(root);
    printf("-------------------------\n");
    bubbleSortLinkedList(root);
    printf("-------------------------\n");
    printLinkedList(root);
    addToStart(root,1);
    printf("-------------------------\n");
    printLinkedList(root);
    removeFromStart(&root);
    printf("-------------------------\n");
    printLinkedList(root);
*/
}

