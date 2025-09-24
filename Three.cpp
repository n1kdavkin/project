#include "Three.h"

#include <iostream>

Three::Three(const int n) : n_(n) {
    std::cout << "Three " << n_ << " created" << std::endl;
}

Three::Three(const Three &other): n_(other.n_) {
    std::cout << "Three " << n_ << " created with copy" << std::endl;
};

int Three::getN() const {
    return n_;
}

void Three::setN(const int n) {
    n_ = n;
}

Three::~Three() { std::cout << "Three " << n_ << " deleted" << std::endl; };
