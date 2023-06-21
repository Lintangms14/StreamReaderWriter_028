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
}