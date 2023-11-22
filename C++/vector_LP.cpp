#include <iostream>
#include <vector>

bool czy_pierwsza(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void x_pierwszych(unsigned int a) {
    int liczba = 2;
    std::vector<int> pierwsze;

    while (pierwsze.size() < a) {
        if (czy_pierwsza(liczba)) {
            pierwsze.push_back(liczba);
        }
        liczba++;
    }

    for (int i : pierwsze) {
        std::cout << i << " ";
    }
}

int main() {
    unsigned int a = 5;
    x_pierwszych(a);
    return 0;
}

