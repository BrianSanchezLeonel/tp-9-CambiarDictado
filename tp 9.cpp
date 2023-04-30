#include<bits/stdc++.h>
using namespace std;
int CambiarDictado(string frase);
int main(){
	string frase;
	cout<<"Ingrese una palabra:"<<endl;
	cin>>frase;
	int c=CambiarDictado(frase);
	cout<<"Las letras que faltan son:"<<c;
	return 0;
}
int CambiarDictado(string frase){
	int i,contar=0;
	while(i<=frase.size()-2){
		contar+=1;
		i++;
	}
	return contar;
}