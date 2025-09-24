#include "One.h"

One::One(const int one, const Three *ptr) : one_(one) {
    p = new Three(*ptr);
    std::cout << "One " << one << " created" << std::endl;
}

One::One(const One &other) : one_(other.one_) {
    p = new Three(*other.p);
    std::cout << "One " << one_ << " created with copy" << std::endl;
}

int One::getOne() const {
    return one_;
}

void One::setOne(const int one) {
    one_ = one;
}

Three *One::getP() const {
    return p;
}

void One::setP(const Three *ptr) {
    delete p;
    if (ptr)
        p = new Three(*ptr);
    else
        p = nullptr;
}

One::~One() {
    delete p;
    std::cout << "One " << one_ << " deleted" << std::endl;
}
