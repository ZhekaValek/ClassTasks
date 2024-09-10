#include <iostream>

int main(){
    std::cout <<"Введите N";
    int N;
    std::cin>>N;
    for (int i=1; i<=N; i++) {
        std::cout <<i<<","<<i*i<<"\n";
    }
    return 0;
}
