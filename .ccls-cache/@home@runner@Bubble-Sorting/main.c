#include <stdio.h>

int main(void) {
  int digitals[10]; // объявили массив на 10 ячеек
 
  printf("Введите 10 чисел для заполнения массива: \n");
 
  for (int i = 0; i < 10; i++) {
    scanf("%d", &digitals[i]); // "читаем" элементы в массив
  }
 
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 9; j++) {
      if (digitals[j] < digitals[j + 1]) {
        int b = digitals[j]; // создали дополнительную переменную
        digitals[j] = digitals[j + 1]; // меняем местами
        digitals[j + 1] = b; // значения элементов
      }
    }
  }
 
  printf("Массив в отсортированном виде: \n");
 
  for (int i = 0; i < 10; i++) {
    printf("%d", digitals[i]);// выводим элементы массива
    printf(" ");
  }

  return 0;
}