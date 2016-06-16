#include "Users.h"

using namespace std;

Users::Users()
{
}


Users::~Users()
{
}

string Users::ReadFromFile_and_result(int userNumber)
{

	int user_1_marks[9]; //= {1,1,1,1,1,1,1,1,1};
	int user_2_marks[9]; //= {4,4,4,4,4,4,4,4,4};
	int user_3_marks[9]; //= {3,3,3,3,3,3,3,3,3};
	int user_4_marks[9]; //= {5,5,5,5,5,3,5,5,5};
	ifstream fin ("marks.txt");
	if(fin!=NULL)
	{
	int user_1_marks[9];
	int user_2_marks[9];
	int user_3_marks[9];
	int user_4_marks[9];
		
		while(!fin.eof())
		{
		
			int user;
			int film_id;
			int mark;
			fin>>user>>film_id>>mark;
			int i = 1;
			while (user==1 && i <10)
			{
				if(film_id==i)
				{
					user_1_marks[i-1]=mark;
				}
				else
				{
					user_1_marks[i-1]=0;
				}
			/*if(i==9)
				break;
			else*/
				i++;
			}

			int k=1;
			while (user==2 && k <10)
			{
				if(film_id==k)
				{
					user_2_marks[k-1]=mark;
				}
				else
				{
					user_2_marks[k-1]=0;
				}
			/*if(i==9)
				break;
			else*/
				k++;
			}

			int m=1;
			while (user==3 && m <10)
			{
				if(film_id==m)
				{
					user_3_marks[m-1]=mark;
				}
				else
				{
					user_3_marks[m-1]=0;
				}
			/*if(i==9)
				break;
			else*/
				m++;
			}

			int n=1;
			
			while (user==4 && n <10)
			{
				if(film_id==n)
				{
					user_4_marks[n-1]=mark;
				}
				else
				{
					user_4_marks[n-1]=0;
				}
			/*if(i==9)
				break;
			else*/
				n++;
			//}
			} 
		}
			
		}
	fin.close();

		/*int c[9];
		for(int j = 0; j<9; j++)
			c[j] = user_1_marks[j];*/

		int user_1_2 = inversion(user_1_marks,user_2_marks,9);

		int user_1_3 = inversion(user_1_marks,user_3_marks,9);
		int user_1_4 = inversion(user_1_marks,user_4_marks,9);

		int min_user_1 = min(min(user_1_2,user_1_3),user_1_4);

		int user_2_1 = inversion(user_2_marks,user_1_marks,9);
		int user_2_3 = inversion(user_2_marks,user_3_marks,9);
		int user_2_4 = inversion(user_2_marks,user_4_marks,9);

		int min_user_2 = min(min(user_2_1,user_2_3),user_2_4);

		int user_3_1 = inversion(user_3_marks,user_1_marks,9);
		int user_3_2 = inversion(user_3_marks,user_2_marks,9);
		int user_3_4 = inversion(user_3_marks,user_4_marks,9);

		int min_user_3 = min(min(user_3_1,user_3_2),user_3_4);

		
		int user_4_1 = inversion(user_4_marks,user_1_marks,9);
		int user_4_2 = inversion(user_4_marks,user_2_marks,9);
		int user_4_3 = inversion(user_4_marks,user_3_marks,9);

		int min_user_4 = min(min(user_4_1,user_4_2),user_4_3);

			if(userNumber==1)
			{
				if (min_user_1 == user_1_2)
				{
					return "User 2";
				}
				else if (min_user_1 == user_1_3)
				{
					return "User 3";
				}
				else
				{
					return "User 4";
				}
			}

		else if(userNumber==2)
		{
			if (min_user_2 == user_2_1)
			{
				return "User 1";
			}
			else if (min_user_2 == user_2_3)
			{
				return "User 3";
			}
			else
			{
				return "User 4";
			}
		}

		else if(userNumber==3)
		{
			if (min_user_3 == user_3_1)
			{
				return "User 1";
			}
			else if (min_user_3 == user_3_2)
			{
				return "User 2";
			}
			else
			{
				return "User 4";
			}
		}

		else if(userNumber==4)
		{
			if (min_user_4 == user_4_1)
			{
				return "User 1";
			}
			else if (min_user_4 == user_4_2)
			{
				return "User 2";
			}
			else
			{
				return "User 3";
			}
		}
	}
	// }

	int Users::inversion (int *a,int *b,int f)
{
    int index;
    for(int i=0;i<f-1;i++)
    {
        index=i;
        for(int j=i+1;j<f;j++)
        {
            if(a[j]<a[index])
            index=j;
        }
        int buf=a[index];
        a[index]=a[i];
        a[i]=buf;
        buf=b[index];
        b[index]=b[i];
        b[i]=buf;
    }

    int rez=0;
    for(int i=0;i<f;i++)
         for(int j=i+1;j<f;j++)
         if(b[i]>b[j])rez++;
		return rez;
}
