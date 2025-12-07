#include "console_flying_enemy.hpp"

using biv::ConsoleFlyingEnemy;

ConsoleFlyingEnemy::ConsoleFlyingEnemy(const Coord& top_left, const int width, const int height) 
    : Enemy(top_left, width, height), ConsoleEnemy(top_left, width, height), FlyingEnemy(top_left, width, height) {}

char ConsoleFlyingEnemy::get_brush() const noexcept {
    return 'f';
}