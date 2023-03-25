// Given a string S, remove consecutive duplicates from it recursively.



#include <cstring>


void removeConsecutiveDuplicates(char *input)
{
    if(input == NULL)
        return;
    if(input[0] == '\0')
        return;

    if(input[0] == input[1])
    {
        for(int i = 1; i < strlen(input); i++)
        {
            input[i-1] = input[i];
        }
        input[strlen(input)-1] = '\0';
        removeConsecutiveDuplicates(input);
    }
    else
    {
        removeConsecutiveDuplicates(input+1);
    }


}