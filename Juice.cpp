#include "Juice.h"
#include "Fruits.h"
#include <iostream>
FJuice::FJuice(FFruits* Resource)
{
	Name = Resource->GetName();

	std::cout << Name << "주스가 만들어 졌습니다" << std::endl;
}

FJuice::~FJuice()
{
}
