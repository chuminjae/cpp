# include <iostream>
int main(){
    int a = 3;
    int& b = a;
    b = 2;
    int* p;
    *p = 3;
    std::cout << *p;
}