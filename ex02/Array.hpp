/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:35:50 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/13 18:30:40 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstring>
#include <exception>

template <typename T>
class Array {
 public:
  Array() : _size(0), _array(NULL) {}

  Array(unsigned int n) : _size(n), _array(new T[n]) {
    for (unsigned int i = 0; i < n; ++i) {
      this->_array[i] = 0;
    }
  }
  Array& operator=(Array& src) {
    unsigned int i = 0;
    unsigned int len = src.size();
    this->_size = len;

    if (this->_size != 0) {
      this->_array = new T[len];
      while (i < len) {
        this->_array[i] = src[i];
        ++i;
      }
    } else
      this->_array = NULL;
    return *this;
  }

  T operator[](unsigned int n) {
    if (n + 1 > this->_size || this->_array == NULL) throw std::exception();
    return (this->_array[n]);
  }
  Array(Array& src) { *this = src; }
  ~Array() {
    if (_array) delete[] _array;
  }
  unsigned int size() const { return this->_size; }

 private:
  size_t _size;
  T* _array;
};

#endif
