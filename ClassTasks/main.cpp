#include <iostream>


int main()
{
    /*double n,x,s,d;
    std::cout<<"Введите n: ";
    std::cin>>n;
    std::cout<<"Введите x: ";
    std::cin>>x;
    s=0;
    d=x;
    for (int i=1; i<=n; ++i) {
        d=d*((-1)*x*x*(1.5-i))/(2*i*(2*i-1));
        s=s+d;
        std::cout<<d;
    }
    std::cout<<"Ответ: "<<s<<"\n";*/
    
    
    double f0,f1,f2,f,n,s1,s2,x,per;
    per=1;
    std::cout<<"Введите f0,f1,f2,n,x:";
    std::cin>>f0>>f1>>f2>>n>>x;
    if(n==0){
        std::cout<<f0<<" "<<f0<<"\n";
    }
    else if(n==1){
        std::cout<<f0*x+f1<<" "<<f0+f1*x<<"\n";
    }
    else if(n==2){
        std::cout<<f0*x*x+f1*x+f2<<" "<<f0+f1*x+f2*x*x<<"\n";
    }
    else{
        s1=f0*x*x+f1*x+f2;
        s2=f0/x/x+f1/x+f2;
        per*=x*x;
        for (int i=3; i<=n; ++i) {
            f=3*f2/f1+4*f0;
            f0=f1;
            f1=f2;
            f2=f;
            s1=s1*x+f2;
            per*=x;
            s2=s2/x+f2;
            
        }
        std::cout<<s1<<"  "<<s2*per<<"\n";}
    return 0;
}
