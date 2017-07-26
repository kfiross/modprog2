//
// Created by kfirma on 25/07/17.
//

#ifndef INC_2013B_Q1_H
#define INC_2013B_Q1_H

#endif //INC_2013B_Q1_H

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ DEFINED AT MAIN
struct Node {
    int _data ;
    struct Node *_next ;
} ;

//****************************************** SOLUTION
void build_pos_neg_list(struct Node* head, struct Node* &pos_head,
                        struct Node* &neg_head);
void insert_node_at_tail(Node * &head, int num) ;


//################################################## FOR DEBUG
void build_list_at_tail (Node *&head);
void print_list(struct Node* head);