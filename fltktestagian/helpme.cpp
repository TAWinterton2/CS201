#include<FL/Fl.h>
#include<FL/Fl_Box.H>
#include<FL/Fl_Window.H>
#pragma comment(lib, "fltk.lib")
#pragma comment(lib, "commctl32.lib")




int main() {
	Fl_Window window(200, 200, "Window Title");
	Fl_Box box(0, 0, 200, 200, "Hey, I mean, Hello World!");
	window.show();
	return Fl::run();
}