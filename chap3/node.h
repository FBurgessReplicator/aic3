#ifndef NODE_H_
#define NODE_H_

typedef int item;
typedef struct node *link;

struct node {
    item i;
    link next;
};

struct double_linked_node {
    item i;
    link prev, next;
};

#endif /* NODE_H_ */
