#include <iostream>

using namespace std;

int
main ()
{
  int a,i[10];
  cout<<"[";
  for ( a = 4; a <=22; a++){
  if (a%2==0){
  cin>>i[a];           
  cout<<", ";
  }
  
  }
  cout<<i<<"]";
system("pause");
  return 0;
}

