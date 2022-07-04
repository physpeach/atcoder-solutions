#include <iostream> 
#include <vector>
 
using namespace std;
int main(){
  int N;
  cin >>N;
  int sum = 0;
  int a;
  while(N--)
  {
    cin >> a;
    sum += a;
  }
  cout << sum << endl;
  return 0;
}