
void type(int l,int typepoint[],float timepoint[])
{
//clrscr();
char ch[20];
int count=0;
double total_time;
clock_t start,end;
//int arr[20],b=0;
int total=5;
char *string[]={"confidence","means","feeling","sure","of","your self","and",
		"your","ability","no","in","arrogant","way","but","in","realistic","secure","way"};
		start=clock();
		for(int i=0;i<total;i++)
		{
		int j=rand()%15;
		cout<<string[j]<<"  :  ";
		gets(ch);
		if(strcmp(string[j],ch)!=0)
		{
		count++;
		}
		}
		end=clock();
		total_time=((double)(end-start))/CLOCKS_PER_SEC;
cout<<"total mistake :"<<count<<"\ntotal time taken in second  :"<<total_time;

 getch();
 typepoint[l]=total-count;
 timepoint[l]=total_time;

 clrscr();
}