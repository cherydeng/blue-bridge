#include <iostream>         //广度优先遍历，水塘的水洼。在北京的POJ上
#define MAX_N 100
#define MAX_M 100
char field[MAX_N][MAX_M+1];
using namespace std; 
void dfs(int x,int y,int N,int M){                                  //深度优先搜索
    field[x][y] = '.';
    for (int dx = -1;dx <= 1;dx++){
        for (int dy = -1;dy <= 1;dy++){             //8方向便利
            int nx = x + dx;
            int ny = y + dy;                        //记录更新位置
            if (0<= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W'){
                dfs(nx,ny,N,M);
            }
        }
    }
    return ;
}
int main(){                                         //主函数
    int N,M,res = 0;                                //col row;计数变量
    cin>>N>>M;
    for (int i =0;i<N;i++){
        for (int j = 0; j < M;j++){
            cin>>field[i][j];
        }
    }
    for (int i =0;i< N;i++){
        for (int j = 0; j < M;j++){
            if (field[i][j] == 'W'){
                dfs(i,j,N,M);
                res++;                  //后面
            }
        }
    }
    cout<<res<<endl;

}