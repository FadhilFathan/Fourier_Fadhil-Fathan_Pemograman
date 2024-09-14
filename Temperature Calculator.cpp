#include <iostream>
#include <fstream> // Library untuk operasi file
using namespace std;

// Fungsi untuk mengonversi Celsius ke Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Fungsi untuk mengonversi Fahrenheit ke Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double inputTemp, convertedTemp;
    int choice;
    ofstream outFile("temperature_conversion.txt"); // Membuka file output

    // Input dari pengguna
    cout << "Pilih tipe konversi suhu: " << endl;
    cout << "1. Celsius ke Fahrenheit" << endl;
    cout << "2. Fahrenheit ke Celsius" << endl;
    cout << "Masukkan pilihan (1/2): ";
    cin >> choice;

    // Conditional statement untuk memilih konversi suhu
    if (choice == 1) {
        cout << "Masukkan suhu dalam Celsius: ";
        cin >> inputTemp;
        convertedTemp = celsiusToFahrenheit(inputTemp);
        cout << inputTemp << " Celsius = " << convertedTemp << " Fahrenheit" << endl;
        outFile << inputTemp << " Celsius = " << convertedTemp << " Fahrenheit" << endl; // Menyimpan hasil ke file
    } else if (choice == 2) {
        cout << "Masukkan suhu dalam Fahrenheit: ";
        cin >> inputTemp;
        convertedTemp = fahrenheitToCelsius(inputTemp);
        cout << inputTemp << " Fahrenheit = " << convertedTemp << " Celsius" << endl;
        outFile << inputTemp << " Fahrenheit = " << convertedTemp << " Celsius" << endl; // Menyimpan hasil ke file
    } else {
        cout << "Pilihan tidak valid!" << endl;
    }

    outFile.close(); // Menutup file
    return 0;
}
