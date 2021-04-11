#include <iostream>
using namespace std;        
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
 int main(){
    int res = 0;
    for(int i =1;i<=2020;i++){          //分母或者分子  i/j
        for (int j = 1; j<= 2020;j++){      //分子或者分母
            if (gcd(i,j) == 1){
                res ++;
            }
            // else{
            //     continue;           //跳到下一循环
            // }
        }
    }
    printf("%d",res);
    return 0;//
    // system(pause);
}