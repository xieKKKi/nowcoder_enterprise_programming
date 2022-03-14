#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    while(getline(cin, str)){
        int mod = str.length() % 8;
        int count = str.length() / 8;
        if(mod){
            for(int i=0;i < 8-mod;++i)  //注意这里是8-mod
                str.push_back('0');
            ++count;
        }
        
        for(int i=0;i<count;++i)
            cout << str.substr(i*8, 8) << '\n';
        break;
    }
    return 0;
}
