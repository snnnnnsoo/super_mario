#include "os_control_settings.hpp"
#include <ncurses.h>

void biv::os::init_settings() {

    initscr();          // Инициализация ncurses
    curs_set(0);        // Скрыть курсор
    noecho();           // Отключить автоматический вывод вводимых символов
    nodelay(stdscr, TRUE);
    scrollok(stdscr, FALSE);  // ОТКЛЮЧИТЬ ПРОКРУТКУ
  
}

void biv::os::cleanup_screen(){
    endwin();
}

void biv::os::set_cursor_start_position() {
    move(0, 0); // Установка курсора в верхний левый угол (0, 0)
}