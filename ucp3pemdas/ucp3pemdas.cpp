#include <iostream>
using namespace std;
class MasukUniversitas {
	privat: // isi access modifier disini
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
	// isi daftar variable yang dibutuhkan di bawah ini
public:
	void setMasukUniversitas( int totalBiaya[i]) {
		masukUniversitas[i] = totalBiaya;
	}
	float masukUniversitas(int i) {
		return masukUniversitas[i];
	}
	virtual void namaJalurMasuk() {
		cout << "masuk jalur SNBP" << endl;
		cout << "masuk jalur SNBT" << endl;
		cout << "exit" << endl;
	}
	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	virtual void hitungTotalBiaya() {
		cout << "tambahkan uangPendaftaran" << endl;
		cout << "tambahkan uangSemesterPertama" << endl;
		cout << "tambahkan uangBangunan" << endl;
	}
	// isi disini dengan fungsi virtual yang dibutuhkan
	void setttotalBiaya(int nilai) {
		this->uangPendaftaran, uangSemesterPertama, uangBangunan= nilai;
	}
	float gettotalBiaya() {
		return totalBiaya;
	}
	virtual void Display() {
		cout << "tampilkan total biaya jalur jalur SNBP" << endl;
		cout << "tampilkan total biaya jalur SNBT" << endl;
		cout << "exit" << endl;
	}
	void setDisplay(int nilai) {
		this->uangPendaftaran, uangSemesterPertama, uangBangunan = nilai ;
	}
	float gettotalBiaya() {
		return totalBiaya;
	}
	virtual void Input() {
		cout << "menerima nilai biaya jalur snbt" << endl;
		cout << "menerima nilai biaya jalur snbp" << endl;
		cout << "exit" << endl;
	}
	void setInput(int nilai) {
		this->uangPendaftaran, uangSemesterPertama, uangBangunan = nilai;
	}
	float getInput() {
		return Input;
	}

	// isi disini dengan fungsi virtual yang dibutuhkan
	

	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
public:
	SNBT(int nilai) :
		MasukUniversitas(int nilai)
	{
		cout << "total biaya jalur snbt" << endl;
	}
	// isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
public:
	SNBP(int nilai) :
		MasukUniversitas(int nilai)
	{
		cout << "total biaya jalur snbp" << endl;
	}
	// isi disini untuk melengkapi class SNBP
};
int main() {
	MasukUniversitas namaJalurMasuk,
	namaJalurMasukT.setMasukUniversitas(1,"SNBT");
	namaJalurMasuk.setMasukUniversitas(1, "SNBP");
	namaJalurMasuk.setMasukUniversitas(3, "EXIT");

	MasukUniversitas Display,
	Display.setDisplay(1, "total biaya SNBT");
	Display.setDisplay(1, "total biaya SNBP");
	Display.setDisplay(3, "EXIT");
	 
	MasukUniversitas Input,
	Input.setInput(1, "menerima biaya SNBT");
	Input.setInput(1, "menerima biaya SNBP");
	Input.setInput(3, "EXIT");
	 
	return 0;
	
}
