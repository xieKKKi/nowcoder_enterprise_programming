#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, x;
    set<int> mySet;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> x;
        mySet.insert(x);
    }
    for(set<int>::iterator it=mySet.begin(); it!=mySet.end(); ++it){
        cout << *it <<'\n';
    }
    return 0;
}
