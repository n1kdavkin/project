#include <iostream>
#include "One.h"
#include "Two.h"
#include "Three.h"

int main() {
    const Three three(1);
    const One one(2, &three);
    const Two two("test");

    std::cout << "three n_ = " << three.getN() << std::endl;
    std::cout << "two s_ = " << two.getS() << std::endl;
    std::cout << "one one_ = " << one.getOne() << std::endl;
    std::cout << "one p = " << one.getP()->getN() << std::endl;

    One anotherOne(one);
    anotherOne.setOne(3);
    anotherOne.getP()->setN(4);
    std::cout << "one one_ = " << one.getOne() << ", p = " << (one.getP()->getN()) << std::endl;
    std::cout << "anotherOne one_ = " << anotherOne.getOne() << ", p = " << (anotherOne.getP()->getN()) << std::endl;
    return 0;
}
