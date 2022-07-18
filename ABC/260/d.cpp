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
    mccinll(K);
    vector<ll> turn(N, -1);
    vector<vector<ll>> field;
    mcrep(i,N){
        mccinll(p);
        bool put = false;
        ll putnum = N + 1;
        ll putidx = field.size();
        for(ll f = 0; f < field.size(); f++){
            ll topnum = field.at(f).at(field.at(f).size() - 1);
            if(topnum > p && topnum < putnum){
                putnum = topnum;
                putidx = f;
            }
        }
        if(putidx == field.size()){
            field.push_back({p});
        }
        else{
            field.at(putidx).push_back(p);
        }
        if(field.at(putidx).size() >= K){
            for(auto& v:field.at(putidx)){
                turn.at(v-1) = i + 1;
            }
            field.erase(field.begin() + putidx);
        }
    }
    mcrep(i,N){
            mccout(turn.at(i));
        }

    return 0;
}