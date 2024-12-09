# include <iostream>
/*
class pokemon{
    private:
        std::string name;
        int hp;
        int age;
        int AD;
    public:
        void create_pokemon(){
            std::cout << "name of pokemon? " << std::endl;
            std::cin >> this->name;
            std::cout << "age of pokemon? " << age << std::endl;
            std::cin >> this->age;
            std::cout << "hp of pokemon? " << hp << std::endl;
            std::cin >> this->hp;
            std::cout << "AD of pokemon? " << AD << std::endl;
            std::cin >> this->AD;
        }
        void show_status(){
        std::cout << "name of pokemon is " << name << std::endl;
        std::cout << "age of pokemon is " << age << std::endl;
        std::cout << "hp of pokemon is " << hp << std::endl;
        std::cout << "AD of pokemon is " << AD << std::endl;
        }
        void kill_pokemon(){
        hp = 0;
        std::cout << name << " is dead" << std::endl;
        }
};
void main(){
    int number;
    std::cout << "enter the number of pokemons " << std::endl;
    std::cin >> number;
    pokemon arr[number];
    for(int i = 0; i < number; i = i + 1){
        arr[i].create_pokemon();
    }
    while(0){
        int menu;
        int choice;
        std:: cout << "1. show status" << std:: endl;
        std:: cout << "2. kill pokemon" << std:: endl;
        std:: cout << "3. Exit" << std:: endl;
        std::cin >> menu;
        std::cout << "plug in the code of the pokemon" << std::endl;
        std:: cin >> choice;
        pokemon target = arr[choice];
        switch(menu){
            case 1:
                std::cout << "show status";
                target.show_status();
            case 2:
                std::cout << "kill pokemon";
                target.kill_pokemon();
            case 3:
                break;
        }
    }
} */
class Date{
    int year;
    int month;
    int day;
    public:
        int check_date(){
            int arr[13] = {0, 31, 30, 31, 30, 31,30,31,31,30,31,30,31};
            return arr[month];           
        }
        int check_month(){
            while(month > 12){
                month = month - 12;
                year = year + 1;
            }
        }
        void set_date(int year, int month, int day){
            this->year = year;
            this->month = month;
            this->day = day;
        }
        void add_day(int inc){
            int c_day = check_date();
            day = day + inc;
            while(day > c_day){
                day = day - c_day;
                month = month + 1;
                check_month();
                c_day = check_date();
            }
        }
        void add_month(int inc){
            month = month + inc;
            check_month();
        }
        void add_year(int inc){
            year = year + inc;
        }
        void show_date(){
            std::cout << "Currenty it is " << year << "/" << month << "/" << day << "." << std::endl;
        }
};
int main(){
    Date date;
    date.set_date(2024, 11, 12);
    date.add_day(400);
    date.show_date();
    date.add_year(100);
    date.show_date();
    date.add_month(14);
    date.show_date();
    return 0;
}