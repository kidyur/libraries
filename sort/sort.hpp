#ifndef KIDYUR_SORT_HPP
#define KIDYUR_SORT_HPP


#include <vector>


template<typename TNumeric>
void bubblesort(std::vector<TNumeric> &v) noexcept
{
	const int32_t n = v.size();
	for (int32_t i = 0; i < n; i++) {
		for (int32_t j = i + 1; j < n; j++) {
			if (v[i] > v[j]) {
				TNumeric tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}
	}
}


template<typename TNumeric>
void selectionsort(std::vector<TNumeric> &v) noexcept
{
	const int32_t n = v.size();
	for (int32_t i = 0; i < n; i++) {
		int32_t minidx = i;
		for (int32_t j = i; j < n; j++) {
			if (v[j] < v[minidx]) {
				minidx = j;
			}
		}
		TNumeric tmp = v[i];
		v[i] = v[minidx];
		v[minidx] = tmp;
	}
}


template<typename TNumeric>
void mergesort(std::vector<TNumeric> &v) noexcept
{
	// TODO:
}



#endif // KIDYUR_SORT_HPP
