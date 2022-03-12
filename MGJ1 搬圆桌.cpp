#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    int r;
    long x, y, x1, y1;
    vector<int> result;
    while(cin >> r){
        cin >> x >> y >> x1 >> y1;
        float distance = sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));
        float step = distance / (2*r);
        if(step - int(step) <= 0.0)
            result.emplace_back(int(step));
        else
            result.emplace_back(int(step) + 1);
    }
    for(int i:result){
        cout<< i << '\n';
    }
    return 0;
}
