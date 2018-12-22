//
// Created by Qin Hsiu on 2018/12/16.
//
#include "line.h"
#include<string>

Line::Line(int LineNo):m_no{LineNo}{}
std::string Line::text()
{
    return m_text;
}
void Line::setText(std::string text)
{
    m_text=text;
}

