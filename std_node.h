//
//  std_node.h
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#ifndef std_node_h
#define std_node_h



struct std_node
{
    int id;
    char name[30];
    struct std_node *next;
};
typedef struct std_node* nodePtr;

/*void insert_node(nodePtr *h, int i, char [])
{
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
}
void print_LL(nodePtr *)
{
    temp=head;
        while(temp!=NULL)
        {
            printf("%9d %15s", temp->id, temp->name);
            temp = temp->next;
        }
        printf("\n");
}
void delete_LL(nodePtr *)
{
    while(head!=NULL)
        {
            temp=head;
            printf("%9d %15s", temp->id, temp->name);
            head=head->next;
            free(temp);
        }
        printf("\n");
}
*/
#endif /* std_node_h */