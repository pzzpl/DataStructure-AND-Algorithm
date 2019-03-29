/*ººÅµËþµÝ¹é*/

#include<stdio.h>
void Hanoi(int n, char a,char b,char c);
int main(){
    int n;
    printf("please input the number of plates:");
    scanf("%d", &n);
    Hanoi(n, 'a','b','c');
    return 0;

}

void Hanoi(int n, char a,char b,char c){
    if(n == 1)
        printf("%c->%c\n", a,b);
    else{
        Hanoi(n-1, a, c, b);
        printf("%c->%c\n", a,b);
        Hanoi(n-1, c, b, a);
    }
}
