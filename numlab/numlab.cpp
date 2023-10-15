/*
 * File: numlab.cpp
 * Author: K Nitesh Reddy
 * Description: Main Entry Point for Numlab Project
 * Copyright (c) 2023, K Nitesh Reddy
 */

#include <iostream>
#include <iomanip>
#include "src/odemethods/eulermethod.h"

using namespace std;

int main() {

    double step_length = 1;
    double goal_pt = 4;
    double init_ind_var = 0;
    double init_dep_var = 2;

    int count = 0;

    cout << endl << endl << "Step Length: " << step_length << endl << endl << endl;

    euler_method(goal_pt, init_ind_var, init_dep_var, step_length);

    while(count < 5) {
        count++;

        step_length = step_length / 2;

        cout << endl << endl << "Step Length: " << step_length << endl << endl << endl;

        euler_method(goal_pt, init_ind_var, init_dep_var, step_length);
    }

    return 0;
}