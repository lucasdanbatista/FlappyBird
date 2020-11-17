#include "../headers/Bird.h"

Bird::Bird(State* state) : Asset(state) {
	source.h = 12;
	source.w = 17;
	source.x = 392;

	target.h = 12 * 2;
	target.w = 17 * 2;

	setTargetInitialPosition();

	collisionBox.width = target.w;
	collisionBox.height = target.h;
}

void Bird::setTargetInitialPosition() {
	target.x = 100;
	target.y = 256;
}

void Bird::fly() {
	target.y -= 40;
}

void Bird::fall() {
	target.y += 15;
}

bool Bird::hasCollidedWith(Asset* asset) {
	if (asset->type == "grass") {
		return target.y >= 376;
	}
	else if (asset->type == "bottomPipe") {
		return target.x >= asset->target.x;
	}
	return false;
}