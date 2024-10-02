#include <iostream>

//Домашнее задание с нахождением минимального положительного
/*double findMinPol(double a[]){
    int per=0;
    
    for (int i=0; i<=sizeof(a); ++i) {
        if(a[i]>0){
            per=a[i];
            break;
        }
    }
    for (int i=0; i<=sizeof(a); ++i) {
        if(a[i]<per&&a[i]>0){
            per=a[i];
        }
    }
    return per;
    
}


int main(){
    double a[]={10.0,-10.0,0.000000001,-2.0,-3.0,-4.0,-5.0,-6.0,-7.0,-8.0,-9.0,-10.0};
    int otv=findMinPol(a);
    if(otv!=0){
        std::cout<<otv<<"\n";}
    else{
        std::cout<<"нет положительных значений\n";
    }
    return 0;
}*/




//Программа нахождения(бинарный поиск)
/*
 int find(std::vector<int> array,int number){
 int pos=0;
 int leftLim=0;
 int rightLim=int(array.size())-1;
 do {
 pos=(rightLim-leftLim)/2+leftLim;
 if(number>array[pos]&&pos==int(array.size())-2){
 pos+=1;
 }
 if(array[pos]==number){
 break;
 }
 else{
 
 if(number>array[pos]){
 leftLim=pos;
 }
 else{
 rightLim=pos;
 }
 }
 
 } while (true);
 return pos;
 }
 int main(){
 std::vector<int> array={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
 int pos=find(array,array[15]);
 std::cout<<pos;
 }
 */


//решать задания в документах сортировка и строки выделенные зеленым цветом
//выполнить за кол-во шагов равное или меньше n, где n -- размер одномерного массива внутри двумерного массива


static void findRow(std::vector<std::vector<int>>& array){
    
    for (int i=0; i<array.size(); ++i) {
        std::vector<int> checker(array.size());
        checker[i]=array[i][i];
        if(checker==array[i]){
            std::cout<<i<<"\n";
        }
    }
    return;
}
int main(){
    std::vector<std::vector<int>> array={{2,1,1,1,1},
                                         {0,2,0,1,1},
                                         {0,1,2,1,1},
                                         {0,0,0,0,1},
                                         {0,0,0,0,2}};
    
    ::findRow(array);
    
}



