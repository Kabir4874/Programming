#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left, *right;
    BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
    BinaryTreeNode(T x) : data(x), left(NULL), right(NULL) {}
    BinaryTreeNode(T x, BinaryTreeNode<T> *left, BinaryTreeNode<T> *right) : data(x), left(left), right(right) {}
};

bool searchInBST(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == x)
    {
        return true;
    }
    if (root->data > x)
    {
        return searchInBST(root->left, x);
    }
    else
    {
        return searchInBST(root->right, x);
    }
}

BinaryTreeNode<int> *insertIntoBST(BinaryTreeNode<int> *root, int data)
{
    if (root == NULL)
    {
        return new BinaryTreeNode<int>(data);
    }

    if (data <= root->data)
    {
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

void levelOrderTraversal(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        BinaryTreeNode<int> *current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left != NULL)
        {
            q.push(current->left);
        }
        if (current->right != NULL)
        {
            q.push(current->right);
        }
    }
}

int main()
{
    int n, x;
    cout << "Enter the number of nodes and the number to search: ";
    cin >> n >> x;

    BinaryTreeNode<int> *root = NULL;

    cout << "Enter elements to insert into BST: ";
    for (int i = 0; i < n; ++i)
    {
        int data;
        cin >> data;
        root = insertIntoBST(root, data);
    }

    cout << "Level Order Traversal of BST:" << endl;
    levelOrderTraversal(root);
    cout << endl;

    bool result = searchInBST(root, x);

    cout << (result ? "True" : "False") << endl;

    return 0;
}
