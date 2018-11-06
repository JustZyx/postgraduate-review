//
// Created by 庄永新 on 2018/10/30.
//

#ifndef SRC_LIST_NODE_H
#define SRC_LIST_NODE_H

#define ListNodePosi(T) ListNode<T>* //节点位置

/**
 * 链表节点模版类
 * @tparam T
 */
template<typename T>
class ListNode {
public:
    T data; //节点数据
    ListNodePosi(T) pred; //节点前驱位置
    ListNodePosi(T) succ; //节点后继位置
    ListNode() { }

    //构造函数
    ListNode(T e, ListNodePosi(T) p = nullptr, ListNodePosi(T) s = nullptr)
            :data(e), pred(p), succ(s) { }

    // 成员方法
    ListNodePosi(T) insertAsPred(T const& e); // 在当前节点之前插入新节点
    ListNodePosi(T) insertAsSucc(T const& e); // 在当前节点之后插入新节点
};

template<typename T>
ListNodePosi(T)
ListNode<T>::insertAsPred(T const& e)
{
    ListNodePosi(T) p = new ListNode(e, pred, this);
    pred->succ = p;
    pred = p;
    return p;
}

template<typename T>
ListNodePosi(T)
ListNode<T>::insertAsSucc(T const& e)
{
    ListNodePosi(T) p = new ListNode(e, this, succ);
    succ->pred = p;
    succ = p;
    return p;
}

#endif //SRC_LIST_NODE_H
