#include "jumping_enemy.hpp"
#include "console_enemy.hpp"

namespace biv {
    class ConsoleJumpingEnemy : public JumpingEnemy, public ConsoleEnemy {
        public:
            ConsoleJumpingEnemy(const Coord& top_left, const int width, const int height);

            char get_brush() const noexcept override;
    };
}