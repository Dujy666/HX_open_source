#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include"page.h"
#include"line.h"

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::move;

int main() {
    Page p1(1,2);
    string s{"qxy"};
    p1.setPage(1,s);
    p1.showPage(1);
    Page p2(2,3);
    p2.setPage(2,s);
    p2.showPage(2);
    string t{"how"};
    Page p3(2,3);
    p3.setPage(2,t);
    p3.showPage(2);
    Page p4{move(p2)};
    p4.showPage(2);
    p2.showPage(2);
    /*
    p1.getLine(1)->setText("hello");
    p1.getLine(2)->setText("world");
    cout<<p1.getLine(1)->text()<<endl;
    cout<<p1.getLine(2)->text()<<endl;
    Page p5{Page(2,4)};
    p5.getLine(1)->setText("wo");
    cout<<p5.getLine(1)->text()<<endl;
    Page p4=Page(1,2);
    p4.getLine(1)->setText("h");
    p4.getLine(2)->setText("w");
    cout<<p4.getLine(1)->text()<<endl;
    cout<<p4.getLine(2)->text()<<endl;
    Page p2=p1;
    Page p3;
    cout<<p2.getLine(1)->text()<<endl;
    cout<<p2.getLine(2)->text()<<endl;
    cout<<endl<<endl;
    p2.getLine(1)->setText("he");
    p2.getLine(2)->setText("wo");
    cout<<p1.getLine(1)->text()<<endl;
    cout<<p1.getLine(2)->text()<<endl;
    cout<<p2.getLine(1)->text()<<endl;
    cout<<p2.getLine(2)->text()<<endl;
    cout<<endl<<endl;
    p3=p1;
    cout<<p3.getLine(1)->text()<<endl;
    cout<<p3.getLine(2)->text()<<endl;
    cout<<endl<<endl;
    p3.getLine(1)->setText("meet");
    p3.getLine(2)->setText("meetyou");
    cout<<p3.getLine(1)->text()<<endl;
    cout<<p3.getLine(2)->text()<<endl;
    cout<<p1.getLine(1)->text()<<endl;
    cout<<p1.getLine(2)->text()<<endl;*/
    return 0;
}