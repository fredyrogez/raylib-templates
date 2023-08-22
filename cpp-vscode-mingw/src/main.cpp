/*
  Raylib C++ MinGW64 Template
  
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
#include "game.h"

int main(int argc, char *argv[])
{
    const int screenWidth = 640;
    const int screenHeight = 480;

    InitWindow(screenWidth, screenHeight, "Raylib Template");

    SetTargetFPS(60);

    // Game Loop
    while (!WindowShouldClose())
    {
        // Update
        // ...

        // Draw
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText(IT_WORKS, 140, 200, 64, RED);

        EndDrawing();
    }
    
    CloseWindow();   

    return 0;
}
