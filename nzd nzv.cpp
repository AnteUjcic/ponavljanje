#include <iostream>
using namespace std;
int nzd(int a, int b){
	int brizan;
	while(b>0){
		
		
		brizan=a%b;
		a=b;
		b=brizan;		
	}
return a;
}
float nzv(int a,int b){
	
	return a*b/nzd(a,b);
	
}

int main(){
	
	
int a,b;
	cout<<"unesi a,b: ";
	cin>>a>>b;
	cout<<"najveci zajednicki dijelitelj "<<nzd(a,b);
	cout<<"najmanji zajednicki visekratnik "<<nzv(a,b);
	
	system("pause");
	
}
