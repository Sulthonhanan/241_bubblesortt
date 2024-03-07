// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int arr[20];
int n;

void input() {
    while (true)
    {
        cout << "masukan banyaknya element array :";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 element.\n";
        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "masukan element array" << endl;
    cout << "===============" << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }

}
void bubbleSortArray() {//prosedur untuk mengurutkan array
    int pass = 1; //step 1
    do {
        for (int i = 0; i <= n - 1 - pass; i++) {//step 2
            if (arr[i] > arr[i + 1]) {//step 3
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }


        pass = pass + 1;//step 4
    } while (pass <= n);//step 5
}

void display() {
    cout << endl;
    cout << "====================" << endl;
    cout << "Element Array telah tersusun" << endl;
    cout << "====================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl; //Output setiap element array pada garis baru

    }
    cout << "jumlah pass = " << n - 1 << endl;
}

int main()
{
    input(); //Memanggil prosedur untuk menginput data
    bubbleSortArray(); //Memanggil prosedur bubblesort untuk proses mengurutkan data
    display(); // Memanggil prosedur untuk menampilkan data yang telah urut
    system("pause");

    return 0;
}

