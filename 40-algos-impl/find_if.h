#pragma once


/*
namespace training{
	template<typename InputIt, typename UnaryPredicate>
	InputIt find_if(InputIt begin, InputIt end, UnaryPredicate pred){
		while(begin!=end){
			if(pred(*begin)) return begin;
			++begin;
		}
		return begin;
	    }
	}
}*/

namespace training
 {
 template<typename InputIt, typename UnaryPredicate>
InputIt find_if(InputIt begin, InputIt end, UnaryPredicate pred)
{

    for(; begin != end; ++begin)
    {
            if( pred( *begin ) )
            {
                return begin;
            }
    }
    return end;
 }
}

