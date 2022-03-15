class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param A int整型vector 
     * @param n int整型 
     * @return int整型
     */
    int getDis(vector<int>& A, int n) {
        int min = A[0];
        int maxDis = A[1] - A[0];
        for(int i=1;i<n;++i){
            if(A[i] < min)
                min = A[i];
            maxDis = max(A[i]-min, maxDis);
        }
        return maxDis;
    }
};
