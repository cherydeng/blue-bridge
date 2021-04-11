#include <iostream>
using namespace std;
int count(int i){
    int res = 0;  //一个数字需要2的个数
    while(i){       //对传过来的值判断
        if (i % 10 == 2 || i % 10 == 0 || i % 10 == 1 || i % 10 ==9){               
            res++;
        }
        i /= 10;
    }
    return res;
}
int main(){
    int n = 0; //总共需要2的数量
    for (int i =1; i<= 2020;i++){
        n += count(i);
    }
    printf("%d",n);
}
