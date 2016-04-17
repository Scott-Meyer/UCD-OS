#include <stdint.h>

#define F (1 << 14) //F = 2^q, and we are doing 17.14 so q = 14.
//convention from pintos doc: x,y are fixed-point. n is int.

//Fixed-Point conversion
int int_to_fix(int n) {
  return (n*F);
}
int fix_to_int_round_down(int x) {
  return (x/F);
}
int fix_to_int_round_to_nearest(int x) {
  if (x >= 0)
    return ((x+F / 2) / F);
  else
    return ((x-F / 2) / F);
}

//Fixed-Point add/sub
int fix_add(int x, int y) {
  return (x+y);
}
int fix_sub(int x, int y) {
  return (x-y);
}
int fix_plus_int(int x, int n) {
  return (x + int_to_fix(n));
}
int fix_minus_int(int x, int n) {
  return (x - int_to_fix(n));
}

//Fixed-Point mult/div
int fix_mult(int x, int y) {
  return ( ((int64_t) x) * y / F );
}
int fix_div(int x, int y) {
  return ( ((int64_t) x) * F / y );
}
int fix_mult_int(int x, int n) {
  return (x*n);
}
int fix_div_int(int x, int n) {
  return (x/n);
}