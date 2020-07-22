#ifndef CP5_EX13_53_H
#define CP5_EX13_53_H

#include <string>

class HasPtr
{
public:
    friend void swap(HasPtr &, HasPtr &);
    HasPtr(const std::string &s = std::string());
    HasPtr(const HasPtr &hp);
    HasPtr(HasPtr &&p) noexcept;
    HasPtr &operator=(HasPtr rhs);
    ~HasPtr();

private:
    std::string *ps;
    int i;
};

#endif