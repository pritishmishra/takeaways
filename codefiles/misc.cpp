#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector<int>::iterator it = s.begin();
    int max = *it, min = *it;
    int a =0 ,b = 0;
    while(it!=s.end()){
        if (*it>max) { a++; max = *it;}
        if (*it<min) { b++; min = *it;}
        it++;
    }
    cout<<a<<" "<<b;
    return 0;
}
