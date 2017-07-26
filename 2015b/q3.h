//
// Created by kfirma on 25/07/17.
//

#ifndef INC_2015B_Q3_H
#define INC_2015B_Q3_H

#endif //INC_2015B_Q3_H

struct Node {
    unsigned int _data;
    struct Node *_next;
};


const struct Node *sort_n_perge(const struct Node *head) ;
void insert_sort(Node **head, unsigned int num);
void remove_duplicates(struct Node* head);




void build_list_at_tail (Node *&head);
void insert_node_at_tail(Node * &head, unsigned int num);
void print_list1(const Node* head);
