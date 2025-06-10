// main.cpp
#include <iostream>
#include <vector>

void vector_add(const std::vector<int>& a, const std::vector<int>& b, std::vector<int>& c) {
    for (size_t i = 0; i < a.size(); ++i) {
        c[i] = a[i] + b[i];
    }
}

int main() {
    const int N = 5;
    std::vector<int> a{1, 2, 3, 4, 5};
    std::vector<int> b{10, 20, 30, 40, 50};
    std::vector<int> c(N);

    vector_add(a, b, c);

    std::cout << "Result: ";
    for (int val : c) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
