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

const double pi = 3.141592653589793;
 
int main(){
  int T, L, X, Y, Q;
  cin >> T >> L >> X >> Y >> Q;

  int E;
  double y, z, dx, dy, dz, theta;
  mcrep(i, Q){
    cin >> E;
    E %= T;
    y = -0.5 * (double)L * sin(2 * pi *(double)E/T);
    z = 0.5 * (double)L * (1. - cos(2 * pi * (double)E/T));
    dx = X;
    dy = Y - y;
    dz = z;
    theta = 360. / (2. * pi) * atan(sqrt(dz * dz/ (dx * dx + dy * dy)));

    cout << setprecision(12) << theta << endl;
  }  
  return 0;
}