#pragma once
#include <string>



class Counter { 
private: int tik;
public: 
	Counter(int tik);
	Counter();
	Counter get_counter();
	bool count(std::string a);
};

Counter get_and_check_answer();