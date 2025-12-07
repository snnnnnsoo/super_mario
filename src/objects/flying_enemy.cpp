#include "flying_enemy.hpp"

#include "map_movable.hpp"

using biv::FlyingEnemy;
FlyingEnemy::FlyingEnemy(const Coord& top_left, const int width, const int height) 
    : Enemy(top_left, width, height) {
    flying_range = 100; 
    flight_distance = 0;
    vspeed = 0;
    hspeed = 0.2;
}

void FlyingEnemy::move_horizontally() noexcept{
    top_left.x += hspeed;
    flight_distance += 1;
    if (flight_distance > flying_range){
        flight_distance = 0;
        hspeed = -hspeed;
    }
}

void FlyingEnemy::move_vertically() noexcept {
    if (is_active() == false){
        if (vspeed < MAX_V_SPEED) {
            vspeed += V_ACCELERATION;
        }
        top_left.y += vspeed;
    }
}

void FlyingEnemy::process_horizontal_static_collision(Rect* obj) noexcept {
    hspeed = -hspeed;
    flight_distance = 0;
	move_horizontally();
}

void FlyingEnemy::process_vertical_static_collision(Rect* obj) noexcept {}

