//
// Created by kfirma on 24/07/17.
//
#include <iostream>
#include "q1.h"
using namespace std;
const int N = 10;

int print_count_empty_structs(void *array, bool is_empty_func(void *),
                        void*(*get_p_2_cell)(void *, int) )
{
    int count = 0;
    for (int i=0; i<N ;i++)
    {
        if (is_empty_func(get_p_2_cell(array ,i)))
            count++;
    }

    cout << count << endl;
}

bool is_empty_segment(void *p)
{
    return ( ((struct Segment*)p)->_x0 == ((struct Segment*)p)->_x1 );
}

bool is_empty_circle(void *p)
{
    return ( ((struct Circle*)p)->_radius== 0 );
}

///////////////
void gen_read_array(void* arr, int size,
                void*(*get_p_2_cell)(void *, int),
                void (*read_into_cell)(void*))
{
    for (int i = 0; i < N ; i++)
    {
        void *cell = get_p_2_cell(arr, i);
        read_into_cell(cell);
    }
}

void *get_seg_cell (void* p, int i)
{
    return (void*)((struct Segment *)p+ i);
}





void* alloc_segment()
{
    struct Circle *p = new(nothrow) struct Circle;
    if (p==NULL)
    {
        cerr <<"Cannot allocate memory";
        exit  (EXIT_FAILURE);
    }
    return  p;
}


void* alloc_circle() {
    struct Circle *p = new(nothrow) struct Circle;
    if (p == NULL) {
        cerr << "Cannot allocate memory";
        exit(EXIT_FAILURE);
    }

    return p;
}

void read_segment(void *p)
{
    cin >> ((struct Segment*)p)->_x0 >> ((struct Segment*)p)->_x1;
}


