//
// Created by kfirma on 25/07/17.
//

#include "q1.h"
using namespace std;
#include <iostream>

void build_pos_neg_list(struct Node* head, struct Node* &pos_head,
                        struct Node* &neg_head)
{
    pos_head = neg_head = NULL;
    while (head!=  NULL)
    {
        if (head->_data >0)
            insert_node_at_tail(pos_head, head->_data);

        else if (head->_data < 0)
            insert_node_at_tail(neg_head, head->_data);

        head=head->_next;
    }
}




void insert_node_at_tail(Node * &head, int num)
{
    Node *temp;

    if (head == NULL) // first item
    {
        head = new Node;
        head->_data = num;
        head->_next = NULL;
    }
    else
    {
        temp = head;
        while (temp->_next != NULL)
            temp = temp->_next;
        // now temp points to the last node in the list
        temp->_next = new Node;
        temp->_next->_data = num;
        temp->_next->_next = NULL;
    }
}



//##################################

void build_list_at_tail (Node *&head)
{
    int num;
    cout << "Enter numbers (0 -> end of input)\n";
    while (1) {
        cin >> num;
        if (num ==0)
            return;
        insert_node_at_tail(head, num);
    }
}

void print_list(struct Node* head)
{
    while (head!= NULL)
    {
        cout<< head->_data <<", ";
        head = head->_next;
    }
    cout <<endl;
}