#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int N = 10;
    int n;
    int A[N], B[N];

    cout << "Введіть кількість елементів у масивах: ";
    cin >> n;

    // Введення масиву A
    cout << "Введіть елементи масиву A:\n";
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    // Введення масиву B
    cout << "Введіть елементи масиву B:\n";
    for (int i = 0; i < n; i++) {
        cout << "B[" << i << "] = ";
        cin >> B[i];
    }
    int productOfNegatives(int arr[], int n) {
        int product = 1;
        bool hasNegative = false;

        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                product *= arr[i];
                hasNegative = true;
            }
        }

        if (!hasNegative)
            return 0; // Якщо немає від’ємних чисел
        else
            return product;
    }
    // Виклик функції для обчислення добутків
    int prodA = productOfNegatives(A, n);
    int prodB = productOfNegatives(B, n);

    // Виведення результатів
    cout << "\nДобуток від’ємних чисел масиву A: " << prodA;
    cout << "\nДобуток від’ємних чисел масиву B: " << prodB;

    if (prodA != 0 && prodB != 0)
        cout << "\nЗагальний добуток (A * B): " << prodA * prodB;
    else
        cout << "\nУ принаймні одному масиві немає від’ємних чисел.";

    cout << endl;
    return 0;
}
