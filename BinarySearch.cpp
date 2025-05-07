
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

void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int i = 0; i<= n - pass - 1; i++)
        {
            if (elemen[i] > elemen[i + 1])
            {
                int temp = elemen[i];
                elemen [i] = elemen[i + 1];
                elemen [i + 1] = temp;
            }
        }
        pass++;
    } while (pass < n);
    
}

void display ()
{
    cout << "==============================\n";
    cout << "Elemen Array Setelah Diurutkan (Asc)\n";
    cout << "==============================\n";
    for (int i = 0; i < n; i++)
    {
        cout << elemen[i];
        if (i < n - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

void binarysearch()
{
    char ulang;
    do 
    {
        cout << "\n======================\n";
        cout << "pencarian binary search\n";
        cout << "==========================\n";

        int item;
        cout << "memasukan elemen yang ingin dicari: ";
        cin >> item;

        int low = 0;
        int high = n - 1;

        do 
        {
            int mid = (low + high) /2;
            if (elemen[mid == item])
            {
                cout <<"\nElemen " << item << "ditentukan pada indeks ke-" << mid << ".\n";
                return;
            }
            else if (item < elemen[mid])
            {
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        } while (low <= high);
        cout << "\nMaaf! Elemenn" << item << "tidak ditentukan dalam array.\n";
        cout << "\nIngin mecari lagi?" (y/n): ;
        cin >> ulang;
    } while (ulang == 'y'|| ulang == 'Y');
}