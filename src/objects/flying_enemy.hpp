#pragma once

#include "cmath"
#include "enemy.hpp"

namespace biv {
    class FlyingEnemy: public virtual Enemy {
        public:
            FlyingEnemy (const Coord& top_left, const int width, const int height);
            float flying_range;
            float flight_distance;

            void move_vertically() noexcept override;
            void move_horizontally() noexcept override;
            void process_horizontal_static_collision(Rect*) noexcept override;
            void process_vertical_static_collision(Rect*) noexcept override;
    };

}