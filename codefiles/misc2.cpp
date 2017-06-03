#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    vector <int>::iterator it = s.begin();
    vector <int>::iterator it2;
    int count = 0;
    while (it!=s.end()){
        int c = 0;
        int sum = 0;
        it2 = it;
        while(c!=m){
            sum += *it2;
            it2++;
            c++;
        }
        if (sum == d) count++;
        it++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}

