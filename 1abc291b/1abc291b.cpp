#include <bits/stdc++.h>

using namespace std;

int main(){
	int valores; cin>>valores;
	
	vector<int> arreglo(valores*5);
	
	for(int i=0;i<valores*5;i++) cin>>arreglo[i];
	
	sort(arreglo.begin(),arreglo.end());
	double suma=0,c=0;
	for(int i=valores;i<valores*4;i++){
		suma+=arreglo[i];
		c++;
	}
	
	cout<<suma/c;
	
	return 0;
}