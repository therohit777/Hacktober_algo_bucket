#include <iostream>
#include <queue>
using namespace std;

// Node structure

struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

// function for building the path

bool findPath(Node *root, vector<Node *> &p, int n)
{
    if (root == NULL)
    {
        return false;
    }
    p.push_back(root);
    if (root->key == n)
    {
        return true;
    }
    if (findPath(root->left, p, n) || findPath(root->right, p, n))
    {
        return true;
    }
    p.pop_back();
    return false;
}

// main LCA function

Node *LCA(Node *root, int n1, int n2)
{
    vector<Node *> path1, path2;
    if (findPath(root, path1, n1) == false || findPath(root, path2, n2) == false)
    {
        return NULL;
    }
    int i;
    for (i = 0; i < path1.size() - 1 and i < path2.size() - 1; i++)
    {
        cout << i << " ";
        if (path1[i + 1] != path2[i + 1])
        {
            return path1[i];
        }
    }
    cout << i << endl;

    if (i == path1.size())
    {
        cout << "printing 1" << endl;
        return path2[i];
    }
    else
    {
        cout << "printing 2" << endl;
        return path1[i];
    }

    return NULL;
}

// ================================================

// method 2 :

// Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
// {
//     if (root == NULL || root == p || root == q)
//     {
//         return root;
//     }

//     Node *left = lowestCommonAncestor(root->left, p, q);
//     Node *right = lowestCommonAncestor(root->right, p, q);

//     if (left == NULL)
//     {
//         return right;
//     }
//     else if (right == NULL)
//     {
//         return left;
//     }
//     else
//     {
//         return root;
//     }
// }

// main code starts here

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->left->left = new Node(70);
    root->left->left->right = new Node(80);
    root->right->left = new Node(60);
    if (LCA(root, n1, n2))
    {
        cout << LCA(root, n1, n2)->key << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}