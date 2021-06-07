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

int diff(vector<int> &vec, int key){
  int left = 0, right = SIZE(vec);
  while(left < right - 1){
    int mid = left + (right - left)/2;
    if(vec.at(mid) == key) return 0;
    else if(key < vec.at(mid)) right = mid;
    else if(vec.at(mid) < key) left = mid + 1;
  }
  int diff = key - vec.at(left);
  if(diff < 0){
    diff *= -1;
    if(left != 0){
      diff = min(diff, key - vec.at(left-1));
    }
  }
  else{
    if(left != SIZE(vec) - 1){
      diff = min(diff, vec.at(left + 1) - key);
    }
  }
  return diff;
}
 
int main(){
  int N, Q;
  cin >> N;
  vector<int> ratings(N);
  REP(i, N){
    cin >> ratings.at(i);
  }
  sort(ALL(ratings));

  cin >> Q;
  vector<int> students(Q);
  REP(i, Q){
    cin >> students.at(i);
  }
  REP(i, Q){
    cout << diff(ratings, students.at(i)) << endl;
  }

  return 0;
}