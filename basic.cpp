# include <iostream>
int main(){
    for(int i = 0; i < 10; i = i + 1){
        std::cout << i << std::endl;
    }
    int j, sum = 0;
    int user_input;
    while(j <= 10){
        std::cout << j << std::endl;
        j = j + 1;
        // j ++;
    }
    if(sum == 0){
        std:: cout << "1";
    }
    else{
        std::cout << "0";
    }
    std::cin >> user_input;
    switch(user_input){
        case1:
            std::cout  << "1";
            break;
        case2:
            std::cout << "2";
            break;
        case3:
            std::cout << "3";
            break;  
        default: 
            std::cout << "default";
            break;
    }
}