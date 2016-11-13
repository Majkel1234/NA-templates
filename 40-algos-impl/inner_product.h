#pragma once

namespace training
{
template<typename InputIt1, typename InputIt2, typename T,
    typename BinaryOperation1, typename BinaryOperation2>
T inner_product(InputIt1 first1, InputIt1 last1, InputIt2 first2, T value, BinaryOperation1 op1, BinaryOperation2 op2){
	T tmp = value;
	while(first1 != last1){
		tmp = (tmp,op2(*first1,*first2));
		++first1;
		++first2;
	}
	return tmp;
}

