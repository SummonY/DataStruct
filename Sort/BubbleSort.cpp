#include <iostream>

using namespace std;

void BundleSort(int A[], int n);

int main(int argc, const char *argv[])
{
    int Array[10] = {3, 8, 2, 9, 1, 7, 0, 4, 6, 5};

    cout << "Before Sort :" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << Array[i] << " ";
    }
    cout << endl;

    BundleSort(Array, 10);
    
    cout << "After Sort :" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << Array[i] << " ";
    }
    cout << endl;
    return 0;
}

void BundleSort(int A[], int n)
{
    int i, j, tmp;

    for (i = 0; i < n; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            if (A[j] > A[j + 1]) {
                tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }
}
