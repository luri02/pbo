#include <iostream>

using namespace std;

class umur{
    private :
    int y, z;

    public:
    void assign(int tahunlahir, int tahunsekarang){
        y= tahunlahir ;
        z= tahunsekarang ;
    }
    int usia(){
        return y-z;
    }

};

int main(){
    umur obj;
    obj.assign(2021, 1990);
    cout<<"maka usia kalian sekarang adalah "<<obj.usia()<<"Tahun"<<endl;
    cout<<endl;
    return 0;

}
