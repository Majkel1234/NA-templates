#pragma once

#include <algorithm>

// define vector_erase here

template <typename T>
void vector_erase(T &vect, const typename T::value_type &val){
/*	for(auto it = vect.begin(); it!= vect.end();++it){
		if(*it == val){
			vect.erase(it);
		}
	} */
	vect.erase(std::remove(vect.begin(),vect.end(),val),vect.end());
}

