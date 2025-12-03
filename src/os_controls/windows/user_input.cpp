#include "user_input.hpp"

#include <ncurses.h>

using biv::os::UserInput;

UserInput biv::os::get_user_input() {
    // Удален лишний вызов initscr()!
    int action = getch();
	if (action == int('a')) {
		return UserInput::MAP_RIGHT;
	} else if (action == int('d')) {
		return UserInput::MAP_LEFT;
	} else if (action == int(' ')) {
		return UserInput::MARIO_JUMP;
	} else if (action == 27) { // 27 = ESC
		return UserInput::EXIT;
	} else {
		return UserInput::NO_INPUT;
	}
}