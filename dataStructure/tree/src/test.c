#include <stdio.h>
#include <stdlib.h>
#include "common.h"


int main()
{

    char *pre = "ABDECFGH";
    char *in = "DBEACGFH";
    BTree *t = createBT(pre,in,0,7,0,7);
    inOrder(t);

    return 0;
}
