// to compile use: 
// gcc --shared -o <name>.so -fPIC <file_name>
// (to compile on mac only)

#include "q_math.h"

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}