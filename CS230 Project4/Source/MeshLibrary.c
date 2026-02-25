//------------------------------------------------------------------------------
//
// File Name:	MeshLibrary.c
// Author(s):	Leo Mauya  0069791
// Project:		Project 0
// Course:		CS230S26
//
// Copyright © 2026 DigiPen (USA) Corporation.
//
//------------------------------------------------------------------------------

#include "stdafx.h"
#include "MeshLibrary.h"


//------------------------------------------------------------------------------
// Private Constants:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Private Structures:
//------------------------------------------------------------------------------
typedef struct MeshLibrary
{
	// This variable is not required but could be used for tracking the number
	//   of Mesh objects currently in the list.
	unsigned int meshCount;

	// A list of all currently loaded meshes.
	// This list can be a fixed-length array (minimum size of 10 entries)
	// or a dynamically-sized array, such as a linked list.
	const Mesh* meshList[20];

} MeshLibrary;
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

// Initialize the ...
void MeshLibraryInit()
{


}

// Update the ...
// Params:
//	 dt = Change in time (in seconds) since the last game loop.
void MeshLibraryUpdate(float dt)
{
	/* Tell the compiler that the 'dt' variable is unused. */
	UNREFERENCED_PARAMETER(dt);
}

// Shutdown the ...
void MeshLibraryExit()
{
}
const Mesh* MeshLibraryBuild(const char* meshName)
{
	Mesh* meshmeshmehshshsh = calloc(1, sizeof(MeshLibrary));
	meshName;
	return meshmeshmehshshsh;
	
}
void MeshLibraryFreeAll()
{

}

//------------------------------------------------------------------------------
// Private Functions:
//------------------------------------------------------------------------------

