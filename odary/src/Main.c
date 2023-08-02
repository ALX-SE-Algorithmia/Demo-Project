#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#ifdef _WIN32
	#include <Windows.h>
#endif

#include "Calculator.h"




int main(int argc, char** argv)
{
	#ifdef _WIN32
		FreeConsole(); // Code to close the command line interface that pops up with the application.
	#endif


	GtkApplication* app = NULL;

	gtk_init(&argc, &argv);

	int8_t status = -1;
	app = gtk_application_new("org.algorithmia.calculator", G_APPLICATION_DEFAULT_FLAGS);

	g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
	status = g_application_run(G_APPLICATION(app), argc, argv);
	g_object_unref(app);

	free(app);

	return status;
}
