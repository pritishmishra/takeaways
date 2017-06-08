#include <set>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector< vector<long long> > M(n,vector<long long>(n));
        set <long long> rows;
        set <long long> cols;
        for(int i = 0;i < n;i++){
           for(int j = 0;j < n;j++){
              cin >> M[i][j];
           }
        }
        for (int i = 0;i<n;i++){
            long long sum_rows = 0;
            for (int j=0;j<n;j++){sum_rows += M[i][j];}
            rows.insert(sum_rows);
        }
        for (int j = 0;j<n;j++){
            long long sum_cols = 0;
            for (int i=0;i<n;i++){sum_cols += M[i][j];}
            cols.insert(sum_cols);
        }
        set<long long>::iterator it = rows.begin();
        while(it!=rows.end()){
            long long val = *it;
            if (cols.find(val) == cols.end()) break;
            it++;
        }
        if (it == rows.end()) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
    return 0;
}
