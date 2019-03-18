#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#define MIN 1E-7
#define MAXSIZE 100

//用栈实现算中缀表达式的值

//判断运算符的优先级
int getPriority(char op){
    if(op == '+' || op == '-')
        return 0;
    else
        return 1;
}

int calSub(float opand1,char op,float opand2,float *result){
    if(op == '+') {
        *result = opand1 + opand2;
    }else if(op == '-'){
        *result = opand1 - opand2;
    }else if(op == '*'){
        *result = opand1 * opand2;
    }else if(op == '/'){
        if(fabs(opand2) <  MIN){
            return 0;
        }else{
            *result =  opand1 /opand2;
        }
    }
    //成功
    return 1;

}
//s1出栈两个操作数 计算并放回s1的函数
int calStackTopTwo(int *top1,float *s1,int *top2,float *s2){
        int flag;

        float opand1 = s1[*top1];
        (*top1)--;
        float opand2 = s1[*top1];
        (*top1)--;
        float temp ;
        char opt = s2[*top2];//s2出栈运算符
        (*top2)--;
        flag = calSub(opand2,opt,opand1,&temp);
        //入栈
        (*top1)++;
        s1[*top1] = temp;

        return flag ? 1 : 0;
}

float calInfix(char *exp){
    float s1[MAXSIZE]; int top1 = -1;//定义两个栈
    float s2[MAXSIZE]; int top2 = -1;
    int i = 0;//工作指针
    while(exp[i] != '\0'){
        if('0' <= exp[i] && exp[i] <= '9'){//为操作数
            s1[++top1] = exp[i] - '0';
            ++i;
        }else if(exp[i] == '('){//为左括号
                 s2[++top2] = '(';
                 ++i;
        }else if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/'){
            //当前扫描为运算符
            if(top2 == -1 || s2[top2] == '(' || getPriority(exp[i]) > getPriority(s2[top2])){
                //当前扫描的运算符优先级大于s2栈顶,s2栈为空,s2栈顶为左括号，则入栈
                    s2[++top2] = exp[i];
                    ++i;
            }else{//运算
                int flag = calStackTopTwo(&top1,s1,&top2,s2);
                if(!flag){
                    printf("计算过程有误");
                    return -1e-5;
                }
            }
        }else if(exp[i] == ')'){//当前扫描为右括号，则s2一直出栈知道左括号
            while(s2[top2] != '('){
                int flag = calStackTopTwo(&top1,s1,&top2,s2);
                if(!flag){
                    printf("计算过程有误");
                    return -1e-5;
                }
            }
            ++i;
            --top2;//把s2的左括号也出栈
        }
    }//end while

    //栈2不空 继续计算
    while(top2 != -1){
        int flag = calStackTopTwo(&top1,s1,&top2,s2);
        if(!flag){
            printf("计算过程有误");
            return -1e-5;
        }


    }
    return s1[top1];
}



//测试用例
int main()
{
    char test[] = {"101*(12+7*5)+6/7+4"};
    float result = calInfix(test);
    printf("%.2f",result);
    return 0;
}
