#include <iostream>
#include <cstring>
#include <algorithm>


std::string ConcatRemove(std::string s, std::string t, int k)
{
    int remove_count = 0, add_count = 0, count_char = 0;
    
    for (count_char = 0; count_char < s.size(); count_char++)
    {
        // Count remaining chars of string "s"
        if (count_char > t.size())
        {
            remove_count = s.size() - count_char;
            break;
        }
        // Count chars that needs to be removed and added
        else if (s[count_char] != t[count_char])
        {
            remove_count = s.size() - count_char;
            add_count = t.size() - count_char;
            break;
        }
    }

    // "s" is substring of t
    if (s[count_char - 1] == t[count_char - 1] and t.size() > s.size())
    {
        add_count = t.size() - count_char;
    }

    int total_oper = add_count + remove_count;
    std::cout << "Number of operations: " << total_oper << std::endl;
    if (total_oper <= k) {
        return "yes";
    }
    else {
        return "no";
    }
}

bool IsNotAlphaNumLower(char c)
{
    return (!isalnum(c) || !islower(c));
}

bool ValidateStringInput(std::string input_str)
{
    if (input_str.empty())
    {
        std:: cout << "String must not be empty" << std::endl;
        return false;
    }
    if (find_if(input_str.begin(), input_str.end(), IsNotAlphaNumLower)
        != input_str.end())
    {
        std:: cout << "Provided string " << input_str << " is invalid" << std::endl;
        return false;
    }

    return true;
}

bool ValidateOperationInput(int k)
{
    if (k < 1 or k > 100)
    {
        std:: cout << "Provided number " << k << " is invalid" << std::endl;
        return false;
    }
    return true;
}

int main()
{
    int k = 10;
    std::string s="", t=""; 
    
    std::cout << "Type first string in lowercase ascii [a-z]: ";
    std::cin >> s;
    
    if (!ValidateStringInput(s)) return -1;
    
    std::cout << "Type second string in lowercase ascii [a-z]: ";
    std::cin >> t;
    
    if (!ValidateStringInput(t)) return -1;
    
    std::cout << "Type operation number between 1 and 100: ";
    std::cin >> k;

    if (!ValidateOperationInput(k)) return -1;

    std::cout << "Result:" << std::endl;
    std::cout << s << std::endl;
    std::cout << t << std::endl;
    std::cout << k << std::endl;
    std::cout << ConcatRemove(s, t, k) << std::endl;
    
    return 0;
}
