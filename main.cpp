#include <iostream>
#include <vector>

int main() {
  int vecSize = 0;
  int number = 0, delNumber = 0;
  
  while(vecSize == 0){
    std::cout << "Введите количество элементов: ";
    std::cin >> vecSize;

    if (vecSize == 0){
      std::cout << "Вектор не может быть пуст!\n";
    }
  }
  std::vector<int> vec(vecSize);
  std::vector<int> newVec;

  for (int i = 0; i < vec.size(); ++i){
    std::cout << "vector[" << i << "] = ";
    std::cin >> number;
    vec[i] = number;
  }

  std::cout << "Число, которое необходимо удалить: ";
  std::cin >> delNumber;
  
  for (int i = 0; i < vec.size(); i++){
    if (vec[i] != delNumber){
      newVec.push_back(vec[i]);
    }
  }
  
  if (newVec.empty()){
    std::cout << "Вектор пуст!\n";
  }
  else{
    for (int i = 0; i < newVec.size(); ++i){
      std::cout << newVec[i] << " ";
    }
  }
}

/*
Задача 1. 
Пользователь вводит с клавиатуры число n, далее -- n целых чисел, которые нужно записать в вектор.
Потом пользователь вводит ещё одно значение. Нужно удалить из вектора все элементы, которые равны данному значению, и вывести итоговое состояние вектора

Пример:
Пользователь ввёл 5, потом числа 1, 3, 3, 5, 1. И потом -- число 3. Необходимо, чтобы в векторе остались числа 1, 5, 1, которые надо вывести их на экран. 
*/