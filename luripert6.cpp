#include <iostream>

using namespace std;

class waktu{
    private :
    int jam;
    int menit;
    int detik;

    public:
        waktu(){
            waktu ::jam = 0;
            waktu ::menit = 0;
            waktu ::detik = 0;
        }

    void setwaktu(int j, int m, int d){
        if ((j>=0 && j<23) && (m>=0 && m<=59) && (d>=0 && d<=59)){
            jam = j;
            menit = m;
            detik = d;

        } else {
            cout<<"format waktu salah"<<endl;
        }
    }

    int getjam(){
    return jam;
    }
    int getmenit(){
        return menit;
    }

    int getdetik(){
        return detik;
    }
};

int main(){
    int x,y,z;
    cout<<"jam =";
    cin>>x;
    cout<<"menit =";
    cin>>y;
    cout<<"detik =";
    cin>>z;


    waktu t;
    t.setwaktu(x,y,z);
    cout<<t.getjam()<<":"<<t.getmenit()<<":"<<t.getdetik()<<endl;


    return 0;
}