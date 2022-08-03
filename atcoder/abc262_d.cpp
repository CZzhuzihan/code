#include<bits/stdc++.h>
using namespace std;
int a[110];
int f[110][110][110];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    long long s=n;
    for(int m=2;m<=n;m++){
        for(int i=0;i<=n;i++) f[i][0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=m;j++){
                for(int k=0;k<=m;k++){
                    f[i+1][j+1][(k+a[i])%m]=max(f[i][j][k],f[i+1][j+1][(k+a[i])%m]);
                    f[i+1][j][k]=max(f[i][j][k],f[i+1][j][k]);
                }
            }
        }
        cout<<m<<endl;
        for(int i=1;i<=n+1;i++){
            for(int j=1;j<m;j++){
                for(int k=0;k<m;k++){
                    cout<<f[i][j][k];
                }
                cout<<endl;
            }
            cout<<endl;
        }
        s+=f[n][m][0];
       // s%=998244353;
    }
    cout<<s;
    return 0;
}