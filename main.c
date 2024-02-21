#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "std_node.h"

int main(int argc, const char * argv[]) 
{
    nodePtr head=NULL,temp;
    //insert_node(&head, argc , argv[]);
    
/*insert each node using input argument*/
    for(int i=1;i<argc;i=i+2) {
        if(i==1) 
        {
            head = (nodePtr)malloc(sizeof(struct std_node));
            temp = head;
        }
        else 
        {
            temp -> next = (nodePtr)malloc(sizeof(struct std_node));
            temp = temp -> next;
        }
        temp->id = atoi(argv[i]);
        strcpy(temp->name,argv[i+1]);
        temp->next=NULL;
    }
/* print all linked list*/
    temp=head;
        while(temp!=NULL)
        {
            printf("%d %s\n", temp->id, temp->name);
            temp = temp->next;
        }
 
/* delete all linked list*/
    while(head!=NULL)
        {
            temp=head;
            // printf("%d %s", temp->id, temp->name);
            head=head->next;
            free(temp);
        }
    return 0;
}