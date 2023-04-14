#include <iostream>
#include "Mixer.h"
#include "Pineapple.h"
#include "Apple.h"
#include "Orange.h"
#include "Juice.h"
#include "Fruits.h"

using namespace std;

int main()
{
	FMixer* Mix = new FMixer();
	FApple* Apple = new FApple();
	FPineapple* Pineapple = new FPineapple();
	FOrange* Orange = new FOrange();
	//FApple* Apple = new FApple();
	//Mix->MakeJuice(Apple);

	FJuice* PineAppleJuice = Mix->MakeJuice(Pineapple);


	delete Mix;
	delete PineAppleJuice;

	return 0;
}