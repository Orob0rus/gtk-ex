#include "window.h"
#include <gtkmm/application.h>

int main(int argc, char* argv[]) {
	auto app = Gtk::Application::create(argc, argv, "com.github.dbot5");
	Window window;
	return app->run(window);
}
