#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    int pin = 1234;
    int inputPin;
    int percobaan = 0;
    int maxPercobaan = 3;

    double saldo = 5000000;
    double jumlah;

    string nama = "Niko";

    int pilihan;

    cout << "======================================" << endl;
    cout << "       SIMULASI ATM SEDERHANA        " << endl;
    cout << "======================================" << endl;
    cout << "Selamat datang, " << nama << "!" << endl;

    bool login = false;

    for (percobaan = 1; percobaan <= maxPercobaan; percobaan++) {

        cout << "\nMasukkan PIN : ";
        cin >> inputPin;

        if (inputPin == pin) {
            cout << "PIN benar!" << endl;
            cout << "Login berhasil." << endl;

            login = true;
            break;
        }
        else {
            cout << "PIN salah!" << endl;
            cout << "Percobaan ke-" << percobaan
                 << " dari " << maxPercobaan << endl;
        }
    }

    if (login == false) {

        cout << "\n======================================" << endl;
        cout << "Anda telah gagal memasukkan PIN." << endl;
        cout << "Akun diblokir sementara." << endl;
        cout << "======================================" << endl;

        return 0;
    }

    while (true) {

        cout << "\n======================================" << endl;
        cout << "              MENU ATM               " << endl;
        cout << "======================================" << endl;
        cout << "1. Cek Saldo" << endl;
        cout << "2. Tarik Tunai" << endl;
        cout << "3. Setor Tunai" << endl;
        cout << "4. Informasi Rekening" << endl;
        cout << "5. Keluar" << endl;
        cout << "======================================" << endl;

        cout << "Pilih menu : ";
        cin >> pilihan;

        switch (pilihan) {

            case 1:

                cout << "\n========== CEK SALDO ==========" << endl;
                cout << fixed << setprecision(2);
                cout << "Saldo Anda : Rp " << saldo << endl;

                break;

            case 2:

                cout << "\n========== TARIK TUNAI ==========" << endl;
                cout << "Masukkan jumlah penarikan : Rp ";
                cin >> jumlah;

                // IF - ELSE
                if (jumlah <= 0) {

                    cout << "Jumlah penarikan tidak valid!" << endl;

                }
                else if (jumlah > saldo) {

                    cout << "Saldo tidak mencukupi!" << endl;

                }
                else {

                    saldo = saldo - jumlah;

                    cout << "Penarikan berhasil!" << endl;
                    cout << "Jumlah ditarik : Rp "
                         << jumlah << endl;

                    cout << "Saldo sekarang : Rp "
                         << saldo << endl;
                }

                break;

            case 3:

                cout << "\n========== SETOR TUNAI ==========" << endl;
                cout << "Masukkan jumlah setoran : Rp ";
                cin >> jumlah;

                // IF - ELSE
                if (jumlah <= 0) {

                    cout << "Jumlah setoran tidak valid!" << endl;

                }
                else {

                    saldo = saldo + jumlah;

                    cout << "Setoran berhasil!" << endl;
                    cout << "Jumlah disetor : Rp "
                         << jumlah << endl;

                    cout << "Saldo sekarang : Rp "
                         << saldo << endl;
                }

                break;

            case 4:

                cout << "\n======= INFORMASI REKENING =======" << endl;
                cout << "Nama          : " << nama << endl;
                cout << "Saldo         : Rp "
                     << saldo << endl;
                cout << "Status        : Aktif" << endl;

                break;

            case 5:

                cout << "\n======================================" << endl;
                cout << "Terima kasih telah menggunakan ATM." << endl;
                cout << "Sampai jumpa!" << endl;
                cout << "======================================" << endl;

                return 0;

            default:

                cout << "\nMenu tidak tersedia!" << endl;
                cout << "Silakan pilih menu 1 - 5." << endl;

                break;
        }
    }

    return 0;
}