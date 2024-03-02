#include <iostream>

using namespace std;

int main() {
    float p[] {3, 2, 1};
    float w[] {1, 2, 3};
    int n = sizeof(p)/sizeof(int);
    float u[n];
    int i;
    for (i = 0; i < n; i++)
    {
        u[i] = p[i]/w[i];
    }   
    float v;
    float m = 0;
    std::string s;
    std::cin >> v;

// Жадный алгоритм поиска (сложность O(n^2), так как ищем максимальную удельную величину, иначе O(n))
// Не всегда даёт оптимальное решение, но довольно-таки часто

    while (m < v) {
        float max = 0;
        int index = -1;
        for (int i = 0; i < n; i++) {
            if (u[i] > max) {
                max = u[i];
                index = i;
            }
        }
        u[index] = 0;
        if ((m + w[index] <= v) && (w[index] != 0)) {
            m = m + w[index];
            s = s + std::to_string(index + 1) + " ";
        }
        if (max == 0) {
            break;
        }
    }
    std::cout << s;
    return 0;
}