#include "bits/stdc++.h"
using namespace std;
int a[1000];
int w[1000];
int main(){
	int n,h;
	int s=0;
	cin >> n >> h;
	for (int i=0;i<n;i++){
		cin >> a[i];
		if (a[i]>h){
			w[i]=2;
		}
		if (a[i]<=h){
			w[i]=1;
		}
	}
	for (int i=0;i<n;i++){
		s+=w[i];
	}
	cout << s << endl;
} 