#include<bits/stdc++.h>
using namespace std;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int n,m;
queue<pair<int,int> > q;
char a[110][110];
int d[110][110];
vector<pair<int,int>> v[510];
bool ok(int x,int y){
    return x>=0&&x<n&&y>=0&&y<m;
}
void work1(vector<pair<int,int>> &x){
    
}
void work2(vector<pair<int,int>> &y){
    
}
bool cmp(vevtor<pair<int,int>> &x,vector<pair<int,int>> &y){
    if(x.size()!=y.size()) return false;

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            d[i][j]=-1;
        }
    }
    int z=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='1'&&d[i][j]==-1){
                z++;
                q.push(make_pair(i,j));
                v[z].push_back(make_pair(i,j));
                v[z].second=z;
                while(q.size()){
                    pair<int,int> u=q.front();
                    q.pop();
                    for(int i=0;i<4;i++){
                        int nx=u.first+dx[i];
                        int ny=u.second+dy[i];
                        if(ok(nx,ny)&&a[nx][ny]=='1'&&d[nx][ny]==-1){
                            d[nx][ny]=z;
                            v[z].push_back(make_pair(nx,ny));
                            q.push(make_pair(nx,ny));
                        }
                    }
                } 
            } 
        }
    } 
    return 0;
}