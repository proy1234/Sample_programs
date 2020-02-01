/*----------------------------------
 * Program name : anagram_check.c
 * Descriptions : An anagram of a string is another string that contains same characters, only the order of characters can be different.
 *                The implementation is based on count charcters using one array
 * Algorithm:   : checks and compare frequency of each letter in both the strings.
 *                1. The strings to be anagram of each other, their length must be same
 *                2. Sort two strings according to their ASCII values..
 *                3. Now compare the two strings. If both are equal, then they are anagrams. Otherwise they are not anagrams.
 -----------------------------------*/                               

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define STRING_ARRAY_SIZE 26

typedef enum{
    False = 1,
    True
}return_e;

bool check_anagram(char *String1,char *String2);

bool check_anagram(char *String1,char *String2)
{
    // Create a count array and initialize all values as 0 
    int String_Count_Array1[STRING_ARRAY_SIZE] = {0};
    int String_Count_Array2[STRING_ARRAY_SIZE] = {0};
    int i=0;
   

    while (String1[i] != '\0')
    {
        String_Count_Array1[String1[i] - 'a']++;
        i++;
    }
    while (String2[i] != '\0')
    {
        String_Count_Array2[String2[i] - 'a']++;
        i++;
    }

    for (i = 0; i < STRING_ARRAY_SIZE; i++)
    {
        if (String1[i] != String2[i])
            return False;
    }

    return True;
}

/* Driver code*/
int main() 
{ 
    char String1[] = "helloworld"; 
    char String2[] = "worldhello"; 
    if (check_anagram(String1, String2)) 
        printf("The two strings are anagram of each other"); 
    else
        printf("The two strings are not anagram of each other"); 
  
    return 0; 
} 
