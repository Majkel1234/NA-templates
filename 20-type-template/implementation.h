#pragma once
#include <iostream>
#include <boost/optional.hpp>

template<typename T>
class container_wrapper{
public:
	container_wrapper(){
		std::cout<<"default constructor"<<std::endl;
	}
	container_wrapper(T arg): value{std::move(arg)}{}
	container_wrapper(const container_wrapper<T> &arg) = default;
	container_wrapper(container_wrapper<T> &&arg) = default;
	container_wrapper<T>& operator=(const container_wrapper<T> &arg) = default;
	container_wrapper<T>& operator=(container_wrapper<T> &&arg) = default;
	size_t size(){
		return value.size();
	}
private:
   T value;
};

template <typename T>
class container_wrapper<boost::optional<T>>{
public:
	container_wrapper() = default;
	container_wrapper(boost::optional<T> arg): element(std::move(arg)){}
	container_wrapper(const container_wrapper<boost::optional<T>>&obj) = default;
	container_wrapper(container_wrapper<boost::optional<T>>&&) = default;
	container_wrapper& operator=(const container_wrapper<boost::optional<T>>&) = default;
	container_wrapper& operator=(container_wrapper<boost::optional<T>>&&) = default;
	size_t size(){
		return (element)? 1 : 0;
	}
private:
	boost::optional<T> element;
};




