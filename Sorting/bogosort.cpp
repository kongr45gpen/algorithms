#include <algorithm>
#include <iterator>

template <class Iterator>
bool is_sorted (Iterator first, Iterator last)
{
    if (first == last) return true;
    Iterator next = first;
    while (++next != last) {
        if (*next < *first)
            return false;
        ++first;
    }
    return true;
}

template<class Iterator>
void bogosort(Iterator begin, Iterator end)
{
    while(!is_sorted(begin, end))
        random_shuffle(begin, end);
}
