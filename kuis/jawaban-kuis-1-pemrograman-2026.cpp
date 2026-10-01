#include <bits/stdc++.h>
using namespace std;
#define pi 3.14

class Bidang {
    public:
      virtual double hitungluas() = 0;
};

class Lingkaran : public Bidang {
    protected:
      double radius;

    public:
      Lingkaran(double r){
        radius = r;
      }

      double hitungluas(){
        return pi*radius*radius;
      }
};

class Segitiga : public Bidang {
    private:
      double alas;
      double tinggi;

    public:
      Segitiga(double a, double t){
        alas = a;
        tinggi = t;
      }

      double hitungluas(){
        return (alas*tinggi)/2;
      }
};

class Persegi : public Bidang {
    private:
      double panjang, lebar;

    public:
      Persegi(double p, double l){
        panjang = p;
        lebar = l;
      }

      double hitungluas(){
        return panjang*lebar;
      }
};

class Silinder : public Lingkaran {
    private:
      double tinggi;

    public:
      Silinder(double r, double t) : Lingkaran(r), tinggi(t) {}

      double hitungluas(){
        return 2*pi*radius*(radius + tinggi);
      }
};

int main(){
    int q;
    cin >> q;

    vector<double> tes;

    for(int i = 0; i < q; i++){
        string k;
        cin >> k;

        string s;
        cin >> s;

        if(s == "Lingkaran"){
            double r;
            cin >> r;

            Lingkaran l(r);
            tes.push_back(l.hitungluas());
        }

        if(s == "Segiempat"){
            double p, l;
            cin >> p >> l;
            
            Persegi pe(p, l);
            tes.push_back(pe.hitungluas());
        }

        if(s == "Segitiga"){
            double al, tingg;
            cin >> al >> tingg;

            Segitiga s(al, tingg);
            tes.push_back(s.hitungluas());
        }

        if(s == "Silinder"){
            double nggi, rad;
            cin >> nggi >> rad;

            Silinder sil(nggi, rad);
            tes.push_back(sil.hitungluas());
        }
    }

    int a;
    cin >> a;

    while(a != -9){
        int b;
        cin >> b;

        int c = a;

        double sum = 0;

        for(int i = a - 1; i <= b - 1; i++){
            sum += tes[i];
        }

        cout << c << "-" << b << " : " << fixed << setprecision(2) << sum << "\n";
        cin >> a;
    }
}
