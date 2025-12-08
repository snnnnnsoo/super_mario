#pragma once

#include "enemy.hpp"

namespace biv {
    class JumpingEnemy: public virtual Enemy {
        public:
            JumpingEnemy (const Coord& top_left, const int width, const int height);

            bool is_falling;
            float jump_height;

            void move_vertically() noexcept override;
            void move_horizontally() noexcept override;
            void process_horizontal_static_collision(Rect*) noexcept override;
            void process_vertical_static_collision(Rect*) noexcept override;
    };

}