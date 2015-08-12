#include <iostream>

using namespace std;

void shellSort(int A[], int n);

int main()
{
    int i;
    int A[10] = {5, 9, 1, 8, 3, 6, 2, 7, 0, 4};

    for (i = 0; i < 10; ++i) 
        cout << A[i] << " ";
    cout << endl;

    shellSort(A, 10);

    for (i = 0; i < 10; ++i) 
        cout << A[i] << " ";
    cout << endl;
    
    return 0;
}

void shellSort(int A[], int n)
{
    int i, j, k, l;
    int tmp;

    for (i = n / 2; i >= 1; i /= 2) 
    {
        for (j = 0; j < i; ++j)
        {
            for (k = j + i; k < n; k += i)
            {
                if (A[k] < A[k - i])
                {
                    for (l = k; l > j; l -= i)
                    {
                        if (A[l] < A[l - i])
                        {
                            tmp = A[l];
                            A[l] = A[l - i];
                            A[l - i] = tmp;
                        }
                        else
                            break;
                    }
                }
            }
        }
    }
}
