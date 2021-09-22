/*******************************************************************/
/*                                                                 */
/*  A1 Part 2: DList starter file                             	   */
/*                                                                 */
/*  Author1 Name: <name here>		 							   */
/*      - class/function list/main author or main checker          */
/*  Author2 Name: <name here>		 							   */
/*      - class/function list/main author or main checker          */
/*                                                                 */
/*******************************************************************/

template <typename T>

class DList{
	struct Node{
	};

public:
	class const_iterator{
	public:
		const_iterator(){}
		const_iterator& operator++(){}
		const_iterator operator++(int){}
		const_iterator& operator--(){}
		const_iterator operator--(int){}
		bool operator==(const_iterator rhs){}
		bool operator!=(const_iterator rhs){}
		const T& operator*()const{}
	};
	class iterator:public const_iterator{
	public:
		iterator(){}
		iterator& operator++(){}
		iterator operator++(int){}
		iterator& operator--(){}
		iterator operator--(int){}
		T& operator*(){}
		const T& operator*()const{}
	};
	DList();
	~DList();
	DList(const DList& rhs);
	DList& operator=(const DList& rhs);
	DList(DList&& rhs);
	DList& operator=(DList&& rhs);
	iterator insert(iterator it, const T& data);
	iterator search(const T& data);
	iterator erase(iterator it);
	void sort(iterator first, iterator last);
	bool empty() const;
	int size() const;

	iterator begin(){}
	iterator end(){}
	const_iterator cbegin() const{}
	const_iterator cend() const{}
};

template <typename T>
DList<T>::DList(){

}
template <typename T>
DList<T>::~DList(){

}
template <typename T>
DList<T>::DList(const DList& rhs){

}
template <typename T>
DList<T>& DList<T>::operator=(const DList& rhs){

}
template <typename T>
DList<T>::DList(DList&& rhs){

}

template <typename T>
DList<T>& DList<T>::operator=(DList&& rhs){

}


template <typename T>
typename DList<T>::iterator DList<T>::insert(iterator it, const T& data){

}

template <typename T>
typename DList<T>::iterator DList<T>::search(const T& data){

}


template <typename T>
typename DList<T>::iterator DList<T>::erase(iterator it){

}

template <typename T>
void DList<T>::sort(iterator first, iterator last){

}
template <typename T>
bool DList<T>::empty() const{

}
template <typename T>
int DList<T>::size() const{

}
