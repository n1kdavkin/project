#ifndef ONE_H
#define ONE_H

#include <iostream>

#include "Three.h"

class One {
    int one_;
    Three *p;

public:
    explicit One(int one = 0, const Three *ptr = nullptr);

    One(const One &other);

    [[nodiscard]] int getOne() const;

    void setOne(int one);

    [[nodiscard]] Three *getP() const;

    void setP(const Three *ptr);

    ~One();
};

#endif
