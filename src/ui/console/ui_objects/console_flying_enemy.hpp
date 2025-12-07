#pragma once

#include "console_enemy.hpp"
#include "flying_enemy.hpp"


namespace biv {
    class ConsoleFlyingEnemy : public FlyingEnemy, public ConsoleEnemy {
        public:
            ConsoleFlyingEnemy(const Coord& top_left, const int width, const int height);

            char get_brush() const noexcept override;
    };
}