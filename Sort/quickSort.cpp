#include <iostream>

using namespace std;

void quickSort(int A[], int min, int max);

int main()
{
    int i;
    int A[10] = {5, 9, 1, 8, 2, 7, 4, 6, 3, 0};

    for (i = 0; i < 10; ++i)
        cout << A[i] << " ";
    cout << endl;

    quickSort(A, 0, 9);


    for (i = 0; i < 10; ++i)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}


int quickLot(int A[], int min, int max)
{
    int loc, value;

    value = A[min];
    while (min < max) {
        while (value < A[max] && (min < max))
            --max;
        A[min] = A[max];
        while (value > A[min] && (min < max))
            ++min;
        A[max] = A[min];
    }
    A[min] = value;
    loc = min;
    return loc;
}



void quickSort(int A[], int min, int max)
{
    if (min < max) {
        int lot;

        lot = quickLot(A, min, max);
        quickSort(A, min, lot - 1);
        quickSort(A, lot + 1, max);
    }
}
