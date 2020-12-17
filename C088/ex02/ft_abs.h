#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) "%d \n", Value < 0 ? Value * - 1 : Value
#endif