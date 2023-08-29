#pragma once

#include "BSTNode.h"

// BST树的定义为 左子树节点小于父节点 父节点小于右子树节点

template <typename T>
class BSTree
{
public:
    BSTree() : _root(nullptr){};
    ~BSTree(){};
    // 循环
    bool Insert(BSTNode<T> *node)
    {
        BSTNode<T> *temp = nullptr;
        BSTNode<T> *parent = nullptr;
        if (this->_root == nullptr)
        {
            this->_root = node;
            return true;
        }
        temp = this->_root;
        while (temp != nullptr)
        {
            parent = temp;
            if (temp->_data > node->_data)
            {
                temp = temp->_lchild;
            }
            else
            {
                temp = temp->_rchild;
            }
        }
        // 判断该节点
        if (node->_data < parent->_data)
        {
            parent->_lchild = node;
        }
        else
        {
            parent->_rchild = node;
        }
        return true;
    }

    // 递归
    bool InsertNode(BSTNode<T> *tree, BSTNode<T> *node)
    {
        if (tree == nullptr)
        {
            tree = node;
            return true;
        }
        if (tree->_data > node->_data)
        {
            return InsertNode(tree->_lchild, node);
        }
        else
        {
            return InsertNode(tree->_rchild, node);
        }
    }

    BSTNode<T> *SearchNode(int data)
    {
        BSTNode<T> *temp = this->_root;
        while (temp != nullptr)
        {
            if (temp->_data > data)
            {
                return SearchNode(temp->_lchild, data);
            }
            else if (temp->_data < data)
            {
                return SearchNode(temp->_rchild, data);
            }
            else
            {
                return temp;
            }
        }
        return nullptr;
    }

    void InOrder(BSTNode<T> *tree)
    {
        if (tree == nullptr)
            return;
        InOrder(tree->_lchild);
        std::cout << tree->_data << " ";
        InOrder(tree->_rchild);
    }
    void PreOrder(BSTNode<T> *tree)
    {
        if (tree == nullptr)
            return;
        std::cout << tree->_data << " ";
        PreOrder(tree->_lchild);
        PreOrder(tree->_rchild);
    }
    void PostOrder(BSTNode<T> *tree)
    {
        if (tree == nullptr)
            return;
        PostOrder(tree->_lchild);
        PostOrder(tree->_rchild);
        std::cout << tree->_data << " ";
    }

    BSTNode<T> *GetRoot()
    {
        return _root;
    }

private:
    BSTNode<T> *_root;
};