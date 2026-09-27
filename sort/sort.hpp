#ifndef KIDYUR_SORT_HPP
#define KIDYUR_SORT_HPP


#include <vector>


template<typename T>
void bubblesort(
    std::vector<T> &v, 
    bool (*is_gt)(const T lhs, const T rhs)
) 
{
	const int32_t n = v.size();
	for (int32_t i = 0; i < n; i++) {
		for (int32_t j = 1; j < n; j++) {
			if (is_gt(v[j-1], v[j])) {
				T tmp = v[j];
				v[j] = v[j-1];
				v[j-1] = tmp;
			}
		}
	}
}


template<typename T>
void selectionsort(
    std::vector<T> &v, 
    bool (*is_gt)(const T lhs, const T rhs)
) 
{
	const int32_t n = v.size();
	for (int32_t i = 0; i < n; i++) {
		int32_t minidx = i;
		for (int32_t j = i; j < n; j++) {
			if (is_gt(v[minidx], v[j])) {
				minidx = j;
			}
		}
		T tmp = v[i];
		v[i] = v[minidx];
		v[minidx] = tmp;
	}
}


template<typename T>
void mergesort(std::vector<T> &v) 
{
	// TODO:
}



#endif // KIDYUR_SORT_HPP
