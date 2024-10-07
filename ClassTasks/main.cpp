#include <iostream>
#include <vector>


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

// int find(std::vector<int> array,int number){
// int pos=0;
// int leftLim=0;
// int rightLim=int(array.size())-1;
// do {
// pos=(rightLim-leftLim)/2+leftLim;
// if(number>array[pos]&&pos==int(array.size())-2){
// pos+=1;
// }
// if(array[pos]==number){
// break;
// }
// else{
// 
// if(number>array[pos]){
// leftLim=pos;
// }
// else{
// rightLim=pos;
// }
// }
// 
// } while (true);
// return pos;
// }
// int main(){
// std::vector<int> array={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
// int pos=find(array,array[15]);
// std::cout<<pos;
// }
//


//решать задания в документах сортировка и строки выделенные зеленым цветом
//выполнить за кол-во шагов равное или меньше n, где n -- размер одномерного массива внутри двумерного массива

//void findRowTwoCicles(std::vector<std::vector<int>>& array){
//    int res=-1;
//    for (int i=0; i<array.size(); ++i) {
//        if(array[0][i]==1 && array[i][0]==0){
//            for (int j=1; j<array.size(); ++j) {
//                if(!((array[j][i]==1&&array[i][j]==0)||(i==j))){
//                    break;
//                }
//                if(j==array.size()-1){
//                    res=i;
//                }
//            }
//        }
//    }
//    if(res!=-1){
//        std::cout<<res<<"\n";
//    }else{
//        std::cout<<"нет таких значений\n";
//    }
//    
//    return;
//}
//
//int main(){
//    std::vector<std::vector<int>> array={{2,1,1,1,0},
//                                         {0,2,0,1,1},
//                                         {0,1,2,1,1},
//                                         {0,0,0,0,1},
//                                         {0,0,0,0,2}};
//    
//    ::findRowTwoCicles(array);
//}







#include <iostream>
#include <cstring>

// Функция для статического массива char
void remove_chars_static(char* s1, const char* s2) {
    int j = 0;  // Индекс для нового символа
    int i = 0;  // Индекс для текущего символа

    // Удаляем символы из s1
    while (s1[i] != '\0') {
        bool found = false;
        for (const char* p = s2; *p != '\0'; p++) {
            if (*p == s1[i]) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            s1[j++] = s1[i];  // Добавляем символ в новый массив
        }
        i++;
    }
    s1[j] = '\0';
}

// Функция для std::vector<char>
void remove_chars_vector(std::vector<char>& v1, const std::string& s2) {
    std::vector<char> temp;
    
    for (char c : v1) {
        if (std::find(s2.begin(), s2.end(), c) == s2.end()) {
            temp.push_back(c);
        }
    }
    
    v1.assign(temp.begin(), temp.end());
}

int main() {
    char static_array[] = "Hello World!";
    const char* static_s2 = "l";

    std::vector<char> dynamic_vector(static_array, static_array + strlen(static_array));
    const std::string dynamic_s2 = "lo";

    // Применяем функцию к статическому массиву
    remove_chars_static(static_array, static_s2);

    // Применяем функцию к вектору
    remove_chars_vector(dynamic_vector, dynamic_s2);

    std::cout << "Статический массив после удаления: " << static_array << std::endl;
    std::cout << "Динамический вектор после удаления: ";
    for (char c : dynamic_vector) {
        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}
