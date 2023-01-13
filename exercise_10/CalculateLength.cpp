#include <iostream>

int main()
{
    std::string s = "";
    std::cout << "Type string to calculate length: ";
    std::cin >> s;
    
    int i = 0;
    while (s[i])
        i++;
    
    std::cout << "Length of string '" << s << "' is " << i << std::endl;
    
    
    return 0;
}
