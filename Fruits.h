#pragma once
class FFruits
{
public:
	FFruits();
	virtual ~FFruits();

	//accessor ������ 
	//std::string GetName();
	inline std::string GetName() const { return Name; }

protected:
	std::string Name;

};

