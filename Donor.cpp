#include <iostream>
#include <cstring>

using namespace std;

class Donor: public user{

	protected:
		char donorID[10];
		char NIC[12];
		char gender[6];
		char dob[10];
		char bloodGrp[4];
		
	public:
		Donor(){
      strcpy(donorID, "");
      strcpy(NIC, "");
      strcpy(gender, "");
      strcpy(dob, "");
      strcpy(bloodGrp, "");
    }
		Donor(const char dID[], const char nic[], const char gnder[], const char dateofBrth[], const char bgrp[]):{
      strcpy(donorID, dID);
      strcpy(NIC, nic);
      strcpy(gender, gnder);
      strcpy(dob, dateofBrth);
      strcpy(bloodGrp, bgrp);
    }
		void displayDonorDetails(){
      
    }
};
