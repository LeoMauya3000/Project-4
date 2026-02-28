//------------------------------------------------------------------------------
//
// File Name:	BehaviorBullet.c
// Author(s):	Leo Mauya  0069791
// Project:		Project 0
// Course:		CS230S26
//
// Copyright © 2026 DigiPen (USA) Corporation.
//
//------------------------------------------------------------------------------

#include "stdafx.h"
#include "BehaviorBullet.h"
#include "Behavior.h"
#include "DGL.h"
#include "Entity.h"

//------------------------------------------------------------------------------
// Private Constants:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Private Structures:
//------------------------------------------------------------------------------
typedef enum BullletStates
{
	cBulletInvalid = -1,
    cBulletIdle
}BullletStates;

//------------------------------------------------------------------------------
// Public Variables:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Private Variables:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Private Function Declarations:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Public Functions:
//------------------------------------------------------------------------------
static void BehaviorBulletOnInit(Behavior* behavior);
static void BehaviorBulletOnUpdate(Behavior* behavior, float dt);
static void BehaviorBulletOnExit(Behavior* behavior);
static void BehaviorBulletUpdateLifeTimer(Behavior* behavior, float dt);


Behavior* BehaviorBulletCreate(void)
{
	Behavior* bulletCreate = calloc(1, sizeof(Behavior));
	if (bulletCreate)
	{
		bulletCreate->stateCurr = cBulletInvalid;
		bulletCreate->stateNext = cBulletInvalid;
		bulletCreate->onInit =  &BehaviorBulletOnInit;
		bulletCreate->onUpdate = &BehaviorBulletOnUpdate;
		bulletCreate->onExit =  &BehaviorBulletOnExit;
		return bulletCreate;
	}
	return NULL;
}

//------------------------------------------------------------------------------
// Private Functions:
//------------------------------------------------------------------------------
static void BehaviorBulletOnInit(Behavior* behavior)
{
	UNREFERENCED_PARAMETER(behavior);
}
static void BehaviorBulletOnUpdate(Behavior* behavior, float dt)
 {
	if (behavior)
	{
	switch(behavior->stateCurr)
	{
	 case cBulletIdle:
		 BehaviorBulletUpdateLifeTimer(behavior, dt);
		 break;
	}

	}
}
static void BehaviorBulletUpdateLifeTimer(Behavior* behavior, float dt)
{
	if(behavior)
	{
		if (behavior->timer > 0)
		{
			behavior->timer -= dt;
			if (behavior->timer <= 0)
			{
 				EntityDestroy(behavior->parent);
			}
		}

	}	
}
static void BehaviorBulletOnExit(Behavior* behavior)
{
	UNREFERENCED_PARAMETER(behavior);
}

