#include <iostream>
#include "q1.h
#include "q3.h"

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
            Node* my_lst = NULL;
            build_list_at_tail(my_lst);
            print_list(my_lst);


            Node* pos_l ,*neg_l;
            build_pos_neg_list (my_lst, pos_l, neg_l);

            print_list(neg_l);
            print_list(pos_l);

            return 0;
        }


        case 2:
        {


            return 0;

        }


        case 3:
        {
            struct Student std_array[N];
            struct Course cour_array[N];

            gen_read_array(std_array, get_stud_cell, read_student);
            gen_read_array(cour_array, get_cour_cell, read_course);

            int wanted_id = most(std_array, compare_id_studs, get_stud_cell);
            int wanted_hight = most(std_array, compare_height_stud, get_stud_cell);
            int wanted_avg = most(std_array, compare_avg_grade, get_stud_cell);
            int wanted_num_crs = most(cour_array, compare_num_course, get_cour_cell);
            int wanted_credit = most(cour_array, compare_credit_pts_course, get_cour_cell);

            cout <<endl;
            cout <<"min INDEX of ID= " <<wanted_id <<endl;
            cout <<"max INDEX of HIGHT= " <<wanted_hight <<endl;
            cout <<"max INDEX of AVG= " <<wanted_avg <<endl;

            cout <<"min INDEX of NUM_CORSe= " <<wanted_num_crs <<endl;
            cout <<"max INDEX of CREDIT= " <<wanted_credit<<endl;

        }

        default: ;
    }

    return 0;
}