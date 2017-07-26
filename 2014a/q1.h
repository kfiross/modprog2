//
// Created by kfirma on 24/07/17.
//

#ifndef INC_2014A_Q1_H
#define INC_2014A_Q1_H

struct Point
{
    int _x, _y;
};

struct Segment {
    double _x0,
           _x1 ;
} ;

struct Circle
{
    double _radius;
    Point _center;
};


int print_count_empty_structs(void *array, bool is_empty_func(void *),
                        void*(*get_p_2_cell)(void *, int) );
bool is_empty_segment(void *p);
bool is_empty_circle(void *p);



//void *gen_build_arr(void* arr, void* alloc_struct(), void read_struct(void *p));
void gen_read_array(void* arr, int size,
                    void*(*get_p_2_cell)(void *, int),
                    void (*read_into_cell)(void*));
void *get_seg_cell (void* p, int i);
void read_segment(void *p);
void* alloc_segment();

void* alloc_circle();

#endif //INC_2014A_Q1_H
