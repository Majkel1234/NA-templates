#pragma once



namespace training
{
template<typename InputIt, typename UnaryPredicate>
InputIt find_if(InputIt begin, InputIt end, UnaryPredicate pred){
	InputIt iter;
	for(iter = begin ;iter != end; ++iter){
		if(pred(*iter)) break;	
	}
	return iter;
   }
}

