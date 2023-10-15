/*
 * File: diffeq.cpp
 * Author: K Nitesh Reddy
 * Description: Implementation of Actual equation
 * Copyright (c) 2023, K Nitesh Reddy
 */

#include <iostream>
#include <math.h>
#include "diffeq.h"

using namespace std;

double
diff_func(double ind_var, double dep_var)
{
    double y_prime;

    y_prime = 4 * exp(0.8*ind_var) - 0.5 * dep_var;

    return y_prime;
}

double
diff_func_exact(double ind_var)
{
    double y_exact;

    y_exact = 4 * (exp(0.8*ind_var)-exp(-(.5*ind_var))) / 1.3 +2 * exp(-(0.5*ind_var));

    return y_exact;
}