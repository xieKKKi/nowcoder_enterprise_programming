#include <iostream>
#include <string>

using namespace std;

int main(){
    int lastLength = 0;
    string input;
    getline(cin, input);
    for(int i = input.length()-1; i>=0; --i){
        if(input[i] == ' '){
            lastLength = input.length() - i - 1;  //字符串末尾不以空格为结尾
            break;
        }
    }
    if(lastLength == 0)
        lastLength = input.length();
    cout << lastLength;
    return 0;
}
