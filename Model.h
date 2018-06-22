#pragma once

class Detection_Model
{
public:
	virtual void Detection();
private:
	// functions
	void Init_cost();
	void Init_train();
	float ReLU();
	void Cast();
	void Check_Directory();
	void feed_dict();
};