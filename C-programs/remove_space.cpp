/*----------------------------------
 * Program name : remove_space.cpp
 * Descriptions : Given a string, remove all spaces from the string and return it
 * Algorithm:   : 1.Initialize 'count' = 0
 *              : 2.Iterate through all characters of given string 
 *              : 3. If current character is non-space, then put this character at index 'count' and increment 'count'
 *              : 4. Finally, put '\0' at index 'count'
 *-----------------------------------*/    
#include <iostream> 
using namespace std; 

void removeSpaces(char *str);
// Function to remove all spaces from a given string 
void removeSpaces(char *str) 
{ 
    // To keep track of non-space character count 
    int count = 0; 
  
    // Traverse the given string. If current character 
    // is not space, then place it at index 'count++' 
    for (int i = 0; str[i]; i++) 
        if (str[i] != ' ') 
            str[count++] = str[i]; // here count is 
                                   // incremented 
    str[count] = '\0'; 
} 

// Driver program to test above function 
int main() 
{ 
    char str[] = "h  ello wo  rld t  est  "; 
    removeSpaces(str); 
    cout << str; 
    return 0; 
} 