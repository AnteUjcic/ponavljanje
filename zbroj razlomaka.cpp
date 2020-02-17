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
int zr(int y1,int y2){
int kega_bis_breka=nzv(y1,y2);

return kega_bis_breka;

}
int brek(int x1,int x2,int y1,int y2){
x1=x1*kega_bis_breka;w
x2=x2*kega_bis_breka;
int plus2=x1+x1;	
int bruk=zr(y1,y2)	
return bruk;	
	
}
int main(){
	
	
int x1,x2,y1,y2;
cout<<"upisi x za brojnik y za nazivnik: ";
cin>>x1>>y1>>x2>>y2;
	
	cout<<"zbroj razlomaka: "<<zr(y1,y2);
	cout<<"brojevi "<<brek(int x1,x2,y1,y2)
	
	
	system("pause");
	
}
