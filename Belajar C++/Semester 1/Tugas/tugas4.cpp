#include <iostream>
using namespace std;

int main () {
    int totaluang;

    cout << "Masukkan berapa jumlah uang kamu jika ingin mendapatkan diskon = ";
    cin >> totaluang;

    string diskon = (totaluang>500000) ? "15%" : "5%";
    cout << "Total diskon yang kamu dapatkan adalah = " << diskon;

    return 0;
}
