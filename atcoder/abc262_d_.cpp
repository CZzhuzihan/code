#include<bits/stdc++.h>
using namespace std;
int a[110];
int f[110][110];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        f[i][0]=0;
    }
    long long s=0;
    for(int m=1;m<=n;m++){
        for(int i=0;i<=n;i++){
            for(int j=0;j<n;j++){
                f[i][j]=-1;
            }
        }
        for(int i=0;i<=n;i++){
            f[i][0]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<m;j++){
                f[i][j]=max(f[i-1][(m-(a[i]%m)+j)%m]+a[i],f[i-1][j]);
            }
        }
        cout<<f[n][0]<<endl;
        s+=f[n][0];
    }
    cout<<s;
    return 0;
}