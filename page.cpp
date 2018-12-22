//
// Created by Qin Hsiu on 2018/12/10.
//
#include"page.h"
#include<iostream>
#include<string>
#include<vector>
#include"line.h"

Page::Page(Page&&o)
{
    for(auto i:_lines)
        delete i;
    _lines.clear();
    m_no=o.m_no;
    _lines=o._lines;
    for(auto l:o._lines)
        delete l;
    o._lines.clear();
}
Page::Page(const Page &o)
{
    m_no=o.m_no;
    for(auto l:o._lines)
        _lines.push_back(new Line{*l});
}
Page::Page(int no,int lines)
{
    m_no=no;
    for(auto i=0;i<=lines+1;i++)
        _lines.push_back(new Line(i));
}
Page::~Page()
{
    for(auto &l:this->_lines){
        delete l;
        l=nullptr;}
    _lines.clear();
}


void Page::setPage(int n,std::string s)
{
    this->getLine(n)->setText(s);
}
void Page::showPage(int n)
{
    std::cout<<this->getLine(n)->text()<<std::endl;
}
Line* Page::getLine(int lnumber)
{
    return _lines[lnumber-1];
}



Page& Page::operator=(Page &o)
{
    m_no=o.m_no;
    for(auto &l:_lines)
        delete l;
    for(auto line:o._lines)
        _lines.push_back(new Line{*line});
    return *this;
}

Page& Page::operator=(Page &&o) noexcept
{
    for(auto i:_lines)
        delete i;
    _lines.clear();
    m_no=o.m_no;
    _lines=o._lines;
    for(auto l:o._lines)
    {delete l;
        l=nullptr;}
    o._lines.clear();
    return *this;
}
