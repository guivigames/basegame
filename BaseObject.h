#pragma once
#include <SDL.h>
#include "GameMath.h"


class BaseObject
{
public:
	virtual void Draw(SDL_Renderer* renderer) = 0;
	virtual void Update() = 0;
	virtual void Clean() = 0;
private:
	vec2i m_pos;
	vec2i m_size;
	vec2i m_vel;
};

