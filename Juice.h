#pragma once
#include <iostream>

class FJuice
{
public:
	FJuice(class FFruits* Resource);
	virtual ~FJuice();

	//inline 조사해보기 (디버깅이랑 릴리즈 중에 더 빠른 걸 선택해) / __forceinline (ㅈ까고 내말대로 해) 짧고 간단한 내용은 하드코딩이 더 나을 수도 있음
	inline std::string GetName() const { return Name; }

protected:
	std::string Name;

};

