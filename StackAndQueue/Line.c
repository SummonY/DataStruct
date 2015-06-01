#include <stdio.h>

int lineZone(int n);
int zlineZone(int n);

int main(int argc, const char *argv[])
{
    for (int n = 1; n <= 50; ++n) {
        printf("%d lines yield %d zone\n", n, lineZone(n));
        printf("%d zlines yield %d zone\n", n, zlineZone(n));
    }
    return 0;
}

int lineZone(int n)
{
    return n * (n + 1) / 2 + 1;
}

int zlineZone(int n)
{
    return 2 * n * n - n + 1;
}
