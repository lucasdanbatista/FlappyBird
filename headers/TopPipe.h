#pragma once

#include "Asset.h"

class TopPipe : public Asset {
public:
	TopPipe(State* state);

	virtual void setTargetInitialPosition() override;
};