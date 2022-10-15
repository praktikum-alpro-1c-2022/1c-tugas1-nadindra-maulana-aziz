#include <iostream>
using namespace std;

int main()
{
    //menggunakan variable sementara

    //nilai variable
    int x = 7;
    int y = 5;
    
    //cout pertama sebelum nilai diganti atau ditimpa
    cout << x << endl;
    cout << y << endl;

    //saya coba ganti nilai dari keduanya
    glass = x;
    x = y;
    y = glass;
    
    //tampilkan cout setelah nilai diganti
    cout << x << endl;
    cout << y << endl;

    return 0;
}
