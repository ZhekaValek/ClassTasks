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

//int findRowOneCicles(std::vector<std::vector<int>>& array){
//    int m=0;
//    for (int i=0; i<array.size(); ++i) {
//        if(array[m][i]!=0){
//            m=i;
//        }
//    }
//    
//    return m;
//}
//
//int main(){
//    std::vector<std::vector<int>> array={{2,1,1,1,1},
//                                         {0,2,1,1,1},
//                                         {0,0,2,0,1},
//                                         {0,0,1,0,1},
//                                         {0,0,0,0,2}};
//    
//    std::cout<<::findRowOneCicles(array);
//}
//




//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//// Функция для статического массива char
//void remove_chars_static(char* s1, const char* s2) {
//    int k=0;
//    int c=0;
//    int chars[256]={0};
//    while(s2[c]!='\0'){
//        chars[s2[c]]+=1;
//        c++;
//    }
//    c=0;
//    while(s1[c]!='\0'){
//        if(chars[s1[c]]==0){
//            s1[k]=s1[c];
//            ++k;
//            
//        }
//        ++c;
//    }
//    s1[k]='\0';
//    for (int i=0; i<k; ++i) {
//        std::cout<<s1[i];
//    }
//    std::cout<<"\n";
//    
//    
//}
//
//// Функция для вектора<char>
//void remove_chars_vector(std::vector<char>& v1, const char* s2) {
//    v1.erase(std::remove_if(v1.begin(), v1.end(),
//        [&s2](char c) { return std::find(s2, s2 + strlen(s2), c) != s2 + strlen(s2); }),
//        v1.end());
//}
//
//int main() {
//    char static_array[] = "Hello World!";
//    const char* static_s2 = "low";
//
//    std::vector<char> dynamic_vector(static_array, static_array + strlen(static_array));
//    const char* dynamic_s2 = "Hello!";
//
//    // Применяем функцию к статическому массиву
//    
//
//    // Применяем функцию к вектору
//    remove_chars_vector(dynamic_vector, dynamic_s2);
//
//    std::cout << "Статический массив после удаления: ";
//    remove_chars_static(static_array, static_s2);
//    std::cout << "Динамический вектор после удаления: ";
//    for (char c : dynamic_vector) {
//        std::cout << c;
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
//




//
//#include <iostream>
//#include <sstream>
//
//using namespace std;

//Задан текст, в котором между двумя элементами может быть много разных разделителей.
//То же перед текстом и после текста.Необходимо получить список элементов этого
//текста.Например, пусть множество символьных разделителей
//следующее: ‘;’, ‘:’, ’ ‘(пробел), ‘\t’, ‘,’. Рассмотрим текст:
//
//     ,, :;abc ;;, as ds, 77;,:
//
//Тогда список элементов этого текста следующий:
//
//“abc”, “as”, “ds”, “77”
//
//Один из способов решения задачи(обратите внимание, что среди разделителей есть пробел;
//если бы пробела не было среди разделителей, то способ решения был бы другой):
//
// -посимвольно просматриваем текст и заменяем разделитель на пробел;
// -решаем задачу, для случая, когда разделителем является пробел.

//int main()
//  {
//   char s[80] = ",,:;abc ;;, as ds, 77;,:";
//   for (auto& x: s)
//     {
//      switch (x)
//        {case ';':
//         case ':':
//         case '\t':
//         case ',':
//          x = ' ';
//          break;
//        }
//     }
//   cout << "\"" <<  &s[0] << "\"" << endl;
//   istringstream str(s);
//   string word;
//    string row;
//    str>>word;
//    row+=word;
//    while (str >> word){
//        row+=" "+word;
//        
//    }
//    std::cout<<row<<endl;
//
//   // Пусть теперь пробел не является разделителем. В этом случае для текста
//   //   ,, :;abc ;;, as ds, 77;,:
//   // результатом выделения слов будет следующий список слов:
//   //   " ", "abc ", " as ds", " 77"
//
//   // 1. Заменяем разделитель на какой-то определенный разделитель, например ';'
//   // 2. Решаем задачу для случая, когда разделителем является ';'
//   {
//    char s[80] = ",, :;abc ;;, as ds, 77;,:";
//    for (auto& x : s)
//      {
//       switch (x)
//         {
//          case ';':
//          case ':':
//          case '\t':
//          case ',':
//            x = ';';
//            break;
//         }
//      }
//    cout << "\"" << &s[0] << "\"" << "\n" << endl;
//    istringstream str(s);
//    string word;
//    getline(str, word, ';');
//    while (getline(str, word, ';'))
//      {if (!word.empty())
//         cout << "\"" << word << "\"" << endl;
//      }
//   }
//   return 0;
//  }
//




#include <iostream>

int main(){
    
    int k;
    std::cout<<"Введите k:";
    std::cin>>k;
    int a[k];
    for (int i=0; i<k; i++) {
        a[i]=i+1;
    }
    int n;
    std::cout<<"Введите n:";
    std::cin>>n;
    
    int pos[n];
    for (int i=0; i<n; i++) {
        pos[i]=i;
    }
    
    bool changed=false;
    do{
        changed=false;
        for (int i=0; i<n; i++) {
            std::cout<<a[pos[i]]<<" ";
        }
        std::cout<<"\n";
        for (int i=1; i<n; i++) {
            if(pos[i]-pos[i-1]==2){
                pos[i-1]++;
                changed=true;
            }
        }
        if(!changed){
            pos[n-1]++;
        }
    }while(pos[n-1]<k);
    
    return 0;
}
    




