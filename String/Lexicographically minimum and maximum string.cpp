Cpp prgrm
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<
  
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<y<<endl  
#define debug3(x,y,z) cout<<x<<y<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
string minLexRotation(string str)
{
    // Find length of given string
    int n = str.length();
 
    // Create an array of strings to store all rotations
    string arr[n];
 
    // Create a concatenation of string with itself
    string concat = str + str;
 
    // One by one store all rotations of str in array.
    // A rotation is obtained by getting a substring of concat
    for (int i = 0; i < n; i++)
        arr[i] = concat.substr(i, n);
 
    // Sort all rotations
    sort(arr, arr+n);
 
    // Return the first rotation from the sorted array
    return arr[n-1];
}
void LexicographicalMaxString(string str)
{
    int len,i=0,j=0,k=0;char temp;
    len = str.length();
    map<string,int>m;
    while(i<len)
    {
        temp = str[0];
        while(j<len-1)
        {
            str[j] = str[j+1];
            j++;
        }
        str[j] = temp;
        m[str] = k;
        k++;
        i++;j=0;
    }
    str = m.rbegin()->first;
    cout<<str;
}
int32_t main(){
fast
string s;
cin>>s;
cout<<minLexRotation(s)<<endl;
//LexicographicalMaxString(s);
return 0;
}
