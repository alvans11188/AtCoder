//https://atcoder.jp/contests/abc212/tasks/abc212_b
#include <bits/stdc++.h>

using namespace std;
int main(){
	char w,x,y,z;cin>>w>>x>>y>>z;
	int a=w-'0',b=x-'0',c=y-'0',d=z-'0';
	
	if(a==b&&b==c&&c==d) cout<<"Weak";
	else if ((a+1)%10==b&&(b+1)%10==c&&(c+1)%10==d) cout<<"Weak";
	else cout<<"Strong";
	return 0;
}