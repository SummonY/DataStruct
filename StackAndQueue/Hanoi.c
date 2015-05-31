#include <stdio.h>
#include <math.h>

void hanoi1(int n, char A, char B, char C);
int hanoi2(int n);

int main(int argc, const char *argv[])
{
    int n = 8;
    printf("count = %d\n", hanoi2(8)); 
    hanoi1(n, 'A', 'B', 'C');
    return 0;
}

void hanoi1(int n, char A, char B, char C)
{
    static int count = 0;
    if (n == 1) {
        printf("%d: move dash %d from %c to %c\n", ++count, n, A, C);
        return ;
    }
    hanoi1(n - 1, A, C, B);
    printf("%d: move dash %d from %c to %c\n", ++count, n, A, C);
    hanoi1(n - 1, B, A, C);    
}

int hanoi2(int n)
{
    return pow(2, n) - 1;
}
