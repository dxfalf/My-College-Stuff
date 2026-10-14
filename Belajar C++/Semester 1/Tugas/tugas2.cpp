#include <iostream>
using namespace std;

int main () {
    int watt, jam;

    cout << "Daya yang dibutuhkan oleh kipas angin = ";
    cin >> watt;

    cout << "Lama penggunaan kipas angin = ";
    cin >> jam;

    int watthour = watt*jam;

    cout << "=========================================================" << endl;
    cout << "Total energi listrik yang dibutuhkan kipas angin adalah = " << watthour << " Wh";

    return 0;
}
