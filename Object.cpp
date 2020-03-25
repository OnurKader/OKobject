#include "Object.hpp"

namespace OK
{
Object::Object() {}

Object::~Object() {}

void Object::set(const std::string& str, Value value)
{
	if(value.hasValue())
		m_data[str] = value;
}

std::optional<Value> Object::get(const std::string& str)
{
	if(m_data.count(str))
		return m_data[str];
	return std::optional<Value>();
}

Value& Object::operator[](const std::string& str) { return m_data[str]; }

Value& Object::operator[](const char* str) { return m_data[str]; }

}	 // namespace OK
