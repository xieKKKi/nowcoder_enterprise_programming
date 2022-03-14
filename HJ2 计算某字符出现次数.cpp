#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    char target;
    getline(cin, str);
    cin >> target;
    
    int count = 0;
    bool capital = ('A' <= target && target <= 'Z');
    
    for(char ch:str){
        if(ch == target)
            ++count;
        else if(capital){
            if(target - 'A' == ch - 'a')
                ++count;
        }
        else if(target - 'a' == ch - 'A')  //!capital
            ++count;
    }
    cout << count;
    return 0;
}
