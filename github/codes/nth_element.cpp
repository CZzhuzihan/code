#include<bits/stdc++.h>
using namespace std;
int a[100];
int main(){
	int n=20;
	for(int i=0;i<n;i++){
		a[i]=i;
	}
	random_shuffle(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	nth_element(a,a+n/2,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}