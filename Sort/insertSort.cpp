#include <iostream>

using namespace std;

void insertSort(int A[], int n);

int main()
{
    int i;
    int A[10] = {5, 2, 8, 3, 9, 1, 6, 0, 7, 4};

    for (i = 0; i < 10; ++i)
        cout << A[i] << " ";
    cout << endl;

    insertSort(A, 10);

    for (i = 0; i < 10; ++i)
        cout << A[i] << " ";
    cout << endl;
    return 0;
}

void insertSort(int A[], int n)
{
    int i, j, tmp;

    for (i = 1; i < n; ++i) {
        for (j = i; j > 0; --j) {
            if (A[j] < A[j - 1]) {
                tmp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = tmp;
            }
            else
                break;
        }
    }
}
