#pragma once

template<typename I> requires std::integral<I> || std::floating_point<I>
class complex_number {
	