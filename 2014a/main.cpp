#include <iostream>
#include <cstdlib>

const int N =10;
#include "q1.h"
//#include "q3.h"
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
            int arr[10];

            struct Segment segments[N];
            struct Circle circles[N] ;
            gen_read_array(segments, N, get_seg_cell,read_segment);
            print_count_empty_structs(segments, is_empty_segment, get_seg_cell);

            return 0;
        }


        case 2:
        {

            return 0;

        }


        case 3:
        {


        }

        default: ; break;
    }

    return  0;
}


