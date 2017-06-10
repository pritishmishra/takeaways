#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        long long k;
        cin >> n >> k;
        if (k == 0) {for(long long i =1; i<=n;i++) cout << i << " "; cout << endl;continue;}
        if (n % 2 !=0){cout << "-1"<<endl;}
        if (n % 2 ==0){
            long long i;
            if (n % k*2 == 0){
            long long rem = n / (k*2);
            long long r = 0;
            while(r < rem){
            for (i=(2*r+1)*k+1;i<=(2*r+2)*k;i++) cout << i << " ";
            for (i=2*r*k+1;i<=(2*r+1)*k;i++) cout << i << " ";
            
            r++;
            }
            cout << endl;
            }
            else{
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}
