#include <iostream>

using namespace std;

int binsearch (int a, int nums[], int n) {
    int min = 0;
    int max = n - 1;
    int mid;
    while (min <= max) {
        mid = (max + min)/2;
        if (a < nums[mid]) {
            max = mid - 1;
        }
        else if (a > nums[mid]) {
            min = mid +1;
        }
        else {
            return mid;
        }
    }
    return -2;
}

int main() {
    int nums[] {0, 1, 2, 3, 4, 5};
    int n = sizeof(nums)/sizeof(int);
    int a, index;
    std::cin >> a;
    index = binsearch(a, nums, n) + 1;
    std::cout << index;
    return 0;
}