//
// Created by kfirma on 25/07/17.
//

#ifndef INC_2015B_Q2_H
#define INC_2015B_Q2_H

#endif //INC_2015B_Q2_H

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ DEFINED AT MAIN

struct NodeT {
    int _data ;
    struct NodeT *_left, *_right ;
} ;

//****************************************** SOLUTION
void func(struct NodeT* root,
          int &shallowest_leaf_depth , int &deepest_leaf_depth);

 int max(int a, int b);
int get_depth(struct NodeT* root);    //known as max_depth

 int min(int a, int b);
int min_depth(struct NodeT* root);
bool is_leaf(struct NodeT* root);

//################################################## FOR DEBUG