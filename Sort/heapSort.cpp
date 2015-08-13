#include <iostream>

using namespace std;

void heapSort(int A[], int n);

int main()
{
    int i;
    int A[11] = {0, 5, 9, 2, 8, 3, 7, 1, 6, 0, 4};

    for (i = 1; i <= 10; ++i)
        cout << A[i] << " ";
    cout << endl;

    heapSort(A, 10);

    for (i = 1; i <= 10; ++i)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}

void heapAdjust(int A[], int i, int n)
{
    int j, rc = A[i];

    for (j = 2 * i; j <= n; j *= 2)
    {
        if (j < n && A[j] < A[j + 1])
            ++j;
        if (!(rc < A[j]))
            break;

        A[i] = A[j];
        i = j;
    }
    A[i] = rc;
}

void heapSort(int A[], int n)
{
    int i, tmp;

    for (i = n / 2; i >= 1; --i)
    {
         heapAdjust(A, i, n);
    }

    for (i = n; i > 1; --i)
    {
        tmp = A[i];
        A[i] = A[1];
        A[1] = tmp;

        heapAdjust(A, 1, i - 1);
    }
}
