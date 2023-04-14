#include "Mixer.h"
#include "Pineapple.h"
#include "Apple.h"
#include "Orange.h"
#include "Fruits.h"
#include "Juice.h"
#include <iostream>

using namespace std;

FMixer::FMixer()
{
}

FMixer::~FMixer()
{
}

FJuice* FMixer::MakeJuice(FFruits* Resource)
{
	FJuice* NewJuice = new FJuice(Resource);
	
	delete Resource;

	return NewJuice;

}


