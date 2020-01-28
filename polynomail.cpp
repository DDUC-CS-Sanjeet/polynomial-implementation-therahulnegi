#include<iostream>
using namespace std;

class polynomial
{
	int array[100];
	int power;
	
	 // Variables to store information about polynomial
	 public:
	 	
	 	polynomial()
	 	{
	 		power=1;
		}
		polynomial(int deg)
		{
			// Behavior of constructor with arguments
			cout<<"enter the degree of "<<deg<<" polynomial ";
			cin>>power;
			power++;	
		}
		~polynomial()
        {
             // Behavior of destructor
        }
         //  Overload copy constructor, +, - and = operators
        polynomial operator +(Polynomial d)
		{
			polynomial p;
			p.power=this->power>=d.power? this->power:d.power;
			for(int i=0;i<p.power;i++)
			{
				if(i>=this->power)
				  this->array[i]=0;
				if(i>=d.power)
				  d.array[i]=0;
				  p.array[i]=d.array[i]+this->array[i];  
			}
			return p;
		}
		polynomial operator -(polynomial d)
		{
			polynomial p;
			p.power=this->power>=d.power? this->power:d.power;
			for(int i=0;i<p.power;i++)
			{
				if(i>=this->power)
				  this-> array[i]=0;
				if (i>=d.power)
				  d.array[i]=0;
				  p.array[i]=this->array[i]-d.array[i];  
			} 
		    return p;	
	    }
	    polynomial operator =(polynomial d)
		{
			polynomial p;
			this->power=d.power;
			for(int i=0;i<this->power;i++)
			  this->array[i]=d.array[i];
	    }
	    void storePolynomial()
        {
                //  Code to enter and store polynomial	
            cout<<"\n enter the cofficient with respect to its ascending order of power"<<endl;
			for(int i=0;i<power;i++)
			cin>>array[i];
 	    }
 	    void display()
        {
            //  Code to print the polynomial in readable format
            cout<<"\n";
            for(int i=0;i<power;i++)
            {
            	cout<<array[i]<<"X^"<<i;
            	if(i<power-1)
            	  cout<<" + ";
			}
	    }
};
int main()
{
	  int degFirst=1, degSecond=2;
  // Ask user to input the values of degFirst and degSecond 
  polynomial firstpolynomial(degFirst);
  polynomial secondpolynomial(degSecond);
  polynomial thirdpolynomial;
  
  firstpolynomial.storepolynomial();
  secondpolynomial.storepolynomial();
  
  thirdpolynomial=firstpolynomial+secondpolynomial;
  polynomial fourthpolynomial=firstpolynomial-secondpolynomial;
  
  cout<<"\n THE FIRST POLYNMIAL is :";
  firstpolynomial.display();
  cout<<endl;
  cout<<"\n THE SECOND POLYNOMIAL is : ";
  secondpolynomial.display();
  cout<<endl;
  cout<<"\n THE THIRD POLYNOMIAL is :";
  thirdpolynomial.display();
  cout<<endl;
  cout<<"\n THE FIRST POLYNOMIAL is :";
  fourthpolynomial.display();

}
