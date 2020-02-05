/*----------------------------------
 * Program name : RL_encoding.cpp
 * Descriptions : RL_Encoding is a form of lossless data compression in which runs of data 
 *                (sequences in which the same data value occurs in many consecutive data elements) are stored as 
 *                a single data value and count, rather than as the original run.
 *                Consider a string like "aaaabbcccccddf" and an RL_Encoded string of the same is "4a2b5c2d1f"
 * Algorithm:   : 1.Initialize an array of 26 elements for each letter (a-z) to 0
 *              : 2.Scan the entire string and for each string element check the letter and increase the frequency 
 *                  in array by using ASCII value.
 *              : 3. print the encoded string
 *                
 -----------------------------------*/                               

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

string encode(string str);
string rel_decode(string str);
 
// Perform Run Length Encoding (RLE) data compression algorithm
// on string str
string encode(string str)
{
    // stores output string
    string encoding = "";
    int count;
 
    for (int i = 0; str[i]; i++)
    {
        // count occurrences of character at index i
        count = 1;
        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }      
 
        // append current character and its count to the result
        encoding += to_string(count) + str[i];
    }
 
    return encoding;
}

// Perform Run Length Encoding (RLE) data compression algorithm
// on string str
string rel_decode(string str)
{
    // stores output string
    string decoding = "";
    int count;
 
    for (int i = 0; str[i]; i++)
    {
        // count occurrences of character at index i
        count = 1;
        if(isdigit(str[i]))
            count += str[i]; 
 
        // append current character and its count to the result
        decoding += count * str[i];
        count = 1;
    }
 
    return decoding;
}
 
// main function
int main()
{
    string str = "ABBCCCD";
 
    cout << encode(str) << endl;
    cout << rel_decode(str) << endl;
 
    return 0;
}