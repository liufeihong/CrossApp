#ifndef _Label_Test_h_
#define _Label_Test_h_

#include <iostream>
#include "CrossApp.h"

USING_NS_CC;

class LabelTest :public CAViewController
{
public:
	LabelTest();
	virtual ~LabelTest();
    bool init();
    
public:
	void textSetAlignment(void);
	void textSetVerticalAlignment(void);

protected:
	void viewDidLoad();
	void viewDidUnload();

private:
	CADipSize size;
	std::string introduce;

};

#endif