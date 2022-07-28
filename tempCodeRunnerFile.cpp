#include<bits/stdc++.h>
using namespace std;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int n,m,k;
queue<pair<int,int> > q;
char a[110][110];
char d[110][110];
bool ok(int x,int y){
    return x>=0&&x<n&&y>=0&&y<m;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            d[i][j]='0';
        }
    }
    int z=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='1'&&d[i][j]=='0'){
                q.push(make_pair(i,j));
                d[i][j]='a'+z;
                while(q.size()){
                    pair<int,int> u=q.front();
                    q.pop();
                    for(int i=0;i<8;i++){
                        int nx=u.first+dx[i];
                        int ny=u.second+dy[i];
                        if(ok(nx,ny)&&a[nx][ny]=='1'&&d[nx][ny]=='0'){
                            d[nx][ny]=('a'+z);
                            q.push(make_pair(nx,ny));
                        }
                    }
                } 
                z++;
            } 
        }
    } 
    cout<<z;
    return 0;
}