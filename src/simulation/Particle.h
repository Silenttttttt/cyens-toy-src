#ifndef PARTICLE_H_
#define PARTICLE_H_

#include <vector>
#include "StructProperty.h"

struct v2f {
	float x;
	float y;
};

struct v2i {
	int x;
	int y;
};

struct chargeVector {
	char c;
	v2f v;
};

struct Particle
{
	int type;
	int life, ctype;
	float x, y, vx, vy;
	float temp;
	float pavg[2];
	int flags;
	int tmp;
	int tmp2;
	int timeDilationTimer;
	int sHeadIndex;
	unsigned int gasCompression;
	unsigned int dcolour;
	v2f vector2f;
	v2i vector2i;
	/** Returns a list of properties, their type and offset within the structure that can be changed
	 by higher-level processes referring to them by name such as Lua or the property tool **/
	static std::vector<StructProperty> const& GetProperties();
};

#endif
