#include <stdio.h>   
#include <unistd.h>
#include <stdlib.h>	
#include <sys/types.h>
#include <sys/wait.h>
int sumofAll(int start, int end, int array[])
{	int sum=0;
	for(int i=start;i<end;i++)
	{  sum=sum+array[i];	}
	return sum;
}
int main (){
	int arr[1000],s=0;
	for(int i =0; i<1000;i++)
	{ arr[i]=i+1;	}
	
	int ar1[2],ar2[2],ar3[2],ar4[2],ar5[2],ar6[2],ar7[2],ar8[2],ar9[2],ar10[2];
	pipe(ar1),pipe(ar2),pipe(ar3),pipe(ar4),pipe(ar5),pipe(ar6),pipe(ar7),pipe(ar8),pipe(ar9),pipe(ar10);
	int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;

	int cpid = fork();
	if(cpid == 0)
	{ s= sumofAll(0,100,arr);
	  write(ar1[1],&s,sizeof(int));
	  close(ar1[1]);	
	  exit(0); }
		else{
		int cpid1 = fork();
		if(cpid1 == 0)
		{ s= sumofAll(100,200,arr); 
		  write(ar2[1],&s,sizeof(int));
		  close(ar2[1]);	 
		  exit(0); }
			else{
			int cpid2 = fork();	
			     if(cpid2 == 0)
				{ s= sumofAll(200,300,arr); 
				  write(ar3[1],&s,sizeof(int));
				  close(ar3[1]);	 
				  exit(0); } 				

				else{
				int cpid3 = fork();
				if(cpid3 == 0)
				{ s= sumofAll(300,400,arr); 
				write(ar4[1],&s,sizeof(int));
				close(ar4[1]);	 
				exit(0);}
			
					else{
					int cpid4 = fork();
					if(cpid4 == 0)
					{ s= sumofAll(400,500,arr); 
					write(ar5[1],&s,sizeof(int));
					close(ar5[1]);	 
					exit(0);   }
						else{
						int cpid5 = fork();
						if(cpid5 == 0)
						{ s= sumofAll(500,600,arr); 
						write(ar6[1],&s,sizeof(int));
						close(ar6[1]);	 
						exit(0);   }		
							else{
							int cpid6 = fork();
							if(cpid6 == 0)
							{ s= sumofAll(600,700,arr); 
							write(ar7[1],&s,sizeof(int));
							close(ar7[1]);	 
							exit(0);   }
								else{
								int cpid7 = fork();
								if(cpid7 == 0)
								{ s= sumofAll(700,800,arr); 
								write(ar8[1],&s,sizeof(int));
								close(ar8[1]);	 
								exit(0);   }
									else{
									int cpid8 = fork();
									if(cpid8 == 0)
									{ s= sumofAll(800,900,arr); 
									write(ar9[1],&s,sizeof(int));
									close(ar9[1]);	 
									exit(0);   }
										else{
										int cpid9 = fork();
										if(cpid9 == 0)
										{ s= sumofAll(900,1000,arr); 
										  write(ar10[1],&s,sizeof(int));
										  close(ar10[1]);	 
										  exit(0);   }
	}
	}
	}
	}
	}
	}
	}
	}
	}
	read(ar1[0],&r1,sizeof(int));
	read(ar2[0],&r2,sizeof(int));
	read(ar3[0],&r3,sizeof(int));
	read(ar4[0],&r4,sizeof(int));
	read(ar5[0],&r5,sizeof(int));
	read(ar6[0],&r6,sizeof(int));
	read(ar7[0],&r7,sizeof(int));
	read(ar8[0],&r8,sizeof(int));
	read(ar9[0],&r9,sizeof(int));
	read(ar10[0],&r10,sizeof(int));
	close(ar1[0]);
	close(ar2[0]);
	close(ar3[0]);
	close(ar4[0]);
	close(ar5[0]);
	close(ar6[0]);
	close(ar7[0]);
	close(ar8[0]);
	close(ar9[0]);
	close(ar10[0]);
	int sum=0;
	sum=sum+r1;
	sum=sum+r2;
	sum=sum+r3;
	sum=sum+r4;
	sum=sum+r5;
	sum=sum+r6;
	sum=sum+r7;
	sum=sum+r8;
	sum=sum+r9;
	sum=sum+r10;
	printf("sum is %d\n",sum);


}
