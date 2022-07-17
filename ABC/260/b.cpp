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

struct student{
    ll id;
    ll math;
    ll en;
};

int main(){
    mccinll(N);
    mccinll(X);
    mccinll(Y);
    mccinll(Z);
    std::vector<student> s(N);
    mcrep(i, N){
        mccinll(p);
        s.at(i).id = i+1;
        s.at(i).math = p;
    }
    mcrep(i, N){
        mccinll(p);
        s.at(i).en = p;
    }
    ll c = 0;
    sort(s.begin() + c, s.end(), [](student l, student r){
        if(l.math == r.math){
            return l.id < r.id;
        }
        return l.math > r.math;
    });
    c += X;
    sort(s.begin() + c, s.end(), [](student l, student r){
        if(l.en == r.en){
            return l.id < r.id;
        }
        return l.en > r.en;
    });
    c += Y;
    sort(s.begin() + c, s.end(), [](student l, student r){
        if(l.math + l.en == r.math + r.en){
            return l.id < r.id;
        }
        return l.math + l.en > r.math + r.en;
    });
    c += Z;
    sort(s.begin(), s.begin() + c, [](student l, student r){
        return l.id < r.id;
    });
    mcrep(i, c){
        mccout(s.at(i).id);
    }
    return 0;
}