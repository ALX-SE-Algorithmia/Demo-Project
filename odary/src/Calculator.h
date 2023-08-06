#pragma once

#pragma warning(disable:4996)

#include <gtk/gtk.h>


#define SIZE 10

char input_buffer[100] = { 0 };
char output_buffer[100] = { 0 };

bool clear_buffer = false;
bool add = false;
bool mul = false;
bool divv = false;
bool sub = false;
bool cosine = false;
bool sine = false;
bool tangent = false;

double result = 0.0;
static double num[SIZE];
int count = 0;

typedef struct
{
	GtkWidget* window;
	GtkWidget* grid;
	GtkWidget* button[24];
} calc;

GtkWidget* box;

static void Calculate(GtkButton* button, gpointer data);

static void activate(GtkApplication* app, gpointer user_data)
{
	calc widget;

	widget.window = gtk_application_window_new(app);
	gtk_window_set_position(GTK_WINDOW(widget.window), GTK_WIN_POS_CENTER);
	gtk_window_set_title(GTK_WINDOW(widget.window), "Calculator");
	gtk_window_set_default_size(GTK_WINDOW(widget.window), 400, 400);
	gtk_container_set_border_width(GTK_CONTAINER(widget.window), 10);

	widget.grid = gtk_grid_new();
	gtk_container_add(GTK_CONTAINER(widget.window), widget.grid);

	box = gtk_entry_new();
	gtk_editable_set_editable(GTK_EDITABLE(box), FALSE);

	widget.button[0 ] = gtk_button_new_with_label("0");
	widget.button[1 ] = gtk_button_new_with_label("1");
	widget.button[2 ] = gtk_button_new_with_label("2");
	widget.button[3 ] = gtk_button_new_with_label("3");
	widget.button[4 ] = gtk_button_new_with_label("4");
	widget.button[5 ] = gtk_button_new_with_label("5");
	widget.button[6 ] = gtk_button_new_with_label("6");
	widget.button[7 ] = gtk_button_new_with_label("7");
	widget.button[8 ] = gtk_button_new_with_label("8");
	widget.button[9 ] = gtk_button_new_with_label("9");
	widget.button[10] = gtk_button_new_with_label(".");
	widget.button[11] = gtk_button_new_with_label("+");
	widget.button[12] = gtk_button_new_with_label("-");
	widget.button[13] = gtk_button_new_with_label("x");
	widget.button[14] = gtk_button_new_with_label("/");
	widget.button[15] = gtk_button_new_with_label("C");
	widget.button[16] = gtk_button_new_with_label("=");
	widget.button[17] = gtk_button_new_with_label("Cos");
	widget.button[18] = gtk_button_new_with_label("Sin");
	widget.button[19] = gtk_button_new_with_label("Tan");
	widget.button[20] = gtk_button_new_with_label("(");
	widget.button[21] = gtk_button_new_with_label(")");
	widget.button[22] = gtk_button_new_with_label("sqrt(");
	widget.button[23] = gtk_button_new_with_label("Tan");


	gtk_grid_attach(GTK_GRID(widget.grid), box, 0, 0, 4, 1);

	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[15], 0, 1, 3, 1); // C button :TODO CE after typing
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[14], 3, 1, 1, 1); // / button

	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[7], 0, 2, 1, 1); // 7
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[8], 1, 2, 1, 1); // 8
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[9], 2, 2, 1, 1); // 8
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[13], 3, 2, 1, 1); // x button


	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[4], 0, 3, 1, 1); // 4
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[5], 1, 3, 1, 1); // 5
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[6], 2, 3, 1, 1); // 6
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[12], 3, 3, 1, 1); // -


	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[1], 0, 4, 1, 1); // 1
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[2], 1, 4, 1, 1); // 2
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[3], 2, 4, 1, 1); // 3
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[11], 3, 4, 1, 1); // +


	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[0], 0, 5, 2, 1); // 0
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[10], 2, 5, 1, 1); // .
	gtk_grid_attach(GTK_GRID(widget.grid), widget.button[16], 3, 5, 1, 1); // = button

	g_signal_connect(widget.button[0 ], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[1 ], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[2 ], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[3 ], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[4 ], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[5 ], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[6 ], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[7 ], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[8 ], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[9 ], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[10], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[11], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[12], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[13], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[14], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[15], "clicked", G_CALLBACK(Calculate), NULL);
	g_signal_connect(widget.button[16], "clicked", G_CALLBACK(Calculate), NULL);

	gtk_widget_show_all(widget.window);
}

static void Calculate(GtkButton* button, gpointer data)
{

	const gchar* text = gtk_button_get_label(button);

	if ((strcmp("+", text) == 0) || (strcmp("-", text) == 0) || (strcmp("/", text) == 0) || (strcmp("x", text) == 0) || (strcmp("=", text) == 0) || (strcmp("Cos", text) == 0) || (strcmp("Sin", text) == 0) || (strcmp("Tan", text) == 0))
	{

		num[count] = atof(input_buffer);
		count++;
		clear_buffer = true;

		if (strcmp("+", text) == 0)
			add = true;
		if (strcmp("-", text) == 0)
			sub = true;
		if (strcmp("/", text) == 0)
			divv = true;
		if (strcmp("x", text) == 0)
			mul = true;
		if (strcmp("Cos", text) == 0)
			cosine = true;
		if (strcmp("Sin", text) == 0)
			sine = true;
		if (strcmp("Tan", text) == 0)
			tangent = true;
	}

	if (strcmp("=", text) == 0)
	{
		int x = sizeof(num) / sizeof(num[0]);

		if (add)
		{
			for (int i = 0; i < x; i++)
			{
				result += num[i];
			}
		}

		if (divv)
			result = num[0] / num[1];

		if (sub)
		{
			if (result == 0.0)
				result = num[0] * 2;

			for (int i = 0; i < x; i++)
			{
				result -= num[i];
			}
		}

		if (mul)
			result = num[0] * num[1];

		add = false;
		mul = false;
		divv = false;
		sub = false;

		gtk_entry_set_text(GTK_ENTRY(box), "");
		sprintf(output_buffer, "%.3f", result);
		gtk_entry_set_text(GTK_ENTRY(box), output_buffer);
		result = 0.0;
	}
	else
	{
		if (clear_buffer)
		{
			memset(input_buffer, 0, strlen(input_buffer));
			clear_buffer = false;
		}
		else
			strncat(input_buffer, text, 1);

		strncat(output_buffer, text, 1);
		gtk_entry_set_text(GTK_ENTRY(box), output_buffer);
	}

	if (strcmp("C", text) == 0)
	{
		gtk_entry_set_text(GTK_ENTRY(box), "");
		memset(input_buffer, 0, strlen(input_buffer));
		memset(output_buffer, 0, strlen(output_buffer));

		count = 0;
		int x = sizeof(num) / sizeof(num[0]);

		for (int i = 0; i < x; i++)
		{
			num[i] = 0;
		}

		add = false;
		mul = false;
		divv = false;
		sub = false;
	}
}

