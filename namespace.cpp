# include <iostream>
namespace header1{
    int print();
    void bar();
    int func(){
        print();
        // header1::print();
        header2::print();
    }
}
namespace header2{
    int print();
    void bar();
}
using header1::func; // using func in header1
using namespace header1; // using entire header 1
int main(){
    header2::print();
}

