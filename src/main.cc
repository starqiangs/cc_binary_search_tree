#include <iostream>

#include "BSTree.h"

int main()
{
    BSTree<int> tree;

    BSTNode<int> *node1 = new BSTNode<int>(10, nullptr, nullptr);
    BSTNode<int> *node2 = new BSTNode<int>(23, nullptr, nullptr);
    BSTNode<int> *node3 = new BSTNode<int>(3, nullptr, nullptr);
    BSTNode<int> *node4= new BSTNode<int>(21, nullptr, nullptr);
    BSTNode<int> *node5 = new BSTNode<int>(8, nullptr, nullptr);
    BSTNode<int> *node6 = new BSTNode<int>(20, nullptr, nullptr);
    BSTNode<int> *node7 = new BSTNode<int>(93, nullptr, nullptr);
    BSTNode<int> *node8 = new BSTNode<int>(7, nullptr, nullptr);
    BSTNode<int> *node9 = new BSTNode<int>(2, nullptr, nullptr);
    tree.Insert(node1);
    tree.Insert(node2);
    tree.Insert(node3);
    tree.Insert(node4);
    tree.Insert(node5);
    tree.Insert(node6);
    tree.Insert(node7);
    tree.Insert(node8);
    tree.Insert(node9);

    std::cout << "Preorder traversal: ";
    tree.PreOrder(tree.GetRoot());
    std::cout << std::endl;

    std::cout << "Inorder traversal: ";
    tree.InOrder(tree.GetRoot());
    std::cout << std::endl;

    std::cout << "Postorder traversal: ";
    tree.PostOrder(tree.GetRoot());
    std::cout << std::endl;

    return 0;
}