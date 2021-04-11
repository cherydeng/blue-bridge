#include <iostream>                         //加油站问题
#include <algorithm>                        //引用算法包(sort,min,max)
#include <queue>                            //队列包
#define MAX_N 10000
#define MAX_L 1000000
#define MAX_P 1000000
// priority_queue <int> que;
int L,P,N;                                  //公路长度25；car自身的油量10；N加油站的个数;
int A[MAX_N+1];                             //A：加油站距离的距离
int B[MAX_N+1];                             //B：加油站的油量
using namespace std;

int main(){
    cin>>L>>P>>N;                           //输入公路的长度，自身的油量，加油站的个数；
    for(int i = 0;i < N;i++){               //是对A输入数据
        cin >> A[i];
    }
    for(int i = 0;i < N;i++){               //是对B输入数据
        cin >> B[i];
    }
    A[N] = L;                               //把终点当作加油站
    B[N] = 0;                               //终点加油的量
    N++;                                    //N = 4; N= 5;
    priority_queue<int> que;                //从大到小的排序；
    int res = 0;                            //加油次数
    int pos = 0;                            //卡车的位置
    int tank = P;                           //卡车油箱有多少油
    for(int i = 0;i < N;i++){               //N =5；
        int d = A[i] - pos;                 //距离下一个加油站的距离D
        while(tank - d < 0){                //tank邮箱里的油-D < 0
            if(que.empty()){                //代表没有油了
                puts("-1");                 //代表根本到不了终点
                break;
                return 0;
            }
            tank += que.top();              //取出最大的油
            que.pop();                      //加油站出列
            res++;                          //加油的次数
        }
        tank -= d;                          //到达加油站
        pos = A[i];                         //位置更新到加油位置
        que.push(B[i]);                     //存油
    }
    printf("%d\n",res);                     //模拟
}