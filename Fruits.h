#pragma once
class FFruits
{
public:
	FFruits();
	virtual ~FFruits();

	//accessor Á¢±ÙÀÚ 
	//std::string GetName();
	inline std::string GetName() const { return Name; }

protected:
	std::string Name;

};

