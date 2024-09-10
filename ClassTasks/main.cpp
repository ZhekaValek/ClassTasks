

#include <iostream>

int main() {
    int x,h,n,res;
    std::cout << "Введите x ";
    std::cin >> x;
    std::cout << "Введите h ";
    std::cin >> h;
    std::cout << "Введите n ";
    std::cin >> n;
    for (int i=0; i<n; i++) {
        
        if(x>=5){
            x=2*x+3;
        }
        else{
            x=x*(x+2);
        }
        std::cout<< x<<std::endl;
        x+=h;
    }
    
    return 0;
}
