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
  int N, M;
  cin >> N >> M;
  vector<vector<bool>> ptn(N, vector<bool>(N, false));
  REP(i, N){
    ptn.at(i).at(i) = true;
  }

  int from, to;
  REP(i, M){
    cin >> from >> to;
    ptn.at(from-1).at(to-1) = true;
  }
  int count = N + M;
  bool changed = true;
  while (changed){
    changed = false;
    REP(i, N){
      REP(j, N){
        if(!ptn.at(i).at(j)){
          int k = 0;
          while(k < N && !changed){
            if(ptn.at(i).at(k) && ptn.at(k).at(j)){
              ptn.at(i).at(j) = true;
              count++;
              changed = true;
            }
            k++;
          }
        }
      }
    }
  }
  cout << count << endl;

  return 0;
}