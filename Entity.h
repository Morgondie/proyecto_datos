#pragma once
#include <string>
#include <random>
#include "ofMain.h"
//#include "GenericArray.h"

class Entity
{
public:
	std::string name;
	int health;

	Entity();

	const char* toString();

	ofVec2f* position;
	ofVec2f* velocity;

	void draw();
};