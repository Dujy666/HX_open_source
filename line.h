//
// Created by Qin Hsiu on 2018/12/16.
//

#ifndef PAGE_LINE_H
#define PAGE_LINE_H
#include<string>

class Line
{
public:
    Line(int );

    void setText(std::string );
    std::string text();
private:
    int m_no;
    std::string m_text;
};


#endif //PAGE_LINE_H
