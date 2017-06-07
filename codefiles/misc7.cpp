#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v(n);
    set <int> s;
    long long temp;
    for (int i =0;i<n;i++){
        cin >> temp;
        v[i] = temp%k;
        s.insert(v[i]);
    }
    if (k == 1){
        cout << "1";
        return 0;
    }
    if (k == 2){
        if (s.find(1) != s.end()) cout << "1";
        else cout << "0";
        return 0;
    }
    set<int>::iterator it = s.begin();
    set <int> s2;
    while(it!=s.end()){
        int val = *it;
        int val2 = k - val;
        if (val > k/2) {
            if (s.find(val2)!=s.end()){it++; continue;}
            else { s2.insert(val); it ++; continue;}
        }
        
        if (s.find(val2)!=s.end()){
            int c1 = count(v.begin(),v.end(),val);
            int c2 = count(v.begin(),v.end(),val2);
            if (c1 >= c2) s2.insert(val);
            else s2.insert(val2);
        }
        else s2.insert(val);
        it++;
    }
    it = s2.begin();
    int c = 0;
    while (it != s2.end()){
        c += count(v.begin(),v.end(),*it);
        it++;
    }
    cout << c;
    return 0;
}
