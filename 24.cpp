#include <iostream>

using namespace std;

int main() {
    int n, por, fact, u;
    por = 1;
    fact = 1;
    std::string s;
    std::cin >> n;
    while (fact*(por+1) <= n) {
        por = por + 1;
        fact = fact * por;
    }
    while (por != 0) {
        u = n / fact;
        n = n % fact;
        fact = fact / por;
        por = por - 1;
        s = s + std::to_string(u);
    }
    std::cout << s;
    return 0;
}