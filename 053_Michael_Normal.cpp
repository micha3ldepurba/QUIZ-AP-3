#include <iostream>

using namespace std;

int Euclidean_dasar(int a, int b){
	int c = a%b;
	while (c!=0){
		a = b;b=c;c=a%b;
	}
	return b;
}

main(){
	int j,k;
	
	cout<<"Masukkan Dua Angka : ";cin>>j>>k;
	
	cout<<"FPB dari "<<j<<" dan "<<k<<" adalah "<<Euclidean_dasar(j,k);
	
}