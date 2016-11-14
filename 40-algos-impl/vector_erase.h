#pragma once
#include <vector>
#include <iostream>

#include <algorithm>

// define vector_erase here
template <typename T,typename T1 = std::allocator<T>>
void vector_erase(std::vector<T,T1> &vect,const T &&el){
	for(auto it = vect.begin();it!=vect.end();++it){
		if(*it == el){
			auto it2 = it--;
			vect.erase(it2);
		}
	}
}
