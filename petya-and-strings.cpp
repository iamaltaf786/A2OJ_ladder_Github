#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    string str,str2;
    cin>>str>>str2;

    int n;
    
    // coverting into lowercase letters
    transform(str.begin(),str.end(),str.begin(),::tolower);
    transform(str2.begin(),str2.end(),str2.begin(),::tolower);
    
    for(int  i=0; i<str.length(); i++)
    {
        if(str[i]==str2[i])
        {
            n=0;
        }
        else if(str[i]<str2[i])
        {
             n=-1;
            break;
        }
        else
        {
             n=+1;
            break;
        }
    }
    cout<<n<<endl;
    
    
    
    
	return 0;
}