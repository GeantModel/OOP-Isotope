#include <iostream>
#include "isotope.h"
#include "Element.h"
#include "vector"
#include "string"

using namespace std;
int main() {
    isotope *C1 = new isotope("Fe56", 26, 56, 55.9, 10);
    isotope*C2 = new isotope("Fe57", 26, 57, 56.9, 10);
    isotope*C3 = new isotope("Fe58", 26, 58, 57.9, 10);
    vector<isotope> a;
    a.push_back(*C1);
    a.push_back(*C2);
    a.push_back(*C3);
    vector<string> ;
    Element*B = new Element(3);
    B->setmas(a);
    B->getinfo();

}