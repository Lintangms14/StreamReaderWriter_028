#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; // Melemparkan sebuah interger maka
		cout << "Pernyataan tidak akan di eksekusi" << endl;
	}
}