#pragma once
class FMixer 
{
public:
	FMixer();
	virtual ~FMixer();

	//�����ϰ� �ϸ�
	class FJuice* MakeJuice(class FFruits* Resource);               // const �� ������ ���� �־��� ����(Resource)�� �ٲ��� �ʰڴٴ� ��, ��ȣ �ڿ� const �� ������ Ŭ���� ������ ��� �Լ��� �ٲ��� �ʰڴٴ� ��
	// OutResource �� ����� �ٲٰڴٴ� ��, ������ & ���°� �� ����
	//void MakeJuice(class FOrange* Resource);
	//void MakeJuice(class FPineapple* Resource);
	//cpp ���� �� �Լ� ���Ǹ��� ~~�ֽ��� ����� �����ϴ� cout ���� ������ ��



};

