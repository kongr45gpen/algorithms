#include <algorithm>
#include <iterator>

template <class Iterator>
bool is_sorted (Iterator first, Iterator last, bool increasing = true)
{
    if (first == last) return true;
    Iterator next  = first;
    while (++next != last) {
        if (increasing && *next < *first)
            return false;
        else if(!increasing && *next > *first)
            return false;
        ++first;
    }
    return true;
}

template<class Iterator>
void bogosort(Iterator begin, Iterator end)
{
    while(!is_sorted(begin, end)) {
        random_shuffle(begin, end);
    }
}
