//
// Created by 庄永新 on 2018/11/6.
//

#ifndef SRC_BIN_NODE_H
#define SRC_BIN_NODE_H

#define BinNodePosi(T) BinNode<T>*
#define isRoot(x) (!(x.parent)) //二叉树节点x是否是根节点

#include <iostream>
#include <stack>

template<typename T>
class BinNode {
private:
    T data; //节点数据
    BinNodePosi(T) parent;
    BinNodePosi(T) lChild;
    BinNodePosi(T) rChild; //节点的父亲和左右孩子位置

public:
    //构造
    BinNode()
            :parent(nullptr), lChild(nullptr), rChild(nullptr) { }
    BinNode(T e, BinNodePosi(T) p = nullptr, BinNodePosi(T) lc = nullptr, BinNodePosi(T) rc = nullptr)
            :data(e), parent(p), lChild(lc), rChild(rc) { }

public:
    //插入
    BinNodePosi(T) insertAsLc(T const& e); //插入左孩子
    BinNodePosi(T) insertAsRc(T const& e); //插入右孩子

    //遍历
    void travLevel();
    void travPre();
    void travIn();
    void travPost();
};

template<typename T>
BinNodePosi(T) BinNode<T>::insertAsLc(T const& e)
{
    BinNodePosi(T) p = new BinNode(e, this);
    lChild = p;
    return p;
}

template<typename T>
BinNodePosi(T) BinNode<T>::insertAsRc(T const& e)
{
    BinNodePosi(T) p = new BinNode(e, this);
    rChild = p;
    return p;
}

template<typename T>
void BinNode<T>::travLevel()
{

}

template<typename T>
void BinNode<T>::travPre()
{
    BinNodePosi(T) x = this;
    std::stack<BinNodePosi(T)> s;
    if (x) {
        s.push(this);
    }
    while (!s.empty()) {
        x = s.top();
        s.pop();
        std::cout << x->data << std::endl;
        if (x->rChild) {
            s.push(x->rChild);
        }
        if (x->lChild) {
            s.push(x->lChild);
        }
    }
}

template<typename T>
void BinNode<T>::travIn()
{

}

template<typename T>
void BinNode<T>::travPost()
{

}
#endif //SRC_BIN_NODE_H
