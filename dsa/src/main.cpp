//
// Created by 庄永新 on 2018/12/4.
//

#include "List/list_test.h"
#include "BinaryTree/bin_tree_test.h"

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


    BinTree<int> binTree;
    int a = 1, b = 2, c = 3;
    BinNodePosi(int) parent = binTree.insertAsRoot(a);
    binTree.insertAsLc(parent, b);
    binTree.insertAsRc(parent, c);
    binTree.travPre();

    return 0;
}