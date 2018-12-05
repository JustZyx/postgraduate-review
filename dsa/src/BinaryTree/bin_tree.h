//
// Created by 庄永新 on 2018/12/4.
//

#ifndef SRC_BIN_TREE_H
#define SRC_BIN_TREE_H

#include "bin_node.h"

template<typename T>
class BinTree {
private:
    int _size; //规模
    BinNodePosi(T) _root; //根节点

public:
    BinTree()
            :_size(0), _root(nullptr) { }
    int size() const { return _size; }
    bool empty() { return !_root; }
    BinNodePosi(T) insertAsRoot(T const& e); //当作根节点插入
    BinNodePosi(T) insertAsLc(BinNodePosi(T) x, T const& e); //当作x节点的左孩子节点插入
    BinNodePosi(T) insertAsRc(BinNodePosi(T) x, T const& e); //当作x节点的右孩子节点插入

    //遍历
    void travLevel(); //层序遍历
    void travPre(); //先序遍历
    void travIn(); //中序遍历
    void travPost(); //后续遍历
};

template<typename T>
BinNodePosi(T) BinTree<T>::insertAsRoot(T const& e)
{
    _size = 1;
    return _root = new BinNode<T>(e);
}

template<typename T>
BinNodePosi(T) BinTree<T>::insertAsLc(BinNodePosi(T) x, T const& e)
{
    _size++;
    return x->insertAsLc(e);
}

template<typename T>
BinNodePosi(T) BinTree<T>::insertAsRc(BinNodePosi(T) x, T const& e)
{
    return x->insertAsRc(e);
}

template<typename T>
void BinTree<T>::travLevel()
{

}

template<typename T>
void BinTree<T>::travPre()
{
    if (_root) {
        return _root->travPre();
    }
}

template<typename T>
void BinTree<T>::travIn()
{

}

template<typename T>
void BinTree<T>::travPost()
{

}
#endif //SRC_BIN_TREE_H
