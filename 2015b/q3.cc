//
// Created by kfirma on 25/07/17.
//
#include <iostream>
#include "q3.h"

using namespace std;

const struct Node *sort_n_perge(const struct Node *head)
{
    struct Node *pure_lst = NULL;
    const Node *temp = head;
    while (temp != NULL) {
        insert_sort(&pure_lst, temp->_data);
        temp = temp->_next;
    }

    cout << "AFTER sort: \n";
    print_list1(pure_lst);

    remove_duplicates(pure_lst);
    cout << "AFTER remove dup: \n";
    print_list1(pure_lst);
    return pure_lst;

}


void insert_sort(Node **head, unsigned int num)
{
    Node* temp, **ptr;

    if (!(temp = new (std::nothrow) Node))
    {
        cerr << "failed to allocate...\n";
        exit(-1);
    }
    temp->_data = num;

    //case #1: head is NULL
    if (*head == NULL)
    {
        *head = temp;
        temp->_next = NULL;
        return;
    }

    //case #2: add in the "right" location
    ptr = head;
    while (*ptr && (*ptr)->_data > num)   // ">" for down-order
                                          // "<" for up-order
        ptr = &(*ptr)->_next;
    temp->_next = *ptr;
    *ptr = temp;
}


void remove_duplicates(struct Node* head)
{
    struct Node* curr = head;  // Pointer to traverse the linked list
    struct Node* temp;   // to store the next pointer of a node to be deleted

    if (curr == NULL)   // list is empty
        return ;

    // Traverse the list till last node */
    while (curr->_next != NULL)
    {
        if (curr->_data == curr->_next->_data)
        {
            /* The sequence of steps is important*/
            temp = curr->_next->_next;
            delete(curr->_next);
            curr->_next = temp;
            continue;
        }
         //(else)          /* This is tricky: only advance if no deletion */
            curr = curr->_next;

    }
}


//==============================================
// insert_node_at_tail
//==============================================
void insert_node_at_tail(Node * &head, unsigned int num) {
    Node *temp;

    if (head==NULL) // first item
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

//==============================================
// build_list_at_tail
//==============================================
void build_list_at_tail (Node *&head) {
    unsigned int num;
    cout << "Enter numbers (0 -> end of input)\n";
    while (1) {
        cin >> num;
        if (num ==0)
            return;
        insert_node_at_tail(head, num);
    }
}



void print_list1(const Node* head)
{
    while (head)
    {
        cout << head->_data;
        if (head->_next)
            cout << " ==> ";
        head = head->_next;
    }
    cout << endl;
}

