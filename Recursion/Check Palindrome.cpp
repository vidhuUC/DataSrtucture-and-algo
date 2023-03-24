// Check whether a given String S is a palindrome using recursion. Return true or false.

#include <string.h>
bool helper(char input[],int start,int end)
{
    if(start>= end) return true;

    if(input[start]!= input[end]) return false;

    helper(input,start+1,end-1);

}

bool checkPalindrome(char input[]) {
    // Write your code here
    return helper(input,0,strlen(input)-1);

}


