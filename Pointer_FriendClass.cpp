#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void shownim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main(){

    mahasiswa mhs(1);
    mhs.shownim();

    mahasiswa &refMhs = mhs;
    refMhs.nim = 2;

}