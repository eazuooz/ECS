#pragma once
#include <unordered_map>
#include <functional>
#include <vector>
#include <algorithm>
#include <stdint.h>
#include <type_traits>

#include <typeindex>
#include <typeinfo>

namespace ECS
{
	typedef std::type_index TypeIndex;

	template <typename T>
	TypeIndex getTypeIndex()
	{
		return std::type_index(typeid(T));
	}
}