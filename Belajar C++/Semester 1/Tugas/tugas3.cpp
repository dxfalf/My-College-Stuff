#include <iostream>
using namespace std;

int main () {
    int km, bensin;

    cout << "Jarak perjalanan menggunakan sepeda motor = ";
    cin >> km;

    cout << "Banyak bensin yang dihabiskan sepeda motor = ";
    cin >> bensin;

    int konsumsibbm = km/bensin;

    cout << "======================" << endl;
    cout << "Konsumsi BBM sebesar = " << konsumsibbm << " km/liter";

    return 0;
}
