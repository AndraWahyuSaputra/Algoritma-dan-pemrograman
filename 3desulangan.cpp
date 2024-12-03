#include <iostream>
using namespace std;

// Function untuk melakukan operasi matematika
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

// Procedure untuk menampilkan hasil
void displayResult(float result) {
    cout << "Hasilnya adalah: " << result << endl;
}

int main() {
    int choice;
    float num1, num2, result;
    bool continueCalculating = true;

    // Loop untuk menghitung beberapa kali
    while (continueCalculating) {
        // Menu pilihan operasi
        cout << "Pilih operasi matematika:" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan Anda (1-5): ";
        cin >> choice;

        // Penggunaan SWITCH CASE untuk memilih operasi
        switch (choice) {
            case 1:
                cout << "Masukkan dua angka: ";
                cin >> num1 >> num2;
                result = add(num1, num2);
                displayResult(result);
                break;

            case 2:
                cout << "Masukkan dua angka: ";
                cin >> num1 >> num2;
                result = subtract(num1, num2);
                displayResult(result);
                break;

            case 3:
                cout << "Masukkan dua angka: ";
                cin >> num1 >> num2;
                result = multiply(num1, num2);
                displayResult(result);
                break;

            case 4:
                cout << "Masukkan dua angka: ";
                cin >> num1 >> num2;
                result = divide(num1, num2);
                if (num2 != 0) {  // Hanya tampilkan hasil jika pembagian tidak oleh nol
                    displayResult(result);
                }
                break;

            case 5:
                cout << "Terima kasih telah menggunakan kalkulator!" << endl;
                continueCalculating = false;
                break;

            default:
                cout << "Pilihan tidak valid, coba lagi." << endl;
                break;
        }

        // Pertanyaan untuk lanjutkan menghitung atau tidak
        if (continueCalculating) {
            char repeat;
            cout << "Apakah Anda ingin melanjutkan? (y/n): ";
            cin >> repeat;
            if (repeat == 'n' || repeat == 'N') {
                continueCalculating = false;
            }
        }
    }

    return 0;
}

