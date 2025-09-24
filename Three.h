#ifndef THREE_H
#define THREE_H

class Three {
    int n_;

public:
    explicit Three(int n = 0);

    Three(const Three &other);

    [[nodiscard]] int getN() const;

    void setN(int n);

    ~Three();
};

#endif
