#include "counter.h"
#include <string>
#include <iostream>

Counter get_and_check_answer() {

    bool flag = false;
    std::string answer;
    //создаем счетчик по умолчанию заранее
    Counter tmp;

    //крутим, пока юзер не введет правильно ответ (да/нет)
    while (!flag) {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::getline(std::cin, answer);
        //если да, то создаем экземпляр со значением юзера и записываем в значение ранее созданного экземпляра (tmp)
        //и прекращаем цикл
        if (answer == "да" || answer == "Да" || answer == "ДА" || answer == "дА") {
            int numb;
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> numb;
            std::cin.ignore();
            Counter counter(numb);
            tmp = counter;
            flag = true;
        }
        //если нет, не меняем ранее созданный счетчик и прекращаем цикл
        else if (answer == "нет" || answer == "Нет" || answer == "НЕТ" || answer == "НЕт" || answer == "нЕТ" || answer == "неТ" || answer == "НеТ") {
            std::cout << "Значение счетчика установлено по умолчанию на \"1\"" << std::endl;
            flag = true;

        }
        //не получили правильного ответа -> возвращаемся в начало цикла
        else {
            std::cout << "Неверный ввод!" << std::endl;
            flag = false;
        }

    }
    return tmp;
}