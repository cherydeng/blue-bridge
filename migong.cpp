#include <iostream>
#include <queue>
using namespace std;
const int INF = -1;         //定义无穷
#define MAX_N 100
#define MAX_M 100                   //宏定义最大的宽度
char maza[MAX_N][MAX_M];            //定义迷宫字符型数组
int N,M;                            //定义长度宽度
int start_x,start_y;                //定义起点坐标
int end_x,end_y;                    //定义终点坐标
typedef pair<int,int> P;            //定义状态
int d[MAX_N][MAX_M];                //定义迷宫上的点到起点的位置
int dx[4] ={1,0,-1,0};              //定义方向变量x方向
int dy[4] ={0,1,0,-1};              //定义方向变量y方向

int dfs(){
    queue<P> que;
    for (int i = 0;i<N;i++){
        for(int j = 0;j < M;j++){
            d[i][j] = INF;
        }
    }
    que.push(P(start_x,start_y));
    d[start_x][start_y] = 0;
    
    while(que.size()){
        P p = que.front();
        que.pop();
        if(p.first == end_x && p.second == end_y)
            break;
        for(int i = 0; i < 4; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(0 <= nx && nx < N &&  0 <= ny && ny <= M && maza[nx][ny] != '#' && d[nx][ny] == INF){
                que.push(P(nx,ny));
                d[nx][ny] = d[p.first][p.second] + 1;

            }
        }
    }
    return d[end_x][end_y];
}
int main(){
    cin>>N>>M;
    cin>>start_x>>start_y;
    cin>>end_x>>end_y;
    for (int i =0;i<N;i++){
        for(int j = 0;j<M ; j++){
            cin>>maza[i][j];
        }
    }
    int n = dfs();
    for(int i = 0;i<N;i++){
        for(int j = 0;j< M;j++){
            cout<<d[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<n<<endl;
}