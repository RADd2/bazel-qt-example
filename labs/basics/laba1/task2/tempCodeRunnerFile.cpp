#include <iostream>
#include <vector>

int main() {
    vector<int> a(5);
    for (auto i : a) {
        std::cout << i << " ";
    }
}