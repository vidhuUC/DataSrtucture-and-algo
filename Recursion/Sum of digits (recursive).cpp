// Write a recursive function that returns the sum of the digits of a given integer.


int sumOfDigits(int n) {
    // Write your code here
    if(n==0) return 0;

     int ans = sumOfDigits(n/10) + n%10; 
     return ans;

}