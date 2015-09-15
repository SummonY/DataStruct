#include <iostream>
#include <string>

using namespace std;

const int max_child = 26;

struct TreeNode {
    int count;
    struct TreeNode *child[max_child];
    TreeNode():count(0) {
        for (int i = 0; i < max_child; ++i) {
            child[i] = NULL;
        }
    }
};


TreeNode* createTree();
void insertTree(TreeNode *root, string str);
bool searchTree(TreeNode *root, string str);
void deleteTree(TreeNode *root);

int main()
{
    TreeNode *root = NULL;
    if ((root = createTree()) == NULL) {
        cout << "创建Trie树失败..." << endl;
        return -1;
    }
    int num;
    cout << "请输入创建Trie树大小:";
    cin >> num;
    for (int i = 0; i < num; ++i) {
        string str;
        cin >> str;
        insertTree(root, str);
    }
    cout << "请输入要查询的字符串：";
    string s;
    cin >> s;
    if (searchTree(root, s)) {
        cout << s << " 在Trie树中!" << endl;
    } else {
        cout << s << " 不在Trie树中!" << endl;
    }
    deleteTree(root);
    return 0;
}

/*
 * 创建Trie树
 */
TreeNode* createTree()
{
    TreeNode *Node = new TreeNode;
    Node->count = 0;
    return Node;
}

/*
 * 插入Trie节点
 */
void insertTree(TreeNode *root, string str)
{
    if (root == NULL || str.size() == 0) {
        return ;
    }
    TreeNode *T = root;
    for (int i = 0; i < str.size(); ++i) {
        if (T->child[str[i] - 'a'] == NULL) {
            TreeNode *tmp = createTree();
            T->child[str[i] - 'a'] = tmp;
        }
        T = T->child[str[i] - 'a'];
    }
    ++T->count;
}

/*
 * 搜索字符串str 是否在Trie树中
 */
bool searchTree(TreeNode *root, string str)
{
    if (root == NULL || str.size() == 0) {
        return false;
    }
    TreeNode *T = root;
    for (int i = 0; i < str.size(); ++i) {
        if (T->child[str[i] - 'a'] == NULL) {
            return false;
        } else {
            T = T->child[str[i] - 'a'];
        }
    }
    return true;
}

/*
 * 删除Trie树
 */
void deleteTree(TreeNode *root)
{
    if (root == NULL) {
        return ;
    }
    for (int i = 0; i < max_child; ++i) {
        if (root->child[i] != NULL) {
            delete root->child[i];
        }
    }
    delete root;
}
