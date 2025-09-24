#ifndef TWO_H
#define TWO_H

#include <iostream>
#include <string>

class Two {
    std::string s_;

public:
    explicit Two(const std::string &s = "");

    Two(const Two &other);

    [[nodiscard]] std::string getS() const;

    void setS(const std::string &s);

    ~Two();
};

#endif
