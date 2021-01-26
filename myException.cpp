//
// Created by qasim on 10/20/20.
//

#include "myException.h"
MyException::MyException(const std::string &msg):
        std::logic_error(msg),m_msg(msg) {

}

negativeException::negativeException(const std::string &msg):
        std::logic_error(msg),m_msg(msg)
{}