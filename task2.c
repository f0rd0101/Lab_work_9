#include <stdio.h>

int main(){    //Початок функції
    float num1 = 0., num2 = 0.; //Задаємо змінні
    printf("Enter the first number:"); //Просимо користувача ввести перше число
    scanf("%f",&num1); // Зберігаємо число у форматі float у змінну num1
    printf("Enter the second number:");  //Просимо користувача ввести друге число
    scanf("%f",&num2);  // Зберігаємо число у форматі float у змінну num2
    float plus_result,minus_result,mult_result,div_result; // задаємо тип даних для операцій 
    //---------Операції над отриманими числами-----------------
    plus_result = num1 + num2; 
    minus_result = num1 - num2; 
    mult_result = num1 * num2;
    div_result = num1 / num2;
       //---------Виводимо результат-----------------
    printf("Plus: %.2f\nMinus: %.2f\nMult: %.2f\nDiv: %.2f\n", plus_result, minus_result, mult_result, div_result);
    return 0; //Кінець функції
}