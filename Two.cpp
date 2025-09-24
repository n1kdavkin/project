#include "Two.h"

Two::Two(const std::string &s) : s_(s) {
    std::cout << "Two " << s_ << " created" << std::endl;
}

Two::Two(const Two &other) : s_(other.s_) {
    std::cout << "Two " << s_ << " created with copy" << std::endl;
};

std::string Two::getS() const {
    return s_;
}

void Two::setS(const std::string &s) {
    s_ = s;
}

Two::~Two() { std::cout << "Two " << s_ << " deleted" << std::endl; };
