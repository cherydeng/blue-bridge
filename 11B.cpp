#include <iostream>
using namespace std;
int count(int n){
    int res = 0;                    //需要2的数量
    while (n){
        if (n % 10 == 2 || n % 10 == 3){
            res++;
        }
        n /= 10;
    }
    return res;
}
int main(){
    int n = 0;
    for (int i = 1;i<=1010;i++){
        n += count(i);
    }
    cout<<n<<endl;
}
