#ifndef UNTITLED1_ISOTOPE_H
#define UNTITLED1_ISOTOPE_H
#include "string"
using namespace std;

class isotope {
private : string name;
    int iz, n;
    double a, fm;
public:
    isotope(const string &name, int iz, int n, double a, double fm) : name(name), iz(iz), n(n), a(a), fm(fm) {}
    int getName() const {
            }
    int getIz() const {
        return iz;
    }
    void setIz(int iz) {
        isotope::iz = iz;
    }
    void setName(int name) {
        isotope::name = name;
    }
    int getN() const {
        return n;
    }
    double getA() const {
        return a;
    }
    double getFm() const {
        return fm;
    }
    void setFm(double fm) {
        isotope::fm = fm;
    }
    void setA(double a) {
        isotope::a = a;
    }
    void setN(int n) {
        isotope::n = n;
    }
};
#endif
