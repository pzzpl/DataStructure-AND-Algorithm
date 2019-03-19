#include <stdio.h>
#include "common.h"

#define MAXSIZE 50
/*
树的层次遍历
循环队列
*/


/*
typedef struct BinTree{
    char val;
    struct BinTree *lchild;
    struct BinTree *rchild;
}BTree,TNode;
*/

void levelOrder(BTree *bt){
    if(bt !=NULL){
        int front,rear;
        TNode *que[MAXSIZE];
        front = rear = 0;
        TNode *p;//work pointer

        //先进队一个根
        rear = (rear +1) % MAXSIZE;
        que[rear] = bt;

        //只要队不控
        while(front != rear){
            //出队一个
            front = (front + 1) % MAXSIZE;
            p = que[front];
            printf("%c ",p->val);//输出
            //进它的儿子们
            if(p->lchild != NULL){
                rear = (rear + 1 ) % MAXSIZE ;
                que[rear] = p->lchild;
            }
            if(p->rchild != NULL){
                rear = (rear + 1 ) % MAXSIZE ;
                que[rear] = p->rchild;
            }
        }
    }
}
