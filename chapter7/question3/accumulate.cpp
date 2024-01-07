#include "accumulate.h"

int accumulate(int num){
    static int sum{0};
    sum += num;
    return sum; 
}