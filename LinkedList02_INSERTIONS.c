// INSERTION IN LINKED LISTS  
// Three Types of Insertion :
// 1) Insert At Beginning  2) Insert in between   3) Insert at End
// special case 4) Insert after a specific Node 


#include<stdio.h>
#include<stdlib.h>
 

struct Node {
    int data ;
    struct Node * next ;
} ;

void LLtrav(struct Node * ptr) ;
void LLinsert_at_beg(struct Node * head) ;
void LLinsert_at_index(struct Node * head) ;
void LLinsert_at_end(struct Node * head) ;
void LLinsert_aftergivenode(struct Node * head ,struct Node * prevnode ) ;

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

 LLtrav(head) ;
 printf("Lets Insert a new Node at Beinning now...!! \n") ;
 LLinsert_at_beg(head) ;
 printf("Lets Insert a new Node at any Index now...!! \n") ;
 LLinsert_at_index(head) ;
  printf("Lets Insert a new Node at any End now...!! \n") ;
LLinsert_at_end(head) ;
printf("Lets Insert a new Node after any Given Node now...!! \n") ;
LLinsert_aftergivenode(head, second) ;


} 


void LLtrav(struct Node * ptr) {
    int i=1 ;
    while(ptr!=NULL) {
        printf("The Data of Node %d is :%d \t",i,ptr->data) ;
        printf("The Address of Next Node is: %u \n",ptr->next) ;
        i++ ;
        ptr=ptr->next ;
    }
}

void LLinsert_at_beg(struct Node * head) {
    struct Node * newnode = (struct Node * )malloc(sizeof(struct Node)) ;
     int new ;
     printf("Enter new data :") ;
     scanf("%d",&new) ;
    newnode->data=new ;
    newnode->next=head ;
    head=newnode ;
    LLtrav(head) ;
}

void LLinsert_at_index(struct Node * head) {
    struct Node * newnode= (struct Node * )malloc(sizeof(struct Node)) ;
     int new ;
     printf("Enter new data :") ;
     scanf("%d",&new) ;
    newnode->data=new ;
    int i=1 ;
    int index ;
    printf("Enter at which Index you want to insert :") ;
    scanf("%d",&index) ;
      struct Node * p=head ;
    while(i!=index-1){
        p=p->next ;
        i++ ;
    } 
    newnode->next=p->next ;
    p->next=newnode ;    
    LLtrav(head) ;

}

void LLinsert_at_end(struct Node * head) {
    struct Node * newnode = (struct Node *)malloc(sizeof(struct Node)) ;
    int new ;
     printf("Enter new data :") ;
     scanf("%d",&new) ;
    newnode->data=new ;
    struct Node * ptr=head ;
    while(ptr->next!=NULL) {
        ptr=ptr->next ;
    }
    ptr->next = newnode ;
    newnode->next = NULL ;
    LLtrav(head) ;
}

void LLinsert_aftergivenode(struct Node * head ,struct Node * prevnode ) {
    struct Node * newnode=(struct Node *)malloc(sizeof(struct Node)) ;
    int newdata ;
    printf("Enter new Data :") ;
    scanf("%d",&newdata) ;
    newnode->data=newdata ;

    newnode->next = prevnode->next ;
    prevnode->next = newnode ;
    LLtrav(head) ;
}