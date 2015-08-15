#include <iostream>

using namespace std;

typedef struct Node {
    int value;
    struct Node *left;
    struct Node *right;
} *ListNode;

class Solution {
    public:
        ListNode createBST()
        {
            int val;
            ListNode L;

            cin >> val;
            if (val != -1) {
                L = new Node;
                L->value = val;
                L->left = createBST();
                L->right = createBST();
            }
            else
                L = nullptr;
            return L;
        }

        bool searchBST(ListNode L, int e)
        {
            ListNode p = L;
            if (p)
                return false;

            if (p->value == e)
                return true;
            else if (p->value > e)
                return searchBST(p->left, e);
            else
                return searchBST(p->right, e);
        }

        void insertBST(ListNode L, int e)
        {
            
        }

        void deleteBST(ListNode L, int e)
        {

        }
};

int main()
{
    Solution sl;
    ListNode L;
    int value;

    L = sl.createBST();
    cout << "please input the number you want to search : ";
    cin >> value;
    if (sl.searchBST(L, value))
        cout << "founded." << endl;
    else
        cout << "not found." << endl;
    return 0;
}
