#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int n;  //假设n>=3
    cin >> n;
    int num;
    // 最大乘积只有可能是：
    // 三个最大的正数相乘，或者两个最小负数和一个最大正数相乘
    long nums[5] = {0}; //前两个是最小负数，后三个是最大正数
    //要使用long才不会溢出
    //好像不能处理输入全是负数或者n<5的情况？
    
    for(int i=0;i<n;++i){
        cin >> num;
        if(num >= nums[4]){
            nums[2] = nums[3];
            nums[3] = nums[4];
            nums[4] = num;
        }
        else if(num >= nums[3]){
            nums[2] = nums[3];
            nums[3] = num;
        }
        else if(num >= nums[2]){
            nums[2] = num;
        }
        else if(num <= nums[0]){
            nums[1] = nums[0];
            nums[0] = num;
        }
        else if(num <= nums[1]){
            nums[1] = num;
        }
    }
    
    long maxProduct = nums[0]*nums[1]*nums[4] > nums[2]*nums[3]*nums[4] ? 
        nums[0]*nums[1]*nums[4] : nums[2]*nums[3]*nums[4];
    cout << maxProduct;
    
    return 0;
}
