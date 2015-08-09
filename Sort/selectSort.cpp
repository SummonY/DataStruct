#include <iostream>

using namespace std;

void selectSort(int A[], int n);

int main()
{
    int i;
    int A[10] = {5, 8, 3, 7, 2, 9, 1, 0, 6, 4};
    
    for (i = 0; i < 10; ++i)
        cout << A[i] << " ";
    cout << endl;

    selectSort(A, 10);

    for (i = 0; i < 10; ++i)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}


void selectSort(int A[], int n)
{
    int i, j, min, pos, tmp;

    for (i = 0; i < n; ++i) {
        min = A[i];
        pos = i;

        for (j = i; j < n; ++j) {
            if (A[j] < min) {
                min = A[j];
                pos = j;
            }
        }
        tmp = A[i];
        A[i] = min;
        A[pos] = tmp;
    }
}
