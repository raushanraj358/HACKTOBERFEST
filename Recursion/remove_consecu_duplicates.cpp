/* 
Submitted by: Sneha Jaiswal
GitHub link: https://github.com/Sneha-jais
Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S

Output Format :
Output string

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string

Sample Input 1 :
aabccba

Sample Output 1 :
abcba
*/

#include<iostream>
using namespace std;
void remove_dup(char s[]){
if(s[0]=='\0')
return;
if(s[0]!=s[1]){
    remove_dup(s+1);
}
else{
    int i=1;
    while(s[i]!='\0'){
        s[i-1]=s[i];
        i++;
    }
    s[i-1]=s[i];

}
remove_dup(s+1);

}
int main(){
    char s[100];
    cin>>s;
    remove_dup(s);
cout<<s;

    return 0;
}
