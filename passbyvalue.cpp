#include <iostream>

void swap(std::string &x, std::string &y);

int main(){

    std::string x = "Cool Food";
    std::string y = "Fast Food";

    swap(x,y);

    std::cout << x << '\n';
    std::cout << y << '\n';
    
}
void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
    
    
    

}