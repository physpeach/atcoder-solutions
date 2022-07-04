#include <iostream>
 
using namespace std;
 
int main(){
  int a,b,d;
  cin>>a>>b>>d;
  int c = 0;
  for(int i = 1; i <=a; i++){
    if((i%b==0) || (i%d ==0)){
      c++;
    }
  }
  cout << c <<endl;
  return 0;
}