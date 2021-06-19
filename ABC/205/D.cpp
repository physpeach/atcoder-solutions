#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

#define FOR(i, L, R) for(ll i = ll(L); i < ll(R); i++)
#define FORD(i, L, R) for(ll i = ll(L-1); i >= ll(R); i--)
#define REP(i, N) for(ll i = 0; i < ll(N); i++)
#define REPD(i, N) for(ll i = ll(N-1); i >= 0; i--)
#define ALL(arr) arr.begin(), arr.end()
#define SIZE(arr) ll(arr.size())
#define INF32 2147483647
#define INF64 9223372036854775807

//char '0-9': 48-57, 'A-M,N-Z': 65-77,78-90,
//     'a-m,n-z': 97-109,110-122

//setprecision(10)

 
int main(){
  int N, Q;
  cin >> N >> Q;
  vector<ll> A(N), low(N);

  REP(i, N){
    cin >> A.at(i);
    low.at(i) = A.at(i) - 1 - i;
  }
  ll K;
  REP(i, Q){
    cin >> K;
    const int j = lower_bound(ALL(low), K) - low.begin();
    if(j == N){
      cout << A.at(N - 1) + (K - low.at(N - 1)) << endl;
    }
    else{
      cout << A.at(j) - (low.at(j) - K + 1) << endl;
    }
  }
  
  return 0;
}