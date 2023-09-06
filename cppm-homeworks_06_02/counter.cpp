#include <string>
#include <iostream>
#include "counter.h"


//конструктор с вводом от юзера
Counter::Counter(int tik) { this->tik = tik; }

//конструктор по умолчанию
Counter::Counter() { tik = 1; }

//возвращает счетчик
Counter Counter::get_counter() { return tik; }

//принимает символы, и от их значения меняет/не меняет счетчик, возвращает true, пока пользователь не введет "x"
 bool Counter::count(std::string a) {

        if (a == "+") {
            tik++;
            return true;
        }
        if (a == "-") {
            tik--;
            return true;
        }
        if (a == "=") {
            std::cout << tik << std::endl;
            return true;
        }
        if (a == "x" || a == "х") {
            std::cout << "До свидания!" << std::endl;
            return false;
        }
        else {
            std::cout << "Неверная команда!" << std::endl;
            return true;
        }


    }