#include <stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.14
 void main()
 {
     int num,i=1;
     char s;
     printf(" WELCOME");
     printf("\n\n  choose one of the number \n 1 =  triangle \n 2 = rectangel \n 3 = square\n 4= circle\n 5=cylinder\n");
     scanf(" %d",&num);
     switch( num)
     {
     case 1:

        printf("  \nchoose\n  A =  area \n B = perimmeter \n ");


        scanf(" %c",&s);

         for ( int i=1;i<=1;i++)
         {
          if (  s== 'a' || s== 'A')
            {



             int n;
             float area,rc;
             printf("\n Choose the formula to find the area\n Enter \n   1  =  0.5*length * breath \n   2 = sqrt(s(s-a)(s-b)s-c))\n    3 = 0.5* ab*sinc\n  ");
             scanf(" %d",&n);
             if ( n== 1)
             {
                 int len , br;
                 printf(" Enter the length and breath of triangle  :\n");
                 scanf("%d%d",&len,&br);
                 area = 0.5 * len * br;
                 printf("  The area of triangle is %.2f \n",area);

             }
             else if ( n== 2 )
             {
                 int  n1,n2,n3;
                 float s;
                 printf(" Enter the  length of three side of triangle \n");
                 scanf(" %d%d%d",&n1,&n2,&n3);
                 s= (n1+n2+n3)/3;
                 area = sqrt( s*(s-n1)*(s-n2)*(s-n3));
                 printf(" The area of triangle is %.2f\n", area);
             }
             else if (n== 3)
             {
                 int a, b,c;
                 printf(" Enter the two side of triangle which makes angle in triangle\n");
                 scanf(" %d%d",&a,&b );
                 printf(" Enter the angle between two sides \n ");
                 scanf(" %d",&c);
                 rc= ( c* PI)/180;
                 area=0.5*a*b*sin(rc);
                 printf(" Area of triangel is %.2f",area);


             }
             else {
                i=i--;
                printf(" again ");
                continue;
             }

        }
        else
        {
            int z,x,m,sum=0;
            printf(" Enter  the three side of triangle\n");

                scanf("%d%d%d",&z,&x,&m);
                sum= z+x+m;

                 float peri= sum/3;
            printf(" The perimeter of trtiangle is %.2f\n");
        }
        break;

        case 2:
            printf("  \nchoose\n  A =  area \n B = perimmeter \n ");
            float area;
            int length, breath ,diagonal,n4,i=1;

            scanf(" %c",&s);
            for (i=0;i<=1;i++)
            {


            switch ( s)
            {
            case 'A':
            case 'a':
                printf(" Choose one formula and enter the number of formula to used\n");
                printf( " length and breath is khown = 1\n length and diagonal are khown = 2\n");
                scanf("%d",&n4);
                if ( n4==1)
                {
                    printf(" Enter the length and breath of triangle\n");
                    scanf(" %d%d",&length ,&breath);
                    area= length*breath;
                    printf (" Area of rectangel is %f\n",area);

                }
                else
                {
                    printf(" \nEnter the length and diagonal of rectangel");
                    scanf("%d%d",&length,&diagonal);
                    area= length*sqrt( diagonal*diagonal- length*length);
                    printf(" The area of rectangle is %.2f\n",area);

                }
                break;
                case 'b':
                case 'B':
                  printf( "\nEntre the length and breath of reactange\n");
                scanf(" %d%d",&length ,&breath);
                  printf(" The perimeter of rectangle is %f",2*(length+breath));
                  break;
                 default :
                    printf(" Enter  only the a or b\n");

            }

}
}
}        }



