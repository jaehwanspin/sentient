#ifndef __SENTIENT_CORE_TYPES_HPP__
#define __SENTIENT_CORE_TYPES_HPP__

/**
 * @file types.hpp
 * @author Jin (jaehwanspin@gmail.com)
 * @brief basic Sentient type aliases
 * @version 0.1
 * @date 2022-03-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <cstddef>
#include <cstdint>

namespace sentient
{
	using u8_t = uint8_t;
	using u16_t = uint16_t;
	using u32_t = uint32_t;
	using u64_t = uint64_t;
	using i8_t = int8_t;
	using i16_t = int16_t;
	using i32_t = int32_t;
	using i64_t = int64_t;
	using f32_t = float;
	using f64_t = double;

	template <typename _Tp, size_t _Size>
	using arr_t = _Tp[_Size];
	template <size_t _Size>
	using str8_t = arr_t<char, _Size>;
	template <size_t _Size>
	using str16_t = arr_t<char16_t, _Size>;
	template <size_t _Size>
	using str32_t = arr_t<char32_t, _Size>;
}

#endif