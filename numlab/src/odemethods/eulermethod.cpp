/*
 * File: eulermethod.cpp
 * Author: K Nitesh Reddy
 * Description: Implementation of Euler Method: 1st Order RK Method
 * Copyright (c) 2023, K Nitesh Reddy
 */

#include <iostream>
#include "src/common/output.h"
#include "src/diffeqs/diffeq.h"
#include "eulermethod.h"

using namespace std;

double
ind_var_nxt_pt(double ind_var_curr_pt,double step_length)
{
    return ind_var_curr_pt + step_length;
}

double
dep_var_nxt_pt(double ind_var_curr_pt, double dep_curr_pt, double step_length)
{
    return dep_curr_pt + diff_func(ind_var_curr_pt, dep_curr_pt) * step_length;
}

double
calc_error(double dep_calc, double dep_exact)
{
    return (abs(dep_calc) - abs(dep_exact)) * 100 / abs(dep_exact);
}

void
euler_method(double goal_pt, double init_ind_var, double init_dep_var, double step_length)
{
    string iter_data[6];

    print_output_header();

    int iter_cnt = 0;
    double ind_curr_pt = init_ind_var;
    double dep_curr_pt = init_dep_var;
    double dep_calc = dep_var_nxt_pt(ind_curr_pt, dep_curr_pt, step_length);
    double dep_exact = diff_func_exact(ind_curr_pt + step_length);
    double error = calc_error(dep_calc, dep_exact);

    iter_data[0] = to_string(iter_cnt);
    iter_data[1] = to_string(ind_curr_pt);
    iter_data[2] = to_string(dep_curr_pt);
    iter_data[3] = to_string(dep_calc);
    iter_data[4] = to_string(dep_exact);
    iter_data[5] = to_string(error);

    print_output_iteration(iter_data);

    ind_curr_pt = ind_curr_pt + step_length;

    while(ind_curr_pt <= goal_pt) {
        iter_cnt++;
        dep_curr_pt = dep_calc;
        dep_calc = dep_var_nxt_pt(ind_curr_pt, dep_curr_pt, step_length);
        dep_exact = diff_func_exact(ind_curr_pt + step_length);
        error = calc_error(dep_calc, dep_exact);

        iter_data[0] = to_string(iter_cnt);
        iter_data[1] = to_string(ind_curr_pt);
        iter_data[2] = to_string(dep_curr_pt);
        iter_data[3] = to_string(dep_calc);
        iter_data[4] = to_string(dep_exact);
        iter_data[5] = to_string(error);

        print_output_iteration(iter_data);

        ind_curr_pt = ind_curr_pt + step_length;

    }


}



