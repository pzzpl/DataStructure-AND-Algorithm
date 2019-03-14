typedef struct BinTree{
    char val;
    struct BinTree *lchild;
    struct BinTree *rchild;
}BTree,TNode;

TNode *createBT(char *pre,char *in,int L1,int R1,int L2,int R2);
void inOrder(BTree *p);
