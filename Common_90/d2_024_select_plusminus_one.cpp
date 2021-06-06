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

//setprecision(10) 

 
int main(){
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  REP(i, N){
    cin >> A.at(i);
  }
  int b, diff;
  diff = 0;
  REP(i, N){
    cin >> b;
    diff += abs(b - A.at(i));
  }
  string rst = (diff <= K && (diff + K) % 2 == 0) ? "Yes" : "No";
  cout << rst << endl;
  
  return 0;
}