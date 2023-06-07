#include <iostream>

void strset(char* s, char ch) {
    while (*s != '\0') {
        *s = ch;
        s++;
    }
    *s = '\0';
}

int main()
{
    char s[30] = "Hello, Armenia!";
    char ch = 'j';
    strset(s, ch);

    std::cout << s << std::endl;
    return 0;
}
