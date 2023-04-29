// INTRODUCTION TO LINKED LIST
// WHAT IS LINKED LIST AND ITS ANALOGY WITH Hospital beds
// Difference b/w LL and Arrays
// Advantages and Disadvantages of Linked List



// Creation and Traversal of Linked List (STATIC NODES=4)


#include <stdio.h>
#include<stdlib.h>  //coz we are using malloc 
struct Node
{
    int data;
    struct Node *next;  // SELF REFERENCING STRUCTURE
};


void linkedlisttrav(struct Node * ptr) ;  // Function for Printing/Displaying the LL data

int main()
{
    // Declaring 4 nodes using pointers
    struct Node *head; // first is also called as Head
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocating memory for nodes in Heap using malloc
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

   // Intialising Data in Head(1st) Node and Linking with 2nd Node 
    head->data=786 ;
    head->next=second ;

    // Intialising Data in 2nd Node and Linking with 3nd Node   
    second->data=25 ;
    second->next=third ;

    // Intialising Data in 3nd Node and Linking with 4nd Node
    third->data=63 ;
    third->next=fourth ;

    // Intialising Data in 4nd Node and Terminating it by allocating NULL 
    fourth->data=863 ;
    fourth->next=NULL ;

linkedlisttrav(head) ;   //Calling function for Displaying the LL data by passing HEAD ptr 

}

void linkedlisttrav(struct Node * ptr) {
    int i=1; // For displaying the index of nodes

    while(ptr!=NULL) {  // loop terminates at ptr=NULL i.e. The End of our LL
        printf("Element of Node %d is: %d \n ",i, ptr->data ) ;
        printf("The address of next Node is : %d \n", ptr->next);
        i++ ;
        ptr=ptr->next ;
    }
}


