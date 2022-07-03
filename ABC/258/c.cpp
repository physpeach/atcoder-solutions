#include <bits/stdc++.h>

using namespace std;

int pos(int x, int size)
{
    if(x < 0){
        return x + size;
    }
    else if(x >= size){
        return x - size;
    }
    return x;
}

int main(){
    int N, Q;
    string S;
    cin>>N>>Q>>S;

    int start = 0;

    for(int i = 0; i<Q; i++){
        int t,x;
        cin>>t>>x;
        if(t==1){
            start = pos( start - x, N);
        }
        else {
            cout << S.at(pos(start + x - 1, N )) << endl;
        }
    }

    return 0;
}