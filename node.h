#ifndef node.h
#define node.h

struct std_node {
    int id;
    char name[50];
    struct std_node *next;
}
typedef struct std_node* nextPtr;

void insert_node(node_Ptr *h , int , char[]);
void printf_LL(nodePtr *);
void delete_LL(nodePtr *);

#endif
