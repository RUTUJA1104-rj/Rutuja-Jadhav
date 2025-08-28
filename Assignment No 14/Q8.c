#include <stdio.h>
struct Distance {
    int feet;
    int inch;
};
void display(struct Distance ) ;
struct Distance storedistance();
int main() 
{
    struct Distance d1;

    d1 =storedistance ();     
    display(d1);      

}
struct Distance storedistance()
 {
    struct Distance dis;
    scanf("%d", &dis.feet);
    scanf("%d", &dis.inch);

   
    if(dis.inch >= 12) {
        dis.feet += dis.inch / 12;
        dis.inch = dis.inch % 12;
    }
    return dis;
}
void display(struct Distance d) 
{
    printf("Distance = %d\n",d.feet);
	printf("inch = %d \n",d.inch);
}

