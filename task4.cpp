/******************************************************************************
 *                                                                            *
 *                                Task 4                                      *
 *                                                                            *
 *  Deskripsi:                   Task 4                                       *
 *                                                                            *
 *  Dibuat Oleh:  Prima Hagantha Kaban                                        *
 *                                                                            *
 *  Tanggal Dibuat: 19-03-2023                                                *
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

string convertToFormatTime(int secondsTime)
{
    int hour = secondsTime / 3600;
    int minute = (secondsTime % 3600) / 60;
    int seconds = secondsTime % 60;

    stringstream secondsResult;
    secondsResult << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << seconds;
    return secondsResult.str();
}

int main()
{
    int secondsDigit, result;
    string time;
    cout << "Masukkan 4 digit detik untuk di konversi : ";
    cin >> secondsDigit;

    time = convertToFormatTime(secondsDigit);
    cout << time << endl;
    return 0;
}