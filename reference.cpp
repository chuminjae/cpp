// references는 포인터와 비교했을때 memory 할당을 하지 않는다 (normally). 
# include <iostream>
int function(int &a){
    a = 2;
    return a;
}
void main() {
  int a = 3;
  int& b = a;
  int& c = b;
  // not just copying prmitive values but creating reference.
  int& another_a = a; // reference .
  another_a = 5;
  // int &ref = 4; 이거 불가능 since 4 is just a literal.
  const int& ref = 4; // this possible.
  int a = ref; // a = 4;
  /*
  int a, b;
  int& arr[2] = {a, b};
  arr 선언은 주소값이 존재해야하는데 reference는 통상적으로 메모리상 존재하지 않음, 모순 발생.
  */
 // 이건 가능. 하지만 사이즈 명시해야함.
 int arr[3] = {1,2,3};
 int(&ref)[3] = arr;
 int b = function(a);
}
int change_val(int& p){
    p = 3;
    return p;
    // param & p 값 둘다 change
}