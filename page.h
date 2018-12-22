//
// Created by Qin Hsiu on 2018/12/10.
//
#ifndef PAGE_PAGE_H
#define PAGE_PAGE_H
#include<iostream>
#include<vector>
#include<string>
#include"line.h"

class Page
{
public:
    Page(int ,int );
    Page(const Page&);
    Page(Page&&);
    ~Page();

    Page& operator=(Page &);
    Page& operator=(Page &&) noexcept;

    Line* getLine(int);
    void setPage(int ,std::string );
    void showPage(int);
private:
    int m_no;
    std::vector<Line*>_lines;
};

#endif //PAGE_PAGE_H
