#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string sr;
    cin>>sr;
    
    transform(sr.begin(),sr.end(),sr.begin(),::tolower);
    
    for(int i=0; i<sr.length(); i++)
    {
        if(sr[i]!='a' && sr[i]!='e' && sr[i]!='i' && sr[i]!='o' && sr[i]!='u' && sr[i]!='y')
        {
            cout<<"."<<sr[i];
        }
    }
    cout<<endl;
    
	return 0;


    
}