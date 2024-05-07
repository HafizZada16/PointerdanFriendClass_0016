#include <iostream>
using namespace std;

class pelajar;
class manusia
{
public:
    void showNilaiPelajar(pelajar &a);
};

class pelajar
{
private:
    int nilai:

public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaiPelajar(pelajar &a);
};

void manusia::showNilaiPelajar(pelajar &a)
{
    cout << a.nilai;
}

int main()
{
    manusia budi;
    pelajar pbudi;
    budi.showNilaiPelajar(pbudi);
    return 0;
}