#include "raylib.h"

int main(void) {


	InitWindow(800, 450, "Flashcardo");
	SetTargetFPS(60);

	while(!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(WHITE);
			DrawText("TEST", 400, 225, 20, BLACK);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
