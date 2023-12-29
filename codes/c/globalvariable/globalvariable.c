#include<stdio.h>
#include<math.h>
#define squared(x) x*x
// also with (x*x), (x)*(x), ((x)*(x))

int main() {
    double ans = 18.0/squared(2+1);
    printf("ans = %f", ans);    
}