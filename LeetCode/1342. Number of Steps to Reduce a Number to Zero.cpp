class Solution {
public:
    int numberOfSteps (int n) {
        int step=0;
        while(n!=0){
            if(n%2==0){
                n/=2;
            }else{
                n--;
            }
            step++;
        }
        return step;
    }
};