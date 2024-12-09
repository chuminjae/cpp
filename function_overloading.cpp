// 1. 자신과 일치하는 타입을 확인
// 2. Char, unsigned char, short 는 int 로 변환된다.
// 2. Unsigned short 는 int 의 크기에 따라 int 혹은 unsigned int 로 변환된다.
// 2. Float 은 double 로 변환된다.
// 2. Enum 은 int 로 변환된다.
class date{
    int year;
    int day;
    int month;
    public:
        void set_date(int year, int month, int date);
        void add_ay();
        void add_month();
        void add_year();
        // basic constructor.
        date(int year, int month, int day){
            this->year = year;
            this->month = month;
            this->day = day;
        }
        // constructor overloading.
        date(int year, int month){
            this->year = year;
            this->month = month;
        }
        // date() = default;
};
// 이거 가능
void date:: set_date(int year, int month, int day){
    this->year = year;
    this->month = month;
    this->day = day;
}
int main(){
    date day(2011, 12, 21); // implicit
    date day = date(2012, 12,12); // explicit
}