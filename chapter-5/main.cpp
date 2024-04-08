#include <iostream>

int main(){
    int a=100;
    int *p=&a;
    std::cout << sizeof(p) << std::endl;
 
    const char* string = "hello";
    for(int i=0;i<5;i++){
        const char c=string[i];
        std::cout << c << std::endl;
    }
    std::cin.get();
}