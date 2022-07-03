#include <bits/stdc++.h>

using namespace std;

int main(){

    int K;
    cin>>K;
    int hour = K / 60;
    int min = K % 60;

    std::cout << std::setfill('0') << std::right << std::setw(2) <<  (21+hour)%24 << ":";
    std::cout << std::setfill('0') << std::right << std::setw(2) << min << std::endl;
    return 0;
}