#pragma once
class FMixer 
{
public:
	FMixer();
	virtual ~FMixer();

	//무식하게 하면
	class FJuice* MakeJuice(class FFruits* Resource);               // const 가 붙으면 내가 넣어준 정보(Resource)를 바꾸지 않겠다는 뜻, 괄호 뒤에 const 가 붙으면 클래스 내부의 멤버 함수를 바꾸지 않겠다는 뜻
	// OutResource 는 출력을 바꾸겠다는 뜻, 하지만 & 쓰는게 더 나음
	//void MakeJuice(class FOrange* Resource);
	//void MakeJuice(class FPineapple* Resource);
	//cpp 에는 각 함수 정의마다 ~~주스가 만들어 졌습니다 cout 으로 적으면 됨



};

