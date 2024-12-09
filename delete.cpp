# include <iostream>
int main(){
    int *a = new int;
    *a = 10;
    std::cout << *a << std::endl;
    delete a;
    int arr_size;
    std::cin >> arr_size;
    int *arr = new int[arr_size];
    for(int i = 0; i < arr_size; i = i + 1){
        std::cin >> arr[i];
    }
    for(int i = 0; i < arr_size; i = i + 1){
        std::cout << i << "th element of the list:" << arr[i] << std::endl; 
    }
    delete [] arr;
    return 0;
}