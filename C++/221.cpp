#include<iostream>
using namespace std;
do{
bool isPrime(int n, int divisor = 2) {
    if (n < 2) {
        return false;
    }
    if (divisor * divisor > n) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    return isPrime(n, divisor + 1);
}

void isPrime(unsigned int a, int current = 2) {
    if (a == 0) {
        return;
    }

    if (isPrime(current)) {
        std::cout << current << " ";
        x_pierwszych(a - 1, current + 1);
    } else {
        x_pierwszych(a, current + 1);
    }
}
}while(isPrime(n)==5);

int main() {
    int n;
    cout << "Podaj liczbê: ";
    cin >> n;
    if (isPrime(n)) {
        cout << "Liczba " << n << " jest pierwsza" << endl;
    } else {
        cout << "Liczba " << n << " nie jest pierwsza" << endl;
    }
    return 0;
}
