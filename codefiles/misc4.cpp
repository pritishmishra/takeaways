#include <set>
#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    set<long long> scores;
    long long temp;
    for(int i = 0;i < n;i++){
       cin>>temp;
       scores.insert(temp);
    }
    int m;
    long long mark;
    cin >> m;
    set<long long>::iterator it;
    int count = 0;
    it = scores.begin();
    for(int i = 0; i < m; i++){
       cin >> mark;
       while(it!=scores.end()){
           if (mark < *it) break;
           count++;
           it++;
       }
        cout << scores.size()-count+1 << endl;
    }
    
    return 0;
}

