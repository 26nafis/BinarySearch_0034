
#include <iostream>
using namespace std;

int elemen[10];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "masukan banyaknya elemen pada array (maksimal 10): ";
        cin >> n;
        if (n <= 10)
        {
            break;
        }
        else
        {
            cout << "nJumlah elemen tidak boleh lebih dari 10. silakan coba lagi.\n";
        }
    }
    cout << "=====================" << endl;
    cout << "Masukan Elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> elemen [i];
    }
}