#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ;
    struct Node * next ;
} ;


void LLtrav(struct Node * ptr) ;
void LL_insert_afteranyindex(struct Node * head,struct Node * ptr) ;

int main (){
    struct Node * head =(struct Node *)malloc(sizeof(struct Node));
    struct Node * second =(struct Node *)malloc(sizeof(struct Node));
    struct Node * third =(struct Node *)malloc(sizeof(struct Node));


    head->data = 10 ;
    head->next=second ;
    second->data=20 ;
    second->next=third ;
    third->data = 30 ;
    third->next = NULL ;

    LLtrav(head) ;
    printf("Lets Insert a NewNode after a Predecided Node (Here after second Node)") ;
    LL_insert_afteranyindex(head,second) ; 
}

void LLtrav(struct Node * ptr) {
    int i = 1 ;
    while(ptr!=NULL) {
        printf("The Data in Node %d is %d \t",i,ptr->data) ;
        printf("The Address of next Node is %u \n", ptr->next) ;
        i++ ;
        ptr=ptr->next ;
    }
}

void LL_insert_afteranyindex(struct Node * head,struct Node * ptr) {
    struct Node * newnode =(struct Node *)malloc(sizeof(struct Node)) ;
    int newdata ;
    printf("Enter new data :") ;
    scanf("%d",&newdata) ;
    newnode->data=newdata ;
    newnode->next=ptr->next ;
    ptr->next=newnode ;
    LLtrav(head) ;
 }