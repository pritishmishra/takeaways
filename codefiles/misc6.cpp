#include <set>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> s;
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        s.push_back(temp);
    }
    for(int i=1;i<=n;i++){
        int index = find(s.begin(),s.end(),i)-s.begin()+1;
        int index2 = find(s.begin(),s.end(),index)-s.begin();
        cout << index2 +1 << endl;
    }
    
    return 0;
}
