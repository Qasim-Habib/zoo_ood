

#include "string.h"
#include <new>
String::String(const char *str)
{
    size_t length=_strlen(str);
    try {
        m_str=new char[length];
        m_size=length;
        _strcpy(m_str,str);
    }
    catch (std::bad_alloc& _badAlloc) {
        std::cerr<<"bad allocation caught: "<<_badAlloc.what()<<std::endl;
    }

}
 int String::compare(const String &other) const
{
    return _strcmp(m_str,other.m_str);
}
String& String::operator=(const String& other)
{
    if(&other!=this)
    {
        delete [] m_str;
        m_str=new char[other.m_size];
        m_size=other.m_size;
        _strcpy(m_str,other.m_str);
    }
    return *this;
}

String& String::operator+=(const String& str )
{
*this=*this+str;
    return *this;
}
size_t String::getSize()const
{
    return m_size;
}
String::~String()
{
    delete[]m_str;
}

String& String::connecrante(const String& other)
{

    char* temp;
    temp = new char[m_size + other.m_size - 1];
    _strcat(temp, m_str, other.m_str);
    delete[] m_str;
    m_str = temp;
    m_size = m_size + other.m_size - 1;
    return *this;


}
String::String(const String& other)
{
    try {
        m_str = new char[other.m_size];
        m_size=other.m_size;
        _strcpy(m_str,other.m_str);
    }
    catch (std::bad_alloc& _badAlloc) {
        std::cerr<<"bad allocation caught: "<<_badAlloc.what()<<std::endl;
    }

}
char& String::operator[](size_t index)
{

        if(index<0||index>=m_size)
            throw "bad index";
        return this->m_str[index];

}
const char& String::operator[](size_t index)const
{
    if(index<0||index>=m_size)
        throw "bad index";
    return this->m_str[index];
}
size_t _strlen(const char* str){
    size_t count=0;
    while(*str++){
        count+=1;
    }
    return count+1;
}
void _strcpy(char* dst,const char* src)
{
    while(*src)
    {
        *dst++=*src++;
    }
    *dst='\0';
}
String operator+(const String& str1,const String& str2)
{
    String temp(str1);
    return temp.connecrante(str2);
}
void _strcat(char* result, const char* src1,const char* src2)
{

    while(*src1)
    {
        *result++=*src1++;
    }
    while(*src2)
    {
        *result++=*src2++;
    }
    *result='\0';
}
int _strcmp(const char* str1,const char* str2)
{
    size_t size1=_strlen(str1);
    size_t size2=_strlen(str2);
    if (size1!=size2)
        return size1>size2?1:-1;
    while(size1--)
    {
        if(*str1>*str2)
            return 1;
        if(*str1<*str2)
            return -1;
        str1++;
        str2++;
    }
    return 0;
}
bool operator==(const String& str1,const String& str2)
{
if(str1.compare(str2)==0){
    return true;}
    return false;
}
bool operator!=(const String& str1,const String& str2)
{
    if(str1.compare(str2)!=0)
        return true;
    return false;
}
bool operator>(const String& str1,const String& str2)
{
    if(str1.compare(str2))
        return true;
    return false;
}
bool operator>=(const String& str1,const String& str2)
{
    if(str1.compare(str2)>=0)
        return true;
    return false;
}
bool operator<(const String& str1,const String& str2)
{
    if(str1.compare(str2)<0)
        return true;
    return false;
}
bool operator<=(const String& str1,const String& str2)
{
    if(str1.compare(str2)<=0)
        return true;
    return false;
}
std::ostream& operator<<(std::ostream& out,const String& str)
{
    out<<str.m_str<<std::endl;
    return out;
}
