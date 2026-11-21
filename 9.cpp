// #include<stdio.h>
// int main()
// {

//     int fis, sed, thir;
//     int max, mid ,min;
//     scanf("%d%d%d",&fis,&sed,&thir);
//     if(fis >= sed && fis >= thir){
//         max = fis;
//          if(sed >= thir){
//           mid = sed;
//           min = thir;
//         }else{
//           mid = thir;
//           min = sed;
//         }
//     }else if(sed >= fis && sed >= thir){
//         max = sed;
//          if(fis >= thir){
//           mid = fis;
//           min = thir;
//         }else{
//           mid = fis;
//           min = thir;
//         }
//     }else{
//       max = thir;
//           if(fis >= sed){
//               mid = fis;
//               min = sed;
//           }else{
//               mid = sed;
//               min = fis;
//           }
//     }
//     printf("%d -> %d -> %d",min, mid ,max);
//     return 0;
        
// }
#include<stdio.h>
#include<math.h>
int main()
{


    double a , b, c, x;
    double area, s;
    s = (a + b + c)*0.5;
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a + b < c){
        x = "These sides do not correspond to a valid triangle";
    }else{
        x =area ,s;
    }
    printf("%.2f", x);
    return 0;
}
