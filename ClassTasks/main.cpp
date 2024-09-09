//
//  main.cpp
//  ClassTasks
//
//  Created by Женя Валек on 09.09.2024.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int x,h,n,res;
    std::cout << "Введите x ";
    std::cin >> x;
    std::cout << "Введите h ";
    std::cin >> h;
    std::cout << "Введите n ";
    std::cin >> n;
    for (int i=0; i<n; i++) {
        res=x+(h*i);
        if(res>=5){
            res=2*res+3;
        }
        else{
            res=x*(x+2);
        }
        std::cout<< res<<std::endl;
    }
    
    return 0;
}
