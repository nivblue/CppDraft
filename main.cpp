#include <iostream>
#include <stdio.h>
#include <string>
#include "man.cpp"

using namespace std;

int main() {
    Man m{1, 20, "Niv"};

    cout << m << endl;

    return 0;
}