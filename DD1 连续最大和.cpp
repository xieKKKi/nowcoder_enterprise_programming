#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    int max = x, curr = x;
    for(int i=1;i<n;++i){
        cin >> x;
        if(curr > 0 && curr+x >= 0)
            curr += x;
        else
            curr = x;
        if(curr > max)
            max = curr;
    }
    cout << max;
    return 0;
}
