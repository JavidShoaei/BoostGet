#pragma once
#ifndef H_TASK
#define H_TASK

#include "../def/syntax.h"

/* Base class for any kind of task */
INTERFACE(Task) {
public:
	virtual long id() abstract;
};

#endif