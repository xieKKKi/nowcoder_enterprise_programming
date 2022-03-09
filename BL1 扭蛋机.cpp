#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string plan = "";
    while(n > 0){
        if(n % 2){  //奇数
            n = (n - 1) / 2;
            plan.push_back('2');
        }
        else{
            n = (n - 2) / 2;
            plan.push_back('3');
        }
    }
    reverse(plan.begin(), plan.end());
    cout << plan <<'\n';
    return 0;
}
