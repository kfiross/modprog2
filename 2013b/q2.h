//
// Created by kfirma on 25/07/17.
//

#ifndef INC_2013B_Q2_H
#define INC_2013B_Q2_H

#endif //INC_2013B_Q2_H

struct Point {
    double _x, _y ;
} ;

struct Node {
    struct Point _data ;
    struct Node *_left, *_right ;
} ;

int quarter(const struct Node *root)
{
    if (root =NULL)
        return 0;

    Point data= root->_data;

    if (data._x >0 && data._y> 0)
        return 1;
    if (data._x <0 && data._y >0)
        return 2;
    if (data._x <0 && data._y <0)
        return 3;
    else
        return 4;

}

void biggest_same_quater_subtree(struct Node* root, int &quter_num, int &tree_size)
{



}
