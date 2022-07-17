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

#define mccin(x) cin>>x
#define mccinll(N) ll N; cin>>N
#define mccinstr(str) string; cin>>str
#define mccout(x) cout<<x<<endl

#define INF32 2147483647
#define INF64 9223372036854775807

int main(){
    mccinll(N);
    mccinll(X);
    mccinll(Y);
    std::vector<ll> r(N+1, 0), b(N+1, 0);
    r.at(N) = 1;
    mcford(i, N + 1, 2){
        r.at(i - 1) += r.at(i);
        b.at(i) += X * r.at(i);
        r.at(i - 1) += b.at(i);
        b.at(i - 1) += Y * b.at(i);
    }

    mccout(b.at(1));

    return 0;
}