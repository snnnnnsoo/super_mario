#include "third_level.hpp"

using biv::ThirdLevel;

ThirdLevel::ThirdLevel(UIFactory* ui_factory) : GameLevel(ui_factory) {
	init_data();
}

bool ThirdLevel::is_final() const noexcept {
	return true;
}

biv::GameLevel* ThirdLevel::get_next() {
	return next;
}

// ----------------------------------------------------------------------------
// 									PROTECTED
// ----------------------------------------------------------------------------
void ThirdLevel::init_data() {
	ui_factory->create_mario({16, 19}, 3, 3);
	
    ui_factory->create_ship({0,10}, 17, 2);
    ui_factory->create_full_box({5, 2}, 3,2);
    ui_factory->create_full_box({13, 2}, 3,2);
    ui_factory->create_box({0, 2}, 5,2);
    ui_factory->create_box({8, 2}, 5,2);

    ui_factory->create_ship({25, 15}, 3, 2);

	ui_factory->create_ship({0,25}, 20, 3);
	ui_factory->create_ship({20,20}, 40, 7);
    ui_factory->create_full_box({50, 12}, 3,2);
	ui_factory->create_ship({60, 8}, 6, 17);

	ui_factory->create_ship({79, 10}, 18, 20);
    ui_factory->create_ship({97,14},54, 1);
    ui_factory->create_full_box({105, 4}, 3,2);
    ui_factory->create_full_box({112, 4}, 3,2);
    ui_factory->create_full_box({119, 4}, 3,2);
    ui_factory->create_full_box({126, 4}, 3,2);

    ui_factory->create_box({108, 4}, 4,2);
    ui_factory->create_box({115, 4}, 4,2);
    ui_factory->create_box({122, 4}, 4,2);


	ui_factory->create_ship({137, 10}, 3, 11);
	ui_factory->create_ship({137, 24}, 3, 3);

	ui_factory->create_ship({97, 25}, 50, 2);
    ui_factory->create_full_box({97, 18},3,2);
    ui_factory->create_full_box({104, 18},3,2);
    ui_factory->create_full_box({111, 18},3,2);
    ui_factory->create_full_box({120, 18},3,2);
    ui_factory->create_full_box({127, 18},3,2);
    ui_factory->create_full_box({134, 18},3,2);

    ui_factory->create_box({100, 18},4,2);
    ui_factory->create_box({107, 18},4,2);
    ui_factory->create_box({123, 18},4,2);
    ui_factory->create_box({130, 18},4,2);


	ui_factory->create_ship({160, 0}, 3, 21);
    ui_factory->create_ship({156, 25}, 12, 2);


    ui_factory->create_ship({175, 21}, 13,2);
	ui_factory->create_ship({188, 18}, 3,12);
	ui_factory->create_ship({190, 15}, 11, 15);


    ui_factory->create_enemy({5, 7}, 3, 2);
    ui_factory->create_enemy({25, 12}, 3, 2);
    ui_factory->create_enemy({45, 5}, 3, 2);
    ui_factory->create_enemy({130, 12}, 3, 2);
    ui_factory->create_enemy({170, 5}, 3, 2);
    ui_factory->create_enemy({100, 22}, 3, 2);
    ui_factory->create_enemy({125, 22}, 3, 2);

    ui_factory->create_flying_enemy({66, 9}, 3, 2);
    ui_factory->create_flying_enemy({28, 15}, 3, 2);


}
