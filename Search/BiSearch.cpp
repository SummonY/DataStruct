#include <iostream>

using namespace std;

class Solution {
    public:
        int binarySearch(int A[], int n, int e)
        {
            int low = 1, high = n;
            int mid;

            while (low <= high) {
                mid = (low + high) / 2;
                if (A[mid] == e)
                    return mid;
                if (A[mid] < e)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            if (low > high)
                return -1;
        }
};

int main()
{
    int A[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int e = 15, pos;

    Solution sl;
    pos = sl.binarySearch(A, 14, e);
    if (pos == -1)
        cout << "element " << e << " not found." << endl;
    else
        cout << "The position of element " << e << " is " << pos << endl;
    return 0;
}
