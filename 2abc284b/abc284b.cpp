#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos;cin>>casos;
	vector<int> arreglo;
	while(casos--){
		int caso;cin>>caso;
		int contador=0;
		while(caso--){
			int numeros;cin>>numeros;
			
			if(numeros%2!=0){
				contador++;
			}
			
		}
		arreglo.push_back(contador);
	}
	for(int i=0;i<arreglo.size();i++){
		cout<<arreglo[i]<<endl;
	}
	return 0;
}