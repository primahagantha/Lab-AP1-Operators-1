/******************************************************************************
 *                                                                            *
 *                                Task 1                                      *
 *                                                                            *
 *  Deskripsi:  Task 1 alpro 1                                                *
 *                                                                            *
 *  Dibuat Oleh:  Prima Hagantha                                              *
 *                                                                            *
 *  Tanggal Dibuat:   17 maret 2023                                           *
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
    // Isi program
    int number = 0, result = 0;

    cout << "masukkan 4 digit angka : ";
    cin >> number;

    number += 8;

    result = number / 3;

    result = (result % 5) * 5;

    cout << "Hasilnya adalah : " << result;

    return 0;
}