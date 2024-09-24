#include <iostream>

double polinom2(double f0,double f1,double f2,double n, double x){
    double f,s2,per;
    s2=f0+f1*x+f2*x*x;
    per=x*x;
    for (int i=3; i<=n; ++i) {
        per*=x;
        f=3*f2/f1+4*f0;
        f0=f1;
        f1=f2;
        f2=f;
        s2+=f2*per;
    }
    return s2;
}
double polinom1(double f0,double f1,double f2,double n, double x){
    double s1,f;
            s1=f0*x*x+f1*x+f2;
            for (int i=3; i<=n; ++i) {
                f=3*f2/f1+4*f0;
                f0=f1;
                f1=f2;
                f2=f;
                s1=s1*x+f2;
                
                
            }
            return s1;
            
        }
int main()
{
    
    
    double f0,f1,f2,f,n,s1,s2,x,per,p1,p2;
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
        p2=polinom2(f0, f1, f2, n, x);
        p1=polinom1(f0, f1, f2, n, x);
        std::cout<<p1<<" ";
        std::cout<<p2<<"\n";
    }
    return 0;
}

