#include <iostream>

std::string to_upper_case(std::string str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
    return str;
}

int main()
{
    std::cout << to_upper_case("Hello, Armenia!") << std::endl;
    return 0;
}
