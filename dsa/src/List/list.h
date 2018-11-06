//
// Created by 庄永新 on 2018/10/30.
//

#ifndef SRC_LIST_H
#define SRC_LIST_H

#include "list_node.h"
#include <iostream>

/**
 * 列表模版类
 * @tparam T
 */
template<typename T>
class List {
private:
    int _size; //规模

    /**
     * 头节点(header)和尾节点(trailer)对类外部不可见
     * 首节点(first node)和末节点(last node)对外部可见
     */
    ListNodePosi(T) header; //头节点
    ListNodePosi(T) trailer; //尾节点
protected:
    void
    init();

public:
    List() { init(); } //默认构造函数，初始化头尾节点

    //可写访问接口
    ListNodePosi(T) insertAsFirst(T const& e); //将e当作首节点插入
    ListNodePosi(T) insertAsLast(T const& e); //将e当作末节点插入
    ListNodePosi(T) insertA(ListNodePosi(T) p, T const& e); //将e当作p的后继插入
    ListNodePosi(T) insertB(ListNodePosi(T) p, T const& e); //将e当作e的前驱插入

    //遍历
    void traverse();
    int size();
};

template<typename T>
void
List<T>::init()
{
    _size = 0;
    header = new ListNode<T>;
    trailer = new ListNode<T>;
    header->pred = nullptr;
    header->succ = trailer;
    trailer->pred = header;
    trailer->succ = nullptr;
}

template<typename T>
ListNodePosi(T)
List<T>::insertAsFirst(T const& e)
{
    _size++;
    return header->insertAsSucc(e);
}

template<typename T>
ListNodePosi(T)
List<T>::insertAsLast(T const& e)
{
    _size++;
    return trailer->insertAsPred(e);
}

template<typename T>
ListNodePosi(T)
List<T>::insertA(ListNodePosi(T) p, T const& e)
{
    _size++;
    return p->insertAsSucc(e);
}

template<typename T>
ListNodePosi(T)
List<T>::insertB(ListNodePosi(T) p, T const& e)
{
    _size++;
    return p->insertAsPred(e);
}

template<typename T>
void
List<T>::traverse()
{
    for (ListNodePosi(T) p = header->succ; p!=trailer; p = p->succ) {
        T tmp = p->data;
        std::cout << tmp << std::endl;
    }
}

template<typename T>
int
List<T>::size()
{
    return _size;
}
#endif //SRC_LIST_H
