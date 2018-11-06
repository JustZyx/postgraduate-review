//
// Created by 庄永新 on 2018/11/6.
//

#ifndef SRC_BIN_NODE_H
#define SRC_BIN_NODE_H

#define BinNodePosi(T) BinNode<T>*
#define isRoot(x) (!(x.parent)) //二叉树节点x是否是根节点
#define

template<typename T>
class BinNode {
private:
    T data; //节点数据
    BinNodePosi(T) parent, lChild, rChild; //节点的父亲和左右孩子位置

    //构造
    BinNode()
            :parent(nullptr), lChild(nullptr), rChild(nullptr) { }
    BinNode(T e, BinNodePosi(T) p = nullptr, BinNodePosi(T) lc = nullptr, BinNodePosi(T) rc = nullptr)
            :data(e), parent(p), lChild(lc), rChild(rc) { }

    //插入
    BinNodePosi(T) insertAsLc(T const& e); //插入左孩子
    BinNodePosi(T) insertAsRc(T const& e); //插入右孩子
};

template<typename T>
BinNodePosi(T)
BinNode::insertAsLc(T const& e)
{
    BinNodePosi(T) p = new BinNode(e, this);
    lChild = p;
    return p;
}

template<typename T>
BinNodePosi(T)
BinNode::insertAsRc(T const& e)
{
    BinNodePosi(T) p = new BinNodePosi(e, this);
    rChild = p;
    return p;
}
#endif //SRC_BIN_NODE_H
