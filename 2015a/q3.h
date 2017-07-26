//
// Created by kfirma on 25/07/17.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
#ifndef INC_2015A_Q1_H
#define INC_2015A_Q1_H

#endif //INC_2015A_Q1_H

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ DEFINED AT MAIN
const int ID_LEN =9;
const int MAX_GRADES = 10;
const int N = 3;       //num of structs in studs/courses array

struct Student{
    int _id[ID_LEN];
    double _height;
    int _grades[MAX_GRADES];
};


struct Course{
    int _course_name,
        _credit_points;
};

//****************************************** P

//main generic function
int most(void *struct_array, bool (*compare_func)(void *, void *),
         void*(*get_p_2_cell)(void *, int) );

// (all) compare_func
bool compare_id_studs(void *p1, void* p2);
bool compare_height_stud(void *p1, void *p2);
bool compare_avg_grade(void *p1, void *p2);
bool compare_num_course(void* p1 ,void* p2);
bool compare_credit_pts_course (void* p1, void* p2);

/// help sub-funcs
double get_avg_grade_stud(void *p);
int get_id_stud(void *p);
  void* get_stud_cell (void* p, int i);
  void* get_cour_cell (void* p, int i);

//################################################## FOR DEBUG
void gen_read_array(void* arr,
                    void*(*get_p_2_cell)(void *, int),
                    void (*read_into_cell)(void*));

void* alloc_student();
void* alloc_course() ;
void read_student(void *p);
void read_course(void *p);