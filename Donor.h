class Donor{

	protected:
		char donorID[10];
		char NIC[12];
		char gender[6];
		char dob[10];
		char bloodGrp[4];
		
	public:
		Donor();
		Donor(const char dID[], const char nic[], const char gnder[], const char dateofBrth[], const char bgrp[]);
		void displayDonorDetails();
};
