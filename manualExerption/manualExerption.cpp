#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; // Melemparkan sebuah interger maka
		cout << "Pernyataan tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		// blok ini akan di eksekusi
		cout << "Pengecualian akan di eksekusi" << endl;
	}
	catch (...) {
		/*jika selain integer maka block ini akan di eksekusi*/
		cout << "default Pengecualian dieksekusi" << endl;
	}
}