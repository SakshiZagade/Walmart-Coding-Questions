class Solution{
public:
    int height(int N){
        // code here
         return (int)(floor((-1 + sqrt(1 + 8LL * N)) / 2));
    }
};
