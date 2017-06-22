#pragma once


class Brick {
public:
	int GetBreakCounter();
	void BreakBrick();
	float GetBottomY();
	float GetLeftX();
	float GetTopY();
	float GetRightX();
	void SetLeftX(float newLeftX);
	void SetTopY(float newTopY);
	void SetRightX(float newRightX);
	void SetBottomY(float newBottomY);
private:
	int breakCounter = 3;
	float bottomY;
	float leftX;
	float topY;
	float rightX;
};
