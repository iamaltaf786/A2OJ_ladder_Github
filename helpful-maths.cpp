#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
	int ones = 0 , twos = 0 , threes = 0;
	cin >> s;
	for(int i = 0 ; i < s.size() ; i++)
	{
		if(s[ i ] == '1')
			ones++;
		if(s[ i ] == '2')
			twos++;
		if(s[ i ] == '3')
			threes++;	
	}
	if(ones != 0)
	{
		cout << 1;
		for(int i = 0 ; i < ones - 1 ; i++)
			cout << '+' << 1;
		for(int i = 0 ; i < twos  ; i++)
			cout << '+' << 2;
		for(int i = 0 ; i < threes ; i++)
			cout << '+' << 3;	
		return 0;	
	}
	if(twos != 0)
	{
		cout << 2;
		for(int i = 0 ; i < twos - 1 ; i++)
			cout << '+' << 2;
		for(int i = 0 ; i < threes ; i++)
			cout << '+' << 3;	
		return 0;	
	}
	if(threes != 0)
	{
		cout << 3;
		for(int i = 0 ; i < threes - 1; i++)
			cout << '+' << 3;
        return 0;
    }

    
    
	return 0;
}