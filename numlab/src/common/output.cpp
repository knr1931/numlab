/*
 * File: output.cpp
 * Author: K Nitesh Reddy
 * Description: Used for Printing Iteration Point
 * Copyright (c) 2023, K Nitesh Reddy
 */

#include <iostream>
#include <iomanip>
#include "output.h"

using namespace std;

void
print_same_char(string char_to_print,int num_times)
{
    for(int i=0; i<num_times; i++){
        cout << char_to_print;
    }
}

int
max_header_length(string headers[], int header_length){
    int max_length;

    max_length = headers[0].length();

    for(int i=1;i<header_length;i++){
        if(headers[i].length()>max_length){
            max_length = headers[i].length();
        }
    }

    return max_length;
}

void
centre_allign(string headers[], int header_length)
{
    const int header_width = 10;
    // int max_head_length = max_header_length(headers,header_length);

    for(int i=0;i<header_length;i++){
        cout << "|" << setw(header_width)  << left << headers[i] << setw(header_width);
    }
    cout << "|" << endl;
}

void
print_output_header()
{
    string headers[] = {"i","xi","yi","yi+1","yexact","error"};

    centre_allign(headers, 6);

}

void
print_output_iteration(string iter_data[])
{
    centre_allign(iter_data,6);
}
