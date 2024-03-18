#include <iostream>
using namespace std;

int power(int x, int n) {
    int result = 1;
    for (int i = 0; i < n; ++i) result *= x;
    return result;
}

int main() {
    int x, n;
    cout << "Nhap so nguyen x: "; cin >> x;
    cout << "Nhap so nguyen n: "; cin >> n;
    cout << x << " mu " << n << " = " << power(x, n) << endl;
    return 0;
}
