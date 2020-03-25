#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "Value.hpp"

#include <optional>
#include <unordered_map>

namespace OK
{
using object_t = std::unordered_map<std::string, OK::Value>;
class Object
{
	public:
	// TODO Implement the other constructors
	Object();
	~Object();

	object_t& data() { return m_data; }
	const object_t& data() const { return m_data; }

	template<typename T>
	void set(const std::string& str, T value)
	{
		m_data[str] = Value(value);
	}

	void set(const std::string&, Value);

	std::optional<Value> get(const std::string&);

	Value& operator[](const std::string&);
	Value& operator[](const char*);

	private:
	object_t m_data;
};

}	 // namespace OK

#endif
