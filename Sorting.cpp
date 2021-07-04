//sorting of big integer
//Hint: - we have to use comparator operator in sort function
#include <bits/stdc++.h>
using namespace std;
 
bool compare(string a , string b)
{
    int s1 = a.length();
    int s2 = b.length();
    if(s1==s2)
    {
        return a<b;
    }
    return s1<s2;
}
 
int main() {
    // your code goes here 
    int n;
    cin>>n;
    string str[n];
    for(int i = 0;i<n;i++)
    {
        cin>>str[i];
    }
    sort(str,str+n,compare);
    for(int i = 0;i<n;i++)
    {
        cout<<str[i]<<"\n";
    }
    
    
    return 0;
}
 
