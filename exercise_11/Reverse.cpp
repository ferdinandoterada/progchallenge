#include<iostream>
#include<string>

using namespace std; 

int main() 
{ 
    string str = "Reverse string"; 

    for( int i = str.length() - 1; i >= 0; i--)
    {
      	cout << str[i];
    }
    return 0;
}
