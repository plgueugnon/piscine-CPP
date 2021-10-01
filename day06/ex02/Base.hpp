#ifndef __BASE_H__
#define __BASE_H__

class Base {

public:

	virtual ~Base( void );

};

class A : public Base { };
class B : public Base { };
class C : public Base { };

#endif // __BASE_H__