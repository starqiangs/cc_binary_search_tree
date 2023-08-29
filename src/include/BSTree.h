#include "BSTNode.h"

template <typename T>
class BSTree
{
public:
    BSTree() : _root(nullptr){};
    ~BSTree(){};
    bool Insert(T data);
    bool Delete(T data);
    void Print();

private:
    BSTNode<T> *_root;
};