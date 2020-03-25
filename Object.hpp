#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "Value.hpp"

#include <type_traits>
#include <unordered_map>

namespace OK
{
	class Value;

	class Object
	{
		public:
		private:
		std::type_info m_type;
	};

}	 // namespace OK

#endif

