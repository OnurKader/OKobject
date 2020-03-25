#ifndef VALUE_HPP
#define VALUE_HPP

#include <any>
#include <string>

namespace OK
{
class Object;

using value_t = std::any;
class Value
{
	public:
	Value();

	template<typename T>
	Value(T value) : m_value(value)
	{
	}

	Value(const Value&);
	Value(Value&&);
	~Value();

	value_t& value() { return m_value; }
	const value_t& value() const { return m_value; }

	template<typename T>
	T& as()
	{
		return std::any_cast<T&>(m_value);
	}

	template<typename T>
	const T& as() const
	{
		return std::any_cast<T>(m_value);
	}

	Value& operator=(const Value&);

	template<typename T>
	Value& operator=(T);

	void clear();

	bool hasValue() const { return m_value.has_value(); }

	private:
	value_t m_value;
};

}	 // namespace OK
#endif
