#include <stdio.h>
#include <conio.h>
int main()
 {
    int n;
    scanf("%d", &n);
    
    int police = 0; 
    int c = 0;       

    for (int i = 0; i < n; i++) 
	{
        int event;
        scanf("%d", &event);
        if (event == -1) 
		{
            if (police > 0) 
			{
                police--; 
            } else
			 {
                c++; 
            }
        }
        else 
		{
        	police=police+event;
		}
    }
printf("%d\n", c);
return 0;
}
