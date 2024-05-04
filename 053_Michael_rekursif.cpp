#include <iostream>

using namespace std;

int rekursif_Euclidean(int j, int k){
	if (k==0){
		return j;
	}
	return rekursif_Euclidean(k, (j%k));
}

main(){
	int a,b;
	
	cout<<"Masukkan Dua Angka : ";cin>>a>>b;
	
	cout<<"FPB dari "<<a<<" dan "<<b<<" adalah "<<rekursif_Euclidean(a,b);
}
