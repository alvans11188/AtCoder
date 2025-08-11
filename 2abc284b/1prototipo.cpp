#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos;cin>>casos;
	while(casos--){
		int acumulado=0;
		int numero;cin>>numero;
		while(numero--){
			int dato;cin>>dato;
			acumulado+=dato%2;
		}
		cout<<acumulado<<endl;;
	}
	return 0;
}