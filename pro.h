class profession{
private:
	string name;
	int exp,salary;
public:
    void set_all(string ="james", int =10, int =5100);

    void set_exp(int );
};

void profession::set_all(string n, int e, int s){
  name=n;
  exp=e;
  salary=s;
if (exp==1){
  cout<<"Job: "<<name<<"   ---   experience: "<<exp<<"year"<<"   ---   Salary: "<<salary<<endl;
}
  if (exp>1)
    {
cout<<"Job: "<<name<<"   ---   experience: "<<exp<<"years"<<"   ---   Salary: "<<salary<<endl; 
    }
    
  }
void profession::set_exp(int e){
  exp=e;
}
void insertionSortUp(int a[],int n){
  int i,new_number,j;
  for (i = 1; i < n; i++)
    {
      new_number = a[i];
      j = i - 1;
      while (a[j] > new_number)
      {
        a[j + 1] = a[j];
        j = j - 1;
      }
      a[j + 1] = new_number;
    }
}
void insertionSortDown(int a[],int n){
  for (int i = 1; i < n; i++) {
    int new_num = a[i];
    int j = i - 1;
    while (new_num > a[j] && j >= 0) {
      a[j + 1] = a[j];
      --j;
    }
    a[j + 1] = new_num;
  }
}

