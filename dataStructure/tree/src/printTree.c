#include <stdio.h>
#include "common.h"
/*typedef struct BinTree{
    char val;
    struct BinTree *lchild;
    struct BinTree *rchild;
}BTree,TNode;*/

//µÝ¹éÖÐÐò±éÀú
void inOrder(BTree *p){
    if(p != NULL){
        inOrder(p->lchild);
        printf("%c ",p->val);
        inOrder(p->rchild);
    }
}
