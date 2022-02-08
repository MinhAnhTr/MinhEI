#include <iostream>
using namespace std;
int timmin(int a[][100], int n) {
    int res = -1, index = -1;
    for (int i = 0; i < n; i++) {
        if (a[0][i] % 2 == 0) {
            if (res == -1) { res = a[0][i]; index = i; }
            if (res > a[i][0]) { res = a[0][i]; index = i; }
        }
    }
    if (res == -1) return -1;
    return index;
}
int sum(int a[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i][i];
    return sum;
}
int main(int argc, char const* argv[])
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[100][100] = { 0 };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int index = timmin(a, n);
    if (index!= - 1) cout << "Gia tri = " << a[0][index] << ", Vi tri [0][" << index <<"]";
    cout << "\nTong tren duong cheo chinh: " <<sum(a, n);
    return 0;
}
