#include <stdio.h>


int main(){  // Початок функції
     float C = 0. ,F=0.; // Задаємо майбутні змінні
     printf("Enter the F value -"); // повідомлення про потрібність введеня значення F
     scanf("%f",&F);  // Збереження даних типу float у змінну  F
    // -----------------------РОЗРАХУНКИ-----------------
     C = (F - 32)* 5/9; 
     F = 0;    // Скидаємо значення F введене користувачем раніше.
     F = C * 9/5; 
      //---------Виводимо результат-----------------
     printf("Temperature in celsius equals: %f\n",C);  
     printf("Temperature in Fahrenheit equals: %f\n",F);
     return 0;  // Кінець функції
}