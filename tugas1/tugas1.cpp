#include <iostream>
using namespace std;


int a[20];                //Deklarasi array a dengan ukuran 20
int n;                    //Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input()
{            //Procedure untuk input
    while (true)
    {        //Looping
        cout << "Masukan banyaknya elemen pada array : ";      //Output ke layar
        cin >> n;             //Input dari pengguna
        if (n <= 20)          //Jika n kurang dari atau sama dengan 20
            break;            //Keluar dari loop
        else
        {                //Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";    //Output ke layar
        }

    }
    cout << endl;                                                //Output ke barisan kosong
    cout << "=======================" << endl;                   //Output ke layar
    cout << "Masukan Eleman Array" << endl;                      //Output ke layar
    cout << "=======================" << endl;                   //Output ke layar

    for (int i = 0; i < n; i++)
    {                   //Looping dengan j dimulai dari 0 hingga n-1
        cout << "Data ke -" << (i + 1) << ": ";     //Output ke layar
        cin >> a[i];                                //Input dari pengguna
    }
}

void insertionsort() {

    int temp;                                //Membuat variale data temporer atau penyimpanan sementara
    int i, j;                                //Membuat variable j sebagai penanda

    for (i = 1; i <= n - 1; i++) {           //1. Looping dengan i dimulai dari 1 hingga n-1

        temp = a[i];                       //2. Simpan nilai arr[i] ke variable sementara temp

        j = i - 1;                           //3. Setting nilai j sama dengan i-1

        while (j >= 0 && a[j] > temp)     //4. Looping while dimana nilai j lebih besar sama dengan 0 dan
                                         //arr[j] lebih besar daripada temp
        {
            a[j + 1] = a[j];            //4a. Simpan arr[j] ke dalam variable arr[j+1]
            j--;                            //4b. Decrement nilai j by 1
        }

        a[j + 1] = temp;                  //5. Simpan nilai temp ke dalam arr[j+1]

        cout << "\nPass " << i << ": ";     //Output ke layar
        for (int k = 0; k < n; k++) {       //Looping nilai k dimulai dari 0 hingga n-1
            cout << a[k] << " ";          //Output ke layar
        }
    }
   
}

int a[20];                //Deklarasi array a dengan ukuran 20
int n;                    //Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void display() {                          //Prosedur untuk menampilkan hasil
    cout << endl;                         //Output baris kosong
    cout << "=======================" << endl;      //Output ke layar
    cout << "ELEMEN Array yang telah tersusun" << endl;       //Output ke layar
    cout << "=======================" << endl;      //Output ke layar
    for (int j = 0; j < n; j++)
    {                   //Looping dengan j dimulai dari 0 hingga n-1
        cout << "Data ke -" << j + 1 << ": ";
        cout << a[j] << endl;                       //Output ke layar
    }
    cout << endl;                                   //Output baris kosong
}





int main()
{
         input();                        //Memanggil read()
         insertionsort();              //Memanggil bubblesortarray()
         display();                      //Memanggil display()
         return 0;
    
}