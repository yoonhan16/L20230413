#pragma once
#include <iostream>

class FJuice
{
public:
	FJuice(class FFruits* Resource);
	virtual ~FJuice();

	//inline �����غ��� (������̶� ������ �߿� �� ���� �� ������) / __forceinline (����� ������� ��) ª�� ������ ������ �ϵ��ڵ��� �� ���� ���� ����
	inline std::string GetName() const { return Name; }

protected:
	std::string Name;

};

