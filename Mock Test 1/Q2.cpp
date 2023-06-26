/*
First Unique Character in a String

Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:
Input: s = "leetcode"
Output: 0

Example 2:
Input: s = "loveleetcode"
Output: 2

Example 3:
Input: s = "aabb"
Output: -1

Constraints:
a. 1 <= s.length <= 10^5
b. s consists of only lowercase English letters.

Note: Create a GitHub file for the solution and add the file link the the answer section below.
*/

#include<iostream>
#include<string>
using namespace std;

int firstNonRepeatingCharacterIndex(string s){
    // Initialise an array of size 26 with all elements 0
    int arr[26]={0};

    int n=s.length();
    // Count the occurence of all the letters of string s
    for(int i=0;i<n;i++){
        int idx=s[i]-'a';
        arr[idx]+=1;
    }

    int ansIdx=-1;
    // check the first non repeating character index
    for(int i=0;i<n;i++){
        int idx=s[i]-'a';
        if(arr[idx]==1){
            ansIdx=i;
            break;
        }
    }

    return ansIdx;
}

int main(){
    string s1="leetcode";
    string s2="loveleetcode";
    string s3="aabb";
    cout<<firstNonRepeatingCharacterIndex(s1)<<endl;
    cout<<firstNonRepeatingCharacterIndex(s2)<<endl;
    cout<<firstNonRepeatingCharacterIndex(s3)<<endl;
}