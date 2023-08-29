#include <iostream>

#include "BSTree.h"

int main()
{
    BSTree<int> tree;

    for (int i = 1; i < 8; i++)
    {
        BSTNode<int> *node = new BSTNode<int>(i, nullptr, nullptr);
        tree.Insert(node);
    }
    std::cout << "Inorder traversal: ";
    tree.InOrder(tree.GetRoot());
    std::cout << std::endl;

    std::cout << "Preorder traversal: ";
    tree.PreOrder(tree.GetRoot());
    std::cout << std::endl;

    std::cout << "Postorder traversal: ";
    tree.PostOrder(tree.GetRoot());
    std::cout << std::endl;

    return 0;
}