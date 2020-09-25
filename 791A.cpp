#include "bits/stdc++.h"
using namespace std;
int main(){
	int l,b;
	cin >> l >> b;
	int li=l;
	while(true){
		l*=3;
		b*=2;
		if (l>b){
			break;
		}
	}
	int p=l/li;
	int c=0;
	while (p>1){
		p=p/3;
		c+=1;
	}
	cout << c;
} 