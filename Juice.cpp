#include "Juice.h"
#include "Fruits.h"
#include <iostream>
FJuice::FJuice(FFruits* Resource)
{
	Name = Resource->GetName();

	std::cout << Name << "�ֽ��� ����� �����ϴ�" << std::endl;
}

FJuice::~FJuice()
{
}
