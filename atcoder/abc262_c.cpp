#include<bits/stdc++.h>
using namespace std;
int a[500010];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    long long s=0;
    long long c=0;
    for(int i=1;i<=n;i++){
        if(i==a[i]) c++;
    }
    s+=c*(c-1);
    for(int i=1;i<=n;i++){
        if(a[a[i]]==i&&a[i]!=i) s++;
    }
    cout<<s/2;
    return 0;
}