//------------------------------------------------------------------------------
//
// File Name:	AsteriodScene.c
// Author(s):	Leo Mauya  0069791
// Project:		Project 0
// Course:		CS230S26
//
// Copyright © 2026 DigiPen (USA) Corporation.
//
//------------------------------------------------------------------------------

#include "stdafx.h"

#include "Scene.h"
#include "SceneSystem.h"
#include "AsteriodScene.h"

//------------------------------------------------------------------------------
// Private Constants:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Private Structures:
//------------------------------------------------------------------------------

typedef struct AsteriodScene
{
	// WARNING: The base class must always be included first.
	Scene	base;

	// Add any scene-specific variables second.

} AsteriodScene;

//------------------------------------------------------------------------------
// Public Variables:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Private Variables:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Private Function Declarations:
//------------------------------------------------------------------------------

static void AsteriodSceneLoad(void);
static void AsteriodSceneInit(void);
static void AsteriodSceneUpdate(float dt);
static void AsteriodSceneExit(void);
static void AsteriodSceneUnload(void);
static void AsteriodSceneRender(void);

//------------------------------------------------------------------------------
// Instance Variable:
//------------------------------------------------------------------------------

static AsteriodScene instance =
{
	// Initialize the base structure:
	{ "Stub", AsteriodSceneLoad, AsteriodSceneInit, AsteriodSceneUpdate, AsteriodSceneRender, AsteriodSceneExit, AsteriodSceneUnload },

	// Initialize any scene-specific variables:
};

//------------------------------------------------------------------------------
// Public Functions:
//------------------------------------------------------------------------------

// Get the instance of the Stub Scene.
// Returns:
//	 Pointer to the base Scene structure for this derived Scene.
const Scene* AsteriodSceneGetInstance(void)
{
	return &(instance.base);
}

//------------------------------------------------------------------------------
// Private Functions:
//------------------------------------------------------------------------------

// Load any resources used by the scene.
static void AsteriodSceneLoad(void)
{
}

// Initialize the entities and variables used by the scene.
static void AsteriodSceneInit()
{
}

// Update the the variables used by the scene.
// Params:
//	 dt = Change in time (in seconds) since the last game loop.
static void AsteriodSceneUpdate(float dt)
{
	// Tell the compiler that the 'dt' variable is unused.
	UNREFERENCED_PARAMETER(dt);

	// NOTE: This call causes the engine to exit immediately.  Make sure to remove
	//   it when you are ready to test out a new scene.
	SceneSystemSetNext(NULL);
}

// Render any objects associated with the scene.
void AsteriodSceneRender(void)
{
}

// Free any objects associated with the scene.
static void AsteriodSceneExit()
{
}

// Unload any resources used by the scene.
static void AsteriodSceneUnload(void)
{
}

