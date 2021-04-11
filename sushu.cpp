#include <iostream>//写注释
using namespace std;
int main(){
    int A;
    cin>>A;                             //素数(除1之外)
    int res = 1;                        //判别变量
    for(int i = 2; i < sqrt(A);i++){    
        if (A % i  == 0){               
            cout<<"不是素数"<<endl;     
            res = 0;
            break;
        }
    }
    if(res == 1){
        cout<<"是素数"<<endl;
    }
}