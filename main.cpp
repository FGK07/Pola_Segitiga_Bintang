#include <iostream>

int main(){

    int a;

    std::cout << "Masukkan Angka:";
    std::cin>>a;

    for (int i = 1; i <= a ; i++)
    {
        for (int b = 1; b <= i; b++)
        {
            std::cout << "*";
        }
        
        std::cout<<std::endl;
    }
    
}