#include <iostream>

using namespace std;
int main()
{
		//soal no 1 menukar variabel dengan variabel tambahan 
		int firstValue = 10;
		int secondValue = 8;
		int temp;
		int lenght = 120;

		cout << "[Pertukaran Dua Variabel]" << endl;
		cout << "Variabel Pertama: " << firstValue << endl;
		cout << "Variabel Kedua: " << secondValue << endl;

		temp = firstValue;
		firstValue = secondValue;
		secondValue = temp;
		
		cout << "[Hasil Pertukaran]" << endl;
		cout << "Variabel Pertama: " << firstValue << endl;
		cout << "Variabel Kedua: " << secondValue << endl;

std::cout << std::string(lenght, '_') << endl;

		// soal no 1 menukar variabel tanpa variabel tambahan
		
		int value1 = 10;
		int value2 = 8;
		
		value1 = value1 + value2;
		value2 = value1 - value2;
		value1 = value1 - value2;
		
		cout <<"Variabel Pertama: " << value1 << endl;
		cout <<"Variabel Kedua: " << value2 << endl;
		
	std::cout << std::string(lenght, '_') << endl;
	
		//soal no 2 bebek pak Tatang
		//	std::cout << std::string(lenght, '_') << endl;
		int N, M;
		cout <<"Ekor Bebek Pak Tatang: " << endl;
		cin >> N;
		
		cout <<"Dibagi ke temennya: " << endl;
		cin >> M;
		
		int jumlah_bebekDibagikan = N / M;
		int sisaBebek = N % M;
		
		cout <<"Jumlah yang harus dia berikan ke masing-masing teman: " << jumlah_bebekDibagikan << endl;
		cout <<"jumlah sisanya: " << sisaBebek << endl;
		
		return 0;
}