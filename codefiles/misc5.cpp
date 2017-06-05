#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    
    
    for (int i =0;i<k;i++){
    //Circular rotations
        vector<int>::iterator it = --(a.end());
        int val = *it;
        a.erase(it);
        a.insert(a.begin(),val);
    }
    
    for(int i = 0; i < q; i++){
        int m;
        cin >> m;
        cout << a[m] << endl;
    }
    return 0;
}
