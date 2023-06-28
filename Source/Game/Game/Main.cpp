#include <iostream>
#include "../../Engine/Core/Random.h"
#include "../../Engine/Core/fileIO.h"
using namespace std;

int main()
{
	cout << kda::getFilePath() << endl;

	kda::seedRandom((unsigned int)time(nullptr));
	for (int i = 0; i < 10; i++)
	{
	cout << kda::random(69,69) << endl;
	}
}