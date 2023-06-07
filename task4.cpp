#include <iostream>

void strmove(char* s, int n) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    if (len == 0 || n == 0 || n % len == 0) {
        return;
    }

    n %= len;

    char* temp = new char[n];
    for (int i = 0; i < n; i++) {
        temp[i] = s[len - n + i];
    }

    for (int i = len - 1; i >= n; i--) {
        s[i] = s[i - n];
    }

    for (int i = 0; i < n; i++) {
        s[i] = temp[i];
    }

    delete[] temp;
}

int main() {
    char str[] = "hello";
    int n = 3;

    strmove(str, n);

    std::cout << str << std::endl;

    return 0;
}

