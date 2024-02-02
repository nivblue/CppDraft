#include <iostream>
#include <stdio.h>
#include <string>
#include "man.cpp"

using namespace std;

bool isNumber(char);

int main() {
    printf("Enter a number : ");
    char c = getchar();

    if (isNumber(c)) {
        printf("It is a number");
    } else {
        printf("It is not a number");
    }

    return 0;
}

bool isNumber(char c) {
    if (c < 55 && c > 48) {
        return true;
    }

    return false;
}