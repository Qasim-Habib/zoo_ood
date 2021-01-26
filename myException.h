//
// Created by qasim on 10/20/20.
//

#ifndef MAMMLSPROJ_MYEXCEPTION_H
#define MAMMLSPROJ_MYEXCEPTION_H
#include <stdexcept>

class MyException: public std::logic_error{
public:
    explicit MyException(const std::string & msg );
    virtual ~MyException()throw(){}
    virtual const char* what()const throw()
    {
        return m_msg.c_str();
    }

private:
    std::string m_msg;
};

class negativeException: public std::logic_error{
public:
    explicit negativeException(const std::string & msg );
    virtual ~negativeException()throw(){}
    virtual const char* what()const throw()
    {
        return m_msg.c_str();
    }

private:
    std::string m_msg;
};
#endif //MAMMLSPROJ_MYEXCEPTION_H
