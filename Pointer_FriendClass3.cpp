#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string Nama;

public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa
{
private:
    int Id;

public:
    void setId(int pId);
    void displayAll(orang &a);
};

void siswa::displayAll(orang &a)
{
    cout << Id << endl;
}
void orang::setNama(string pNama)
{
    Nama = pId;
}
void siswa::setId(int pId)
{
    Id = pId;
}

