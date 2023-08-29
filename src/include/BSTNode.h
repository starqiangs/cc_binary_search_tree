template <typename T>
class BSTNode
{
public:
    BSTNode(const T data, BSTNode *lchild, BSTNode *rchild) : _data(data), _lchild(lchild), _rchild(rchild) {}
    T _data;
    BSTNode *_lchild;
    BSTNode *_rchild;
};