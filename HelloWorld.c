// Первая программа на языке Си
// Комментарии(они вырезаются из конечной программы
/*
    И это тоже комментарий!
*/
// Подключение библиотеки stdio.h для ввода/вывода, а также для использования printf и getchar
#include <stdio.h> 
//Создание функции main() которая возвращает число
// Она также является телом программы
//Функции содержат весь код в {}
//В данном примере функция main ничего не принимает, но обязанна вернуть число
int main(){
// Вывод фразы Hello, World! через функцию printf
    printf("Hello, World!");
// Функция getchar используемая для ввода строк нужна в данном случае для предотвращения закрытия консоли 
    getchar();
// Конец программы с кодом 0, функция main вернула 0 
    return 0;
//Конец функции main
}
