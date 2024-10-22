#include "stdio.h"
#include "math.h"

int main() {
    unsigned long long m, n, a;
    scanf("%llu %llu %llu  ", &m, &n, &a);
    unsigned long long l1 = ceil((float)m/a);
    unsigned long long l2 = ceil((float)n/a);
    unsigned long long max = l1 * l2;
    printf("%llu", max);
    return 0;
}