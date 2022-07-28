#include<bits/stdc++.h>
using namespace std;
int d[1000010];
int b[1000010];
int a[1000010];
int z=0;
int main(){
    long long n,x;
    cin>>n;
    for(int i=2;i<=1000000;i++){
        if(a[i]==0){
            d[++x]=i;
        }
        for(int j=1;j<=x;j++){
            if(i*d[j]>1000000){
                break;
            }
            a[i*d[j]]=1;
            if(i%d[j]==0) break;
        }
    }
    for(int i=1;i<=1000000;i++){
        b[i]=b[i-1]+(a[i]==0);
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<' ';
    }
    for(int i=1;i<=n;i++){
        if(i*i*i>n){
            break;
        }
        if(a[i]=1) continue;
        int j=n/i/i/i;
        if(i<j) z+=(b[j]-b[i]);
    }
    cout<<z;
    return 0;
}