#include "Value.hpp"

namespace OK
{
Value::Value() {}

Value::Value(const Value& other) : m_value(other.m_value) {}

Value::Value(Value&& other) : m_value(other.m_value) { other.clear(); }

Value::~Value() {}

Value& Value::operator=(const Value& other)
{
	m_value = other.m_value;
	return *this;
}

template<typename T>
Value& Value::operator=(T value)
{
	m_value = value;
	return *this;
}

void Value::clear() { m_value.reset(); }

}	 // namespace OK
