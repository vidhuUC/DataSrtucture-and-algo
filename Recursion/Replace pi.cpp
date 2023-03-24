// Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

// Change in the given string itself. So no need to return or print anything
#include <string.h>

void replacePi(char input[]) {
	// Write your code here

    if(strlen(input) == 1) return;

     if(input[0] == 'p' && input[1] == 'i'){
        for(int i=strlen(input); i>=2; i--){
            input[i+2]= input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
    }
    replacePi(input+1);

   
}


