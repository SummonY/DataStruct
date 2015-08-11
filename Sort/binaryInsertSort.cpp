#include <iostream>

using namespace std;

void binaryInsertSort(int A[], int n);

int main()
{
    int i;
    int A[10] = {5, 4, 2, 9, 1, 8, 3, 7, 0, 6};

    for (i = 0; i < 10; ++i)
        cout << A[i] << " ";
    cout << endl;

    binaryInsertSort(A, 10);

    for (i = 0; i < 10; ++i)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}

void binaryInsertSort(int A[], int n)
{
    int min, max, mid, value;
    int i, j;

    for (j = 1; j < n; ++j) {
        min = 0;
        max = j;

        while (min <= max) {
            mid = (min + max) / 2;
            if (A[j] < A[mid])
                max = mid - 1;
            else if (A[j] >= A[mid])
                min = mid + 1;
        }
        value = A[j];

        for (i = j; i >= mid; --i) {
            A[i] = A[i - 1];
        }
        A[mid] = value;
    }
}
