#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> types(n);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
    }
    int max = count(types.begin(),types.end(),1);
    int max_i = 1;
    for(int i = 2;i<=5;i++){
        int temp = count(types.begin(),types.end(),i);
        if (temp > max){max = temp; max_i = i;}
    }
    cout<<max_i;
    return 0;
}
