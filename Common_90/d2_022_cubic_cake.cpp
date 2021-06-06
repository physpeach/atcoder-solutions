#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
 
#define REP(i, N) for(int i = 0; i < N; i++)
 
ull GCD(ull a, ull b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}
 
int main(){
  ull A, B, C, gcd;
  cin >> A >> B >> C;
  gcd = GCD(A, GCD(B, C));
  A /= gcd;
  B /= gcd;
  C /= gcd;
  cout << A + B + C - 3LL << endl;
}
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

#define REP(i, N) for(int i = 0; i < N; i++)

ull GCD(ull a, ull b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

int main(){
  ull A, B, C, gcd;
  cin >> A >> B >> C;
  gcd = GCD(A, GCD(B, C));
  A /= gcd;
  B /= gcd;
  C /= gcd;
  cout << A + B + C - 3LL << endl;

  return 0;
}