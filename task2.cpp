/******************************************************************************
 *                                                                            *
 *                                Task 2                                      *
 *                                                                            *
 *  Deskripsi:   TASK 2                                                        *
 *                                                                            *
 *  Dibuat Oleh:     Prima Hagantha                                           *
 *                                                                            *
 *  Tanggal Dibuat:  19-03-2023                                               *
 *                                                                            *
 *  Revisi:                                                                   *
 *                                                                            *
 ******************************************************************************/

#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <climits>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <utility>
#include <cstring>
#include <assert.h>
#include <conio.h>

using namespace std;

int main()
{
    ;

    int number, digit;
    int multiplier = 1;
    int result = 0;

    cout << "Masukkan 6 digit angka : ";
    cin >> number;

    while (number > 0)
    {
        digit = number % 10;
        number /= 10;

        digit += 2;

        if (digit > 9)
        {
            digit -= 10;
            if (number == 0) { 
                digit++;
            }
        }

        result += digit * multiplier;
        multiplier *= 10;
    }

    cout << "hasilnya adalah : " << result << endl;

    return 0;
}