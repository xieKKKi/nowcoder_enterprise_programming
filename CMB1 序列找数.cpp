#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = (n+1) * n / 2;
    int x;
    while(cin >> x){
        sum -= x;
    }
    cout << sum <<'\n';
    return 0;
}
