#pragma once

#include <type_traits>


	

template<typename T, typename T1, typename T2, typename T3>
struct is_any_of : std::disjunction<std::is_same<T,T1>,std::is_same<T,T2>,std::is_same<T,T3>>{	
};			//disjunction - struktura, ktorej wartosc bazuje na jej argumentach
				// - jesli pierwszy arg(is_same<T,T1>) dalej nie sprawdza i zwraca prawde






	
/* cwicz. 1
template<typename T, typename T1, typename T2, typename T3>
struct is_any_of : std::false_type {	
};

template<typename T, typename T1, typename T2>
struct is_any_of<T,T,T1,T2> : std::true_type{
};

template<typename T, typename T1, typename T2>
struct is_any_of<T,T1,T,T2> : std::true_type{
};

template<typename T, typename T1, typename T2>
struct is_any_of<T,T1,T2,T> : std::true_type{
}; */


