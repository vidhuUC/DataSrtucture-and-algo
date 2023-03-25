// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.


#include <string.h>
#include <math.h>  
int stringToNumber(char input[]) {
    // Write your code here
    if(input[0] == '\0')
        return 0;

    int len = strlen(input)-1;

   return  (input[0]-'0')*pow(10,len) + stringToNumber(input+1);

}