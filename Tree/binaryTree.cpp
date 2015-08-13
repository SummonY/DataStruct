#include <iostream>

using namespace std;

typedef struct Node
{
    char data;
    struct Node *left;
    struct Node *right;
} BiNode, *BiTree;


BiTree createBiTree();

void preVisitRec(BiTree T);
void preVisitNonRec(BiTree T);

void inVisitRec(BiTree T);
void inVisitNonRec(BiTree T);

void postVisitRec(BiTree T);
void postVisitNonRec(BiTree T);

int main()
{
    BiTree T;

    T = createBiTree();

    cout << "\n递归方式前序遍历二叉树: " << endl;
    preVisitRec(T);

    cout << "\n非递归方式前序遍历二叉树: " << endl;


    cout << "\n递归方式中序遍历二叉树: " << endl;
    inVisitRec(T);

    cout << "\n非递归方式中序遍历二叉树: " << endl;
    
    
    cout << "\n递归方式后序遍历二叉树: " << endl;
    postVisitRec(T);

    cout << "\n非递归方式后序遍历二叉树: " << endl;

    cout << "\n层次遍历二叉树：" << endl;


    cout << "\n二叉树的深度: " << endl;


    return 0;
}

BiTree createBiTree()
{
    char ch;
    BiTree T = nullptr;

    cin >> ch;
    if (ch != '#')
    {
        T = new BiNode;
        if (!T)
            cout << "init fail" << endl;
        T->data = ch;
        T->left = createBiTree();
        T->right = createBiTree();
    }

    return T;
}

/*
 * 递归方式前序遍历
 */
void preVisitRec(BiTree T)
{
    if (T)
    {
        cout << T->data << " ";
        preVisitRec(T->left);
        preVisitRec(T->right);
    }
}


/*
 * 递归方式中序遍历
 */
void inVisitRec(BiTree T)
{
    if (T)
    {
        inVisitRec(T->left);
        cout << T->data << " ";
        inVisitRec(T->right);
    }
}


/*
 * 递归方式后序遍历
 */
void postVisitRec(BiTree T)
{
    if (T)
    {
        postVisitRec(T->left);
        postVisitRec(T->right);
        cout << T->data << " ";
    }
}
