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
  int N, P, Q;
  cin >> N >> P >> Q;
 
  vector<ll> mod(N);
  REP(i, N){
    cin >> mod.at(i);
    mod.at(i) %= P;
  }
  int modi, modj, modk, modl;
  int count = 0;
  FOR(i, 0, N-4){
    modi = mod.at(i);
    FOR(j, i+1, N-3){
      modj = (modi * mod.at(j)) % P;
      FOR(k, j+1, N-2){
        modk = (modj * mod.at(k)) % P;
        FOR(l, k+1, N-1){
          modl = (modk * mod.at(l)) % P;
          FOR(m, l+1, N){
            if((modl * mod.at(m)) % P == Q)
              count++;
          }
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}