class BudgetReport{
	private:
		char B_repNo[10];
		float eventBudget[30];
		
	public:
		BudgetReport();
		BudgetReport(const char repno[], float amount);
		void displayDetails();
		float calcBudget();
		~BudgetReport();
};
