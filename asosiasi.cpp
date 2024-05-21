#include <iostream>
#include <vector>

using namespace std;

class dokter;
class pasien
{
    public:
    string nama;
    vector<dokter*>daftar_dokter;
    pasien(string pNama) :(pNama)
    {
        cout << "Pasien \""<< nama << "\" ada\n";
    }
    ~pasien()
    {
        cout << "Pasien \""<< nama << "\" tidak ada\n";
    }
    void tambahDokter(dokter*);
    void cetakDokter();
};

class dokter
{
    public:
    string nama;
    vector<pasien*>daftar_dokter;
    dokter(string pNama) :(pNama)
    {
        cout << "Dokter \""<< nama << "\" ada\n";
    }
    ~dokter()
    {
        cout << "Dokter \""<< nama << "\" tidak ada\n";
    }
    void tambahPasien(dokter*);
    void cetakPasien();
};

void pasien::tambahDokter(dokter* pDokter)
{
    daftar_dokter.push_back(pDokter);
}

void pasien::cetakDokter()
{
    cout <<"Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n"; 
    for (auto& a : daftar_dokter)
    {
        cout << a-> nama << "\n";
    }
    cout << endl;
}

void dokter::tambahPasien(dokter* pDokter)
{
    daftar_pasien.push_back(pDokter);
}
