#include<bits/stdc++.h>
using namespace std;
int a[1010],b[1010];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int s=0;
	for(int i=0;i<n;i++){
		if(a[i]==b[i]) s++;
	}
	cout<<s<<endl;
	s=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==b[j]&&i!=j){
				s++;	
			}
		}
	}
	cout<<s;
    return 0;
}
