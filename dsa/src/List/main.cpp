//
// Created by 庄永新 on 2018/10/30.
//
#include "list_test.h"

int main()
{
    List<int> list;
    ListNodePosi(int) elm1 = list.insertAsFirst(2);
    ListNodePosi(int) elm2 = list.insertAsFirst(4);
    ListNodePosi(int) elm3 = list.insertAsLast(6);
    list.insertA(elm2, 5);
    list.insertB(elm2, 9);
    list.traverse();
    std::cout << list.size() << std::endl;
}