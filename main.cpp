#include <iostream>
#include "isotope.h"
#include "Element.h"
#include "vector"
#include "string"

using namespace std;
int main() {
    isotope*C1 = new isotope("Fe57", 26, 56, 55.9, 91.754,223.688 );
    isotope*C2 = new isotope("Fe57", 26, 57, 56.9, 2.119, 129.388);
    isotope*C3 = new isotope("Fe58", 26, 58, 57.9, 0.282, 122.487);
    vector<isotope> a;
    a.push_back(*C1);
    a.push_back(*C2);
    a.push_back(*C3);
    Element*B = new Element;
    B->setmas(a);
    B->getinfo();
}