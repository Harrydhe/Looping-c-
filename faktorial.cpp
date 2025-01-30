#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int fib1 = 0, fib2 = 1, next;

    cout << " Fibonacci hingga suku ke-" << n << ": ";
    for (int i = 1; i <= n; i++) {
        cout << fib1 << " ";
        next = fib1 + fib2; // menghitung suku berikutnya
        fib1 = fib2; // untuk melanjutkan perhitungan fibonacci selanjutnya
        fib2 = next; //  nilai fib1 dan fib2 selalu berisi dua suku terakhir dari deret Fibonacci untuk perhitungan pada iterasi berikutnya.
    }

    cout << endl;
    return 0;
}
