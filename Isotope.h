#ifndef UNTITLED1_ISOTOPE_H
#define UNTITLED1_ISOTOPE_H
#include "string"
using namespace std;

class isotope {
private : string name;
    int iz, n;
    double a, fm, cs;
public:
    isotope(const string &name, int iz, int n, double a, double fm, double cs) : name(name), iz(iz), n(n), a(a), fm(fm), cs(cs) {}
    string getName() const {
        return name;
            }
    int getIz() const {
        return iz;
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
    double getCs() const {
        return cs;
    }
};
#endif
