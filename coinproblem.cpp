#include <iostream>
#include <vector>           //调用STL的vector数组
#include <algorithm>        //调用STL的算法库(排序sort，max，min)
using namespace std;
const int V[6] = {1,5,10,50,100,500};       //设定硬币的类型
int main(){
    int C[6];                               //银币的个数
    int A;                                  //需要支付的钱
    for (int i = 0;i< 6;i++){               //输入每个类型银币的个数
        cin>>C[i];
    }
    // 1 2 3 4 1
    // 200
    //120
    cin>>A;                                 //输入你需要支付的钱数
    int res = 0;                            //使用的硬币个数 
    for (int i = 0;i <= 5 ; i++){             //i=5 ，i--， i> = 0
        int t = min(A/V[5-i],C[5-i]);           
        A -= t *V[i];
        res += t;
    }
    printf("%d\n",res);
}