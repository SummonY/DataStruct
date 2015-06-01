#include <stdio.h>
#include <math.h>

int josephus(int n);

int main(int argc, const char *argv[])
{
    for (int n = 1; n <= 100; ++n) {
        printf("n = %d, survey = %d\n", n, josephus(n));
    }
    return 0;
}

int josephus(int n)
{
    int m, l, i = 0;
    int p1 = pow(2, i), p2 = pow(2, i + 1);

    while (p1 <= n) {
        if (p1 <= n && p2 > n) {
            m = i;
            l = n - p1;
            break;
        }
        ++i;
        p1 = pow(2, i);
        p2 = pow(2, i + 1);
    }
    return 2 * l + 1;
}
