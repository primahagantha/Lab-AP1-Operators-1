#include <iostream>
using namespace std;

int main()
{
    int number, result = 0;
    cout << "Masukkan angka 4 digit: ";
    cin >> number;

    
    for (int i = 0; i < 4; i++)
    {
        result += number % 10;
        number /= 10;
    }

    cout << "Jumlah digit pada angka tersebut adalah: " << result << endl;
    return 0;
}
