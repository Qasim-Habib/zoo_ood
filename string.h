//
// Created by kasim on 10/18/2020.
//

#ifndef STRINGPROJ_STRING_H
#define STRINGPROJ_STRING_H
#include <iostream>
class String{
public:
    String(const char* str="");
    String(const String& other);
    String& operator=(const String& other);
    String& operator+=(const String& str );
    String& connecrante(const String& other);
    int compare(const String& other)const;
    char& operator[](size_t index);
    const char& operator[](size_t index)const;
    size_t getSize()const;
    friend std::ostream& operator<<(std::ostream& out,const String& str);
    ~String();
private:
    char* m_str;
    size_t m_size;
};
size_t _strlen(const char* str);
void _strcpy(char* dst,const char* src);
String operator+(const String& str1,const String& str2);
void _strcat(char* result,const char* target,const char* src);
bool operator==(const String& str1,const String& str2);
bool operator!=(const String& str1,const String& str2);
bool operator>(const String& str1,const String& str2);
bool operator>=(const String& str1,const String& str2);
bool operator<(const String& str1,const String& str2);
bool operator<=(const String& str1,const String& str2);
int _strcmp(const char* str1,const char* str2);
std::ostream& operator<<(std::ostream& out,const String& str);
#endif //STRINGPROJ_STRING_H
