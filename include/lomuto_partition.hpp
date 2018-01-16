#include <iostream>

template <typename Iterator>
void quickSort(Iterator first, Iterator last)
{
	if (first < right)
	{
		auto p = partition(first, last);
		quickSort(first, p - 1);
		quickSort(p + 1, last);
	}
}
<class Iterator>
Iterator partition(Iterator first, Iterator last) 
{

	auto pivot = *(last);
	Iterator i = first - 1;
	for (Iterator j = first; j < last - 1; ++j) 
	{
		if (*j <= pivot) 
		{
			++i;
			std::iter_swap(*i, *j);
		}
	}
	std::iter_swap(i + 1, last);

	return i + 1;
}
