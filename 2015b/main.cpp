#include <iostream>
//#include "q1.h
//#include "q2.h"
#include "q3.h"
#include <iostream>

using namespace std;

int main()
{
    int qest;
    cout <<"enter question: \n";
    cin >> qest;

    switch (qest)
    {
        case 1:
        {

            return 0;
        }


        case 2:
        {


            return 0;

        }


        case 3:
        {
            Node* my_lst = NULL;
            build_list_at_tail (my_lst);
            print_list1(my_lst);
            sort_n_perge(my_lst);

        }

        default: ;
    }

    return 0;
}