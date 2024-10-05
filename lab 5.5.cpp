#include <iostream>
using namespace std;

// Функція для обчислення суми цифр числа n та глибини рекурсії
int f(int n, int& depth) {
    if (n == 0) {
        return 0;
    }
    depth++;
    return (n % 10) + f(n / 10, depth);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int depth = 0;
    int sum = f(n, depth);

    cout << "Sum of digits: " << sum << endl;
    cout << "Depth of recursion: " << depth << endl;

    return 0;
}

