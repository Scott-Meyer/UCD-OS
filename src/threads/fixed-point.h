#include <stdint.h>

static int F = (1 << 14); //F = 2^q, and we are doing 17.14 so q = 14.
//convention from pintos doc: x,y are fixed-point. n is int.

//Fixed-Point conversion
int int_to_fix(n) {
    return (n*F);
}
int fix_to_int(x) {
    if (x >= 0)
        return ((x+F / 2) / F);
    else
        return ((x-F / 2) / F);
}

//Fixed-Point add/sub
int fix_add(x, y) {
    return (x+y);
}
int fix_sub(x, y) {
    return (x-y);
}
int fix_plus_int(x, n) {
    return (x + int_to_fix(n));
}
int fix_minus_int(x, n) {
    return (x - int_to_fix(n));
}

//Fixed-Point mult/div
int fix_mult(x, y) {
    return ( ((int64_t) x) * y / F );
}
int fix_div(x, y) {
    return ( ((int64_t) x) * F / y );
}
int fix_mult_int(x, n) {
    return (x*n);
}
int fix_div_int(x, n) {
    return (x/n);
}