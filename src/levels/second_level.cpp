#include "second_level.hpp"

using biv::SecondLevel;

SecondLevel::SecondLevel(UIFactory* ui_factory) : GameLevel(ui_factory) {
	init_data();
}

bool SecondLevel::is_final() const noexcept {
	return true;
}

biv::GameLevel* SecondLevel::get_next() {
	return next;
}

// ----------------------------------------------------------------------------
// 									PROTECTED
// ----------------------------------------------------------------------------
void SecondLevel::init_data() {
	ui_factory->create_mario({16, 19}, 3, 3);
	
	ui_factory->create_ship({0,15}, 20, 1);
	ui_factory->create_ship({20,10}, 40, 1);
	ui_factory->create_ship({55, 0}, 5, 10);
	ui_factory->create_full_box({22, 2}, 3,2);
	ui_factory->create_full_box({32, 2}, 3,2);
	ui_factory->create_full_box({42, 2}, 3,2);
	ui_factory->create_box({25, 2}, 7,2);
	ui_factory->create_box({35, 2}, 7,2);


	ui_factory->create_ship({15, 25}, 50, 2);
	ui_factory->create_ship({28, 20}, 10, 7);
	ui_factory->create_ship({72, 20}, 3,2);
	ui_factory->create_ship({42, 16}, 18, 2);

	ui_factory->create_ship({60, 7}, 18, 2);
	ui_factory->create_ship({74, 4}, 7, 5);
	ui_factory->create_money({61, 0}, 3, 2);


	ui_factory->create_ship({82, 17}, 20, 15);
	ui_factory->create_ship({102,17}, 5, 1);
	ui_factory->create_ship({107, 13}, 3, 5);
	ui_factory->create_ship({107, 13}, 25, 1);
	ui_factory->create_ship({132, 13}, 3, 8);


	ui_factory->create_ship({126, 18}, 2, 9);
	ui_factory->create_ship({120, 14}, 2, 8);
	ui_factory->create_ship({107, 21}, 13, 1);
	ui_factory->create_full_box({110, 16}, 3,2);
	ui_factory->create_full_box({117, 16}, 3,2);


	ui_factory->create_ship({91, 12}, 9, 1);
	ui_factory->create_ship({100, 10}, 1, 3);
	ui_factory->create_ship({100, 8}, 40, 2);


	ui_factory->create_box({100,0}, 1, 3);
	ui_factory->create_box({133,1}, 1, 1);
	ui_factory->create_box({100, 2}, 5,2);
	ui_factory->create_box({108, 2}, 5,2);
	ui_factory->create_box({115, 2}, 5,2);
	ui_factory->create_box({122, 2}, 5,2);
	ui_factory->create_box({129, 2}, 5,2);
	ui_factory->create_full_box({105, 2}, 3, 2);
	ui_factory->create_full_box({113, 2}, 3, 2);
	ui_factory->create_full_box({120, 2}, 3, 2);
	ui_factory->create_full_box({127, 2}, 3, 2);
	ui_factory->create_money({101,0}, 3,2);
	ui_factory->create_money({125,0}, 3,2);


	ui_factory->create_ship({140, 4}, 15,2);
	ui_factory->create_ship({140, 4}, 3, 17);
	ui_factory->create_ship({160, 0}, 3, 21);
	ui_factory->create_ship({148, 9}, 12, 2);
	ui_factory->create_ship({140, 14}, 15, 2);
	ui_factory->create_ship({147, 19}, 13, 2);



	ui_factory->create_ship({92, 25}, 80, 2);


	ui_factory->create_ship({180, 20}, 3,2);
	ui_factory->create_ship({168, 15}, 3,2);
	ui_factory->create_ship({177, 7}, 3,2);

	ui_factory->create_ship({188, 5}, 3,26);
	ui_factory->create_ship({190, 5}, 11, 26);



	ui_factory->create_enemy({21, 6}, 3, 2);
	ui_factory->create_enemy({39, 18}, 3, 2);

	ui_factory->create_enemy({67, 0}, 3, 2);
	
	ui_factory->create_enemy({100, 6}, 3, 2);

	ui_factory->create_enemy({137, 6}, 3, 2);
	ui_factory->create_enemy({148, 6}, 3, 2);
	ui_factory->create_enemy({148, 11}, 3, 2);
	ui_factory->create_enemy({144, 16}, 3, 2);

	ui_factory->create_enemy({164, 15}, 3, 2);










	
}
