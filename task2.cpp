#include <iostream>

void strcat(char* s1, const char* s2) {
    while (*s1 != '\0') {
        s1++;
    }

    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';
}

int main() {
    char str1[20] = "Hello, ";
    const char* str2 = "Armenia";

    strcat(str1, str2);
    std::cout << str1 << std::endl;

    return 0;
}

