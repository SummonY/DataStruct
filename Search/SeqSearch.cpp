#include <iostream>

using namespace std;

class Solution {
    public:
        int seqSearch(int A[], int n, int e)
        {
            int i;
            
            for (i = 0; i < n; ++i) {
                if (A[i] == e)
                    return i;
            }
            if (i == n)
                return -1;
        }
};

int main()
{
    int A[10] = {3, 8, 2, 6, 1, 0, 4, 9, 7, 5};
    int e = 10;

    Solution sl;
    cout << "The position of " << e << " is : " << sl.seqSearch(A, 10, e) << endl;

    return 0;
}
