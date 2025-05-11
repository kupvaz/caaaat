#include <curses.h>

WINDOW* createe(int w, int l, int s1, int s2) {
	WINDOW* winn;
	winn = newwin(w, l, s1, s2);
	wborder(winn, '+', '-', '-', '-', '-', '-', '-', '-');
	wrefresh(winn);
	return winn;
}


int main(int argc, char* argv[])
{
	WINDOW* winn;
	initscr();
	refresh();
	winn = createe(10, 15, 5, 5);
	getch();
	delwin(winn);
	endwin();
}