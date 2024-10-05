#pragma once
#ifndef EXTRA_TASK_1_H
#define EXTRA_TASK_1_H
#include <cassert>
#include <iostream>

//Returns the number of seconds later that a time in seconds time_2 is than a time in seconds time_1.
double seconds_difference(double, double);

//Returns the number of hours later that a time in seconds time_2 is than a time in seconds time_1.
double hours_difference(double, double);

//Returns the total number of hours in the specified number of hours, minutes, and seconds.
double to_float_hours(int, int, int);

#endif // !EXTRA_TASK_1_H
