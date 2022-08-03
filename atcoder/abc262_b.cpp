#include<bits/stdc++.h>
using namespace std;
bool b[110][110];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        b[x][y]=1;
        b[y][x]=1;
    }
    int s=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                if(b[i][j]&&b[j][k]&&b[i][k]){
                    s++;
                }
            }
        }
    }
    cout<<s;
    return 0;
}