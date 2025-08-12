#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;

	vector<int> arreglo;
	for(int i=0;i<n;i++){
		int dato;cin>>dato;
		arreglo.push_back(dato);
	}
	int consultas;cin>>consultas;
	while(consultas--){
		int q;cin>>q;
		int valor;cin>>valor;
		if(q==2) cout<<arreglo[valor-1]<<endl;
		else {
			int data;cin>>data;
			arreglo[valor-1]=data;
		}
			
		
	}
	return 0;
}