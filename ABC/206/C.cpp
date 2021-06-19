#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

#define mcfor(i, L, R) for(ll i = ll(L); i < ll(R); i++)
#define mcford(i, L, R) for(ll i = ll(L-1); i >= ll(R); i--)
#define mcrep(i, N) for(ll i = 0; i < ll(N); i++)
#define mcrepd(i, N) for(ll i = ll(N-1); i >= 0; i--)
#define mcall(arr) arr.begin(), arr.end()
#define mcsize(arr) ll(arr.size())
#define INF32 2147483647
#define INF64 9223372036854775807

//char '0-9': 48-57, 'A-M,N-Z': 65-77,78-90,
//     'a-m,n-z': 97-109,110-122

//setprecision(10)

 
int main(){
  
  int N;
  cin >> N;
  vector<int> A(N+1);

  mcrep(i,N){
    cin >> A.at(i);
  }
  A.at(N) = INF32;

  sort(mcall(A));
  
  int pair = 1;
  ll count = (ll)N * ((ll)N - 1LL) / 2LL;
  mcfor(i, 1, N+1){
    if(A.at(i) == A.at(i-1)){
      pair++;
    }
    else{
      if(pair >= 2){
        count -= ((ll)pair * (pair - 1) / 2);
        pair = 1;
      }
    }
  }

  cout << count << endl;

  return 0;
}