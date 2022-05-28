#pragma once

#include <volt/volt.hpp>
// #include <volt/core/assets/text.hpp>

#if VOLTCRAFT_EXPORTS
	#define VOLTCRAFT_API VOLT_API_EXPORT
#else
	#define VOLTCRAFT_API VOLT_API_IMPORT
#endif

// namespace voltcraft {
// 	VOLT_COMPONENT class component {
// 	public:
// 		int number;

// 		component() = default;

// 		component(const nlohmann::json &json) {
// 			number = json["number"];
// 		}

// 		operator nlohmann::json() const {
// 			auto json = nlohmann::json::object();
// 			json["number"] = number;
// 			return json;
// 		}
// 	};

// 	VOLT_COMPONENT class alt_component {
// 	public:
// 		int alt_number;

// 		alt_component() = default;

// 		alt_component(const nlohmann::json &json) {
// 			alt_number = json["altNumber"];
// 		}

// 		operator nlohmann::json() const {
// 			auto json = nlohmann::json::object();
// 			json["altNumber"] = alt_number;
// 			return json;
// 		}
// 	};

// 	VOLT_SYSTEM class test_system : public volt::ecs::system {
// 	public:
// 		test_system() {}

// 		void update(float delta) const override {
// 			volt::math::fvec3 y(5);
// 			volt::math::dquat a(3);
// 			volt::math::fquat b(3);
// 			auto x = a + b;

// #ifdef VOLT_DEVELOPMENT
// 			volt::assets::list_assets("volt");
// #endif
// 			volt::assets::asset_ref<volt::core::assets::text> text = volt::assets::load("volt/text");
// 			std::cout << text->text;

// 			std::cout << "Heyo after reload!!! :D\n";
// 		}
// 	};
// }
