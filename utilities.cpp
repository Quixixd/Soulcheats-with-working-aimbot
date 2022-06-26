#include <time.h>
#include "utilities.h"
#include <chrono>
#include <ctime>   
#include "imgui/imgui.h"
#include "Logger.h"
#include <thread>
// by Quixi
int utilities::getFPS()
{
	return ImGui::GetIO().Framerate;
};