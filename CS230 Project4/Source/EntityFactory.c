//------------------------------------------------------------------------------
//
// File Name:	Stub.c
// Author(s):	Leo Mauya  0069791
// Project:		Project 0
// Course:		CS230S26
//
// Copyright © 2026 DigiPen (USA) Corporation.
//
//------------------------------------------------------------------------------

#include "stdafx.h"
#include "Stream.h"
#include "Entity.h"
#include "EntityFactory.h"
#include "EntityContainer.h"	


//------------------------------------------------------------------------------
// Private Constants:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Private Structures:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Public Variables:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Private Variables:
//------------------------------------------------------------------------------
static EntityContainer* archetypes = NULL;
//------------------------------------------------------------------------------
// Private Function Declarations:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Public Functions:
//------------------------------------------------------------------------------

Entity* EntityFactoryBuild(const char* filename)
{
	Entity* entity = NULL;
	Stream streamFile;
	const char* token = NULL;

	if (filename)
	{
			if ( archetypes == NULL)
			{
				archetypes = EntityContainerCreate();
			}
			if (EntityContainerFindByName(archetypes, filename))
			{
				Entity* otherEntity = EntityContainerFindByName(archetypes, filename);
				entity = EntityClone(otherEntity);
				return entity;
			}
			else
			{
				char pathName[FILENAME_MAX] = "";
				sprintf_s(pathName, _countof(pathName), "Data/%s.txt", filename);
				streamFile = StreamOpen(pathName);
				if (streamFile)
				{
					token = StreamReadToken(streamFile);
					if (!strncmp(token, "Entity", _countof("Entity")))
					{
						entity = EntityCreate();
						EntityRead(entity, streamFile);
						EntityContainerAddEntity(archetypes, entity);
					}
				}
				StreamClose(&streamFile);
			}
	}
	else
	{
		return NULL;
	}
	return entity;
	
}
void EntityFactoryFreeAll()
{
	if (archetypes)
	{
		EntityContainerFreeAll(archetypes);
	}
}
