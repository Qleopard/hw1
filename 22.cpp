#include <iostream>

using namespace std;

int main() {
    int n, x;
    int a = 0;
    int j;
    std::string s;
    std::cin >> n;
    while (n != 1)
    {
        x = 0;
        while (n != 0) {
            j = n % 10;
            n = n / 10;
            x = x + j * j;
        }
        s = s + std::to_string(x) + "_";
        n = x;
        if (n == 1) {
            a = 1;
            break;
        }
        if (s.find(std::to_string(n)+"_") != std::string::npos) {
            break;
        }
    }
    if (a == 1) {
        std::cout << "Happy number";
    }
    else {
        std::cout << "Sad number";
    }
}