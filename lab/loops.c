#include <stdlib.h>

int main() 
{
    int t0 = 60; 
    int t1 = 0;

    while (t1 != t0) 
    {
        t1 += 5;
        t0 -= 1;
    }

    if (t1 != 0) 
    {
        exit(42);
    }

    exit(0);
}
