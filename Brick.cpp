#include "Brick.h"

int Brick::GetBreakCounter() {
	return Brick::breakCounter;
}

void Brick::BreakBrick() {
	if (Brick::breakCounter > 0) {
		Brick::breakCounter--;
	}
	return;
}

float Brick::GetBottomY() {
	return Brick::bottomY;
}

float Brick::GetLeftX() {
	return Brick::leftX;
}

float Brick::GetTopY() {
	return Brick::topY;
}

float Brick::GetRightX() {
	return Brick::rightX;
}

void Brick::SetLeftX(float newLeftX) {
	Brick::leftX = newLeftX;
	return;
}

void Brick::SetTopY(float newTopY) {
	Brick::topY = newTopY;
	return;
}

void Brick::SetRightX(float newRightX) {
	Brick::rightX = newRightX;
	return;
}

void Brick::SetBottomY(float newBottomY) {
	Brick::bottomY = newBottomY;
	return;
}
