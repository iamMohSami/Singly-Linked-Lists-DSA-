#include<stdio.h>
#include<stdlib.h>
 

struct Node {
    int data ;
    struct Node * next ;
} ;

void lltrav(struct Node * ptr) ;
void llinsert_at_end(struct Node * head) ; 
 
 int main () {
 struct Node * head = (struct Node *)malloc(sizeof(struct Node));
 struct Node * second = (struct Node *)malloc(sizeof(struct Node));
 struct Node * third = (struct Node *)malloc(sizeof(struct Node));
 struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));

 head->data=10 ;
 head->next=second ;
 second->data=20 ;
 second->next=third ;
 third->data=30 ;
 third->next=fourth ;
 fourth->data=40 ;
 fourth->next=NULL ;

 lltrav(head) ;
 printf("Lets Insert a Node at END....") ;
 llinsert_at_end(head);
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

 void llinsert_at_end(struct Node * head) {
    struct Node * newnode = (struct Node *)malloc(sizeof(struct Node)) ;
    int  newdata ;
    printf("Enter The Data of newnode at End:") ;
    scanf("%d",&newdata) ;
    newnode->data=newdata ;

    struct Node * ptr=head ;
    while (ptr->next!=NULL){
        ptr=ptr->next ;
    }
    ptr->next=newnode ;
    newnode->next=NULL ;
    lltrav(head) ;
 }