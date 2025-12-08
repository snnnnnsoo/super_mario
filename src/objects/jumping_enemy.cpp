#include "jumping_enemy.hpp"
using biv::JumpingEnemy;

JumpingEnemy::JumpingEnemy(const Coord& top_left, const int width, const int height) 
    : Enemy(top_left, width, height) {
    jump_height = -0.2f;
    vspeed = 0;
    hspeed = 0.2;
}

void JumpingEnemy::move_horizontally() noexcept {}
void JumpingEnemy::move_vertically() noexcept {
    if (vspeed < MAX_V_SPEED) {
        vspeed += V_ACCELERATION;
        }
    if (vspeed > 0) {
        is_falling = true;
    }
    top_left.y += vspeed;
}
void JumpingEnemy::process_horizontal_static_collision(Rect* obj) noexcept {}
void JumpingEnemy::process_vertical_static_collision(Rect* obj) noexcept {
    if (vspeed >= 0) {
		top_left.y -= vspeed;
		vspeed = JUMP_SPEED;
	}else if(vspeed < 0){
        vspeed = 0.5;
        top_left.y += vspeed;
    }
}