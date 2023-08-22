/*
  Raylib C++ Visual Studio 2022 Template

  Copyright (C) 2022 Fredy Rogez (@FredyRogez)

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
	 claim that you wrote the original software. If you use this software
	 in a product, an acknowledgment in the product documentation would be
	 appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not
	 be misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#include "raylib.h"
#define RAYGUI_IMPLEMENTATION

int main(int argc, char* argv[])
{
	#ifdef _DEBUG
	SetTraceLogLevel(LOG_DEBUG);
	#endif

	InitWindow(800, 600, "Raylib Template");
	SetTargetFPS(60);		
	TraceLog(LOG_DEBUG, "START");

	while (!WindowShouldClose())
	{
		// Updates					
		// ...
		

		// Draws
		BeginDrawing();

		ClearBackground(BLACK);
		
		EndDrawing();
	}

	CloseWindow();
	return 0;
}