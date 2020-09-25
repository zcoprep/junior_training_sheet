#include "bits/stdc++.h"
using namespace std;
char g[100000];
int main(){
	int n;
	int d=0;
	int a=0;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> g[i];
		if (g[i]=='A'){
			a+=1;
		}
		if (g[i]=='D'){
			d+=1;
		}
	}
	if (a>d){
		cout << "Anton";
	}
	if (a<d){
		cout << "Danik";
	}
	if (a==d){
		cout << "Friendship";
	}
} 