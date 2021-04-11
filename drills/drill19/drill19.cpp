#include "std_lib_facilities.h"

template<typename T>
struct S {
	S(T val_) : val(val_) {}

	T& get();
	const T& get() const;

	/*void set(T val_){
		val=val_;
	}
	*/

	S& operator=(const T&);		//9. feladatban erre cseréltük a set()-t
	
	private:
		T val;
};

template <typename T>
T& S<T>::get() {
	return val;
}

template <typename T>
const T& S<T>::get() const {
	return val;
}

template <typename T>
S<T>& S<T>::operator=(const T& rhs) {
    val = rhs;
    return *this;
    }

template <typename T>
    void read_val(T& v){
		cin >> v;
    }


int main() {

	/*S<int>				s_int{123};
	S<char>				s_char{'*'};
	S<double>			s_double{4.2};
	S<string>			s_string{"Hello world"};
	*/S<vector<int>>		s_vector{{1, 2, 3, 4, 5}};

	int tmp_i;
    read_val(tmp_i);
    S<int> s_int{tmp_i};

    char tmp_c;
    read_val(tmp_c);
    S<char> s_char{tmp_c};

    double tmp_d;
    read_val(tmp_d);
    S<double> s_double{tmp_d};

    std::string tmp_s;
    read_val(tmp_s);
    S<string> s_string{tmp_s};





	/*cout<< s_int.val << endl;
    cout << s_char.val << endl;
    cout << s_double.val << endl;
    cout << s_string.val << endl;

    for (auto elem : s_vector.val)
        cout << elem << endl;
*/

	cout<< s_int.get() << endl;
    cout << s_char.get() << endl;
    cout << s_double.get() << endl;
    cout << s_string.get() << endl;

    for (auto elem : s_vector.get())
        cout << elem << endl;




}
