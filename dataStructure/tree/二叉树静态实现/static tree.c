#include<stdio.h>
#include<stdbool.h>

struct Node{
    int left, right;
    bool isChild;
};

void levelOrder(int i, struct Node p[],int n);
void inOrder(int i, struct Node p[], int n, int* c);

int main(){
    int n;
    scanf("%d", &n);
    int i = 0;
    struct Node p[n];
    char l, r;
    while(i < n){
        p[i].isChild = false;
        i++;
    }
    i = 0;
    while(i < n){
        getchar();      //吸收回车
        scanf("%c %c",&l,&r);
        if(l != '-'){
            p[i].left = l - '0';
            p[l-'0'].isChild = true;    //成为子树
        }
        else{
            p[i].left = -1;
        }
        //printf("p[%d]left = %d\n", i, p[i].left);
        if(r != '-'){
            p[i].right = r-'0';
            p[r-'0'].isChild = true;
        }
        else{
            p[i].right = -1;
        }
        //printf("p[%d]right = %d\n", i, p[i].right);
        i++;
    }
    i = 0;
    while(i < n && p[i].isChild)
        i++;
    levelOrder(i, p, n);
    printf("\n");
    int c = 0;
    inOrder(i, p, n, &c);
    return 0;
}

void levelOrder(int i, struct Node p[], int n){
    int queue[n];
    int s = 0, e = 0;
    queue[e++] = i;
    int k, c = 0;
    while(s != e){
        k = queue[s++];
        printf("%d", k);
        c++;
        if(p[k].right != -1){
            queue[e++] = p[k].right;
        }
        if(p[k].left != -1){
            queue[e++] = p[k].left;
        }
        if(c < n){
            printf(" ");
        }
    }
}
void inOrder(int i, struct Node p[],int n, int* c){
    if(i == -1) return;
    inOrder(p[i].right, p, n, c);
    printf("%d",i);
    ++*c;
    if(*c < n)
        printf(" ");
    inOrder(p[i].left, p, n, c);
}
