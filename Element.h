#ifndef UNTITLED1_ELEMENT_H
#define UNTITLED1_ELEMENT_H
#include <vector>
class Element {
private: int *arr;
    int numb;
public: vector<isotope> mas;
     void setmas(const vector <isotope> &mas) {
        Element::mas = mas;
    }
    void getinfo(){
        for (auto it : mas){
            cout<<"name = "<<it.getName()<<", iz = "<<it.getIz()<<", n = "
                <<it.getN()<<", a = "<<it.getA()<<"*g/mole, fm = "<<it.getFm()
                <<"  cs-(N,TOT) = "<<it.getCs()<<endl;
        }
    };

};
#endif
