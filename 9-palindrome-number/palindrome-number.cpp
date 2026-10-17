#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int originalNumber = x;
        long long reversedNumber = 0;
        while (x > 0){
            int lastDigits = x % 10;
            reversedNumber = (reversedNumber * 10) + lastDigits;
            x /= 10;
        }
         return originalNumber == reversedNumber;
    }
    int main(){
        Solution solver;
        int num = 121;
        if(solver.isPalindrome(num)) {
             cout << "is palindrome :" << endl;
            }
        else {
            cout << "is no palindrome: " << endl;
        }
         return 0 ;
    }   
};