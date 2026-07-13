//Problem NO. 1A
//Time complexity : O(n);
#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long  n , m , a ;
    cin >> n >> m >> a ;
    long long x , y ;
    x = (n + (a-1))/a;
    y = (m + (a-1))/a;
    cout << x*y << endl;
    return 0 ;
}


// problem no. 584A
// time complexity - O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    if (t == 10) {
        if (n == 1) {
            cout << -1 << endl;
        } else {
            cout << 1;
            for (int i = 1; i < n; i++)
                cout << 0;
            cout << endl;
        }
    } else {
        for (int i = 0; i < n; i++)
            cout << t;
        cout << endl;
    }

    return 0;
}