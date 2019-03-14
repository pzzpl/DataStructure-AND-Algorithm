#include <stdio.h>
#include "common.h"
/*typedef struct BinTree{
    char val;
    struct BinTree *lchild;
    struct BinTree *rchild;
}BTree,TNode;*/

//中序
void inOrder(BTree *p){
    if(p != NULL){
        inOrder(p->lchild);
        printf("%c ",p->val);
        inOrder(p->rchild);
    }
}
