// Creating a Static Linked List with mo. of Nodes = 4 

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ;
    struct Node * next;
} ;

void lltrav(struct Node * ptr) ;

int main () {
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data=10 ;
    head->next=second ;
    second->data=20 ;
    second->next=third ;
    third->data=30;
    third->next=fourth ;
    fourth->data=40 ;
    fourth->next=NULL ;

    lltrav(head) ;
}

void lltrav(struct Node * ptr) {
    int i=1 ;
    while(ptr!=NULL){
        printf("The Data of Node %d is : %d \t",i,ptr->data) ;
        printf("The Address of Next Node is %u \n",ptr->next) ;
        i++ ;
        ptr=ptr->next;
    }
}