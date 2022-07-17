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
#define mccinstr(str) string str; cin>>str
#define mccout(x) cout<<x<<endl

#define INF32 2147483647
#define INF64 9223372036854775807

int main(){
    mccinstr(str);
    vector<bool>a(3, true);
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(str.at(i) == str.at(j)){
                a.at(i) = false;
                a.at(j) = false;
            }
        }
    }
    mcrep(i, 3){
        if(a.at(i)){
            mccout(str.at(i));
            return 0;
        }
    }
    mccout(-1);
    return 0;
}