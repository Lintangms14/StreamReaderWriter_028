#include <iostream>
#include <exception>
// untuk obyek exception yang akan di gunakan
#include <array>
// untuk obyek array yang akan kita gunakan]

using namespace std;

int main()
{
	cout << "Awal Program" << endl; // Penanda 1:.....
	try {
		array<int, 3> data = { 3, 5, 7 };
		// Pesan array interger 3 element
		cout << data.at(5) << endl;
		// Memanggil array element ke 5
	}
	catch (exception& e) {
		// Perangkap menggunakan obyek exception
		cout << e.what() << endl;
		/*akan di eksekusi karena array data hanya memiliki 3 element*/
	}
	cout << "Baris Program Yang Terakhir" << endl;
	/*Penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
	return 0;
}