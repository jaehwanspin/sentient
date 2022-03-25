#ifndef __SENTIENT_CORE_TYPES_HPP__
#define __SENTIENT_CORE_TYPES_HPP__

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
	using s8_t = arr_t<char, _Size>;
	template <size_t _Size>
	using s16_t = arr_t<char16_t, _Size>;
	template <size_t _Size>
	using s32_t = arr_t<char32_t, _Size>;
}

#endif