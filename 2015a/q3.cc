//
// Created by kfirma on 25/07/17.
//

#include "q3.h"
#include <iostream>
#include <cmath>
using namespace std;



int most(void *struct_array, bool (*compare_func)(void *, void *),
         void*(*get_p_2_cell)(void *, int) )
{
    bool res;
    int max_min = 0;
    void *place1, *place2;

    for (int i=1; i< N; i++)
    {
        place1 = (get_p_2_cell(struct_array, i));
        place2 = (get_p_2_cell(struct_array, max_min));

        res = compare_func(place1, place2);

        if (res)
            max_min = i;     //curr is new max/ min
    }
        return max_min;

}



bool compare_id_studs(void *p1, void* p2)
{
    return get_id_stud(p1) < get_id_stud(p2);
}

bool compare_height_stud(void *p1, void *p2)
{
    return ((struct Student*)p1)->_height > ((struct Student*)p2)->_height;

}

bool compare_avg_grade(void *p1, void *p2)
{
    return get_avg_grade_stud(p1) > get_avg_grade_stud(p2);
}

bool compare_num_course(void* p1 ,void* p2)
{
    return ((struct Course*)p1)->_course_name <
           ((struct Course*)p2)->_course_name;
}


bool compare_credit_pts_course (void* p1, void* p2)
{
    return ((struct Course*)p1)->_credit_points >
           ((struct Course*)p2)->_credit_points;
}


double get_avg_grade_stud(void *p)
    {
        struct Student* curr = ((struct Student*)p);
        int sum_grades=0;
        for (int i=0; i< MAX_GRADES; i++)
            sum_grades+=curr->_grades[i];

        return ( double(sum_grades)/ MAX_GRADES);

    }

int get_id_stud(void *p)
{
    struct Student* curr = ((struct Student*)p);
    int id_val=0;
    for (int i=0; i<ID_LEN ;i++)
    {
        id_val+=curr->_id[i]*pow(10 , ID_LEN-1-i);
    }

    return  id_val;

}


void *get_stud_cell (void* p, int i)
{
    return (void*)((struct Student *)p+ i);
}

void *get_cour_cell (void* p, int i)
{
    return (void*)((struct Course *)p+ i);
}


//////////////////

void gen_read_array(void* arr,
                    void*(*get_p_2_cell)(void *, int),
                    void (*read_into_cell)(void*))
{
    for (int i = 0; i < N ; i++)
    {
        void *cell = get_p_2_cell(arr, i);
        read_into_cell(cell);
    }
}

void* alloc_student()
{
    struct Student *p = new(std::nothrow) struct Student;
    if (p==NULL)
    {
        cerr <<"Cannot allocate memory";
        exit  (EXIT_FAILURE);
    }
    return  p;
}


void* alloc_course()
{
    struct Course *p = new(std::nothrow) struct Course;
    if (p == NULL) {
        cerr << "Cannot allocate memory";
        exit(EXIT_FAILURE);
    }

    return p;
}

void read_student(void *p)
{
    {
        for (int i=0 ; i<ID_LEN ;i++)
            cin >>((struct Student*)p)->_id[i];

        for (int i=0 ; i<MAX_GRADES ;i++)
            cin >>((struct Student*)p)->_grades[i];

        cin >>  ((struct Student*)p)->_height;
    }

}

void read_course(void *p)
{
    cin >> ((struct Course*)p)->_course_name
        >>  ((struct Course*)p)->_credit_points;
}

//1 2 3 4 5 6 7 8 9
//10 20 30 40 50 60 70 80 90 100
//189
//
//1 3 3 3 3 3 3 3 3
//2 2 2 2 2 2 2 2 2 2
//190
//
//2 2 2 2 2 2 2 2 2
//90 90 90 90 90 90 90 90 90 0
//100