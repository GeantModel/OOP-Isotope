#ifndef UNTITLED1_ELEMENT_H
#define UNTITLED1_ELEMENT_H
#include <vector>
class Element {
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
        cout<<endl;
    };
    void maxCS(){
        double k=0;
        int n=0;
        for (int i=0; i<=mas.size(); i++){
            if (mas[i].getCs()>k) {
                k=mas[i].getCs();
                n=i; } }
        cout<<"Max cross section = "<<k<<"---Isotope "<<mas[n].getName()<<endl;
        }
    void maxFM(){
        double k=0;
        int n=0;
        for (int i=0; i<=mas.size(); i++){
            if (mas[i].getFm()>k) {
                k=mas[i].getFm();
                n=i; } }
        cout<<"Max fm = "<<k<<"---Isotope "<<mas[n].getName()<<endl;
    }
  };
#endif
