#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ;
    struct Node * next ;
} ;

void lltrav (struct Node * ptr) ;
void ll_insert_atindex ( struct Node * head) ;


int main(){

    struct Node * head =(struct Node *)malloc(sizeof(struct Node)) ;
    struct Node * second =(struct Node *)malloc(sizeof(struct Node)) ;
    struct Node * third =(struct Node *)malloc(sizeof(struct Node)) ;

    head->data=10 ;
    head->next=second ;
    second->data=20 ;
    second->next=third ;
    third->data=30 ;
    third->next=NULL ;

    lltrav(head) ;

    printf("Lets Insert a newnode at any INDEX ...!!! \n") ;
    ll_insert_atindex(head) ;
}

void lltrav (struct Node * ptr) {
    int i =1 ;
    while (ptr!=NULL)
    {
    printf("The Data in Node %d is %d  \t",i,ptr->data) ;
    printf("The address of Next Node is %u  \n", ptr->next) ;
    i++ ;
    ptr=ptr->next ;
    }
    
}


void ll_insert_atindex ( struct Node * head) {
    struct Node * newnode =(struct Node *)malloc(sizeof(struct Node)) ;
    int newdata ;
    printf("Enter The Data of newnode :") ;
    scanf("%d",&newdata);
    newnode->data=newdata ;

    struct Node * ptr =head ;
    int index ;
    printf("Enter The Index at which you want to Insert:") ;
    scanf("%d",&index) ;
    int i= 1 ;
    while(i!=index - 1) {
        ptr = ptr->next ;
        i++ ;
    }
    newnode->next = ptr ->next ;
    ptr->next = newnode ;
    lltrav(head) ;
    
}


