class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int q = digits.size() - 1 ;
        while (q >= 0 &&  digits[q] == 9){
            digits [q--] = 0;
        }
        if (q <0 ){
            vector<int> res(digits.size() + 1, 0);
            res[0] = 1;
            return res;
        }
        else{
            digits[q] += 1 ;
            return digits;
        }
        return digits;
    }
};
    
