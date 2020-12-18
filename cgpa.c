#include<stdio.h>
struct intr_marks{
float seminar,project,assignment,assessment,total;
};
struct subject{
char sub_name[100];
struct intr_marks internals;
float mid_marks,extr_marks;
int total_marks;
};
void main(){
int sub_count=0,stu_count,num,i,sem,yr,grade_point,total_gradepoint=0;
printf("ENTER THE NUMBER OF STUDENTS:");
scanf("%d",&stu_count);
for(int k=0;k<stu_count;k++){
printf("\n ENTER THE DETAILS OF THE STUDENT NO:%d\n\n",k+1);
printf("ENTER THE ACADEMIC YEAR:");
scanf("%d",&yr);
printf("ENTER THE SEMESTER NUMBER:");
scanf("%d",&sem);
printf("ENTER THE NUMBER OF SUBJECTS:");
scanf("%d",&num);
struct subject sname[num];
for(i=0;i<num;i++){
printf("ENTER THE NAME OF THE SUBJECT NO:%d:",i+1);
scanf("%s",sname[i].sub_name); 
printf("ENTER THE SEMINAR MARKS(OUT OF 25):");
scanf("%f",&sname[i].internals.seminar);
printf("ENTER THE PROJECT  MARKS(OUT OF 25):");
scanf("%f",&sname[i].internals.project);
printf("ENTER THE ASSIGNMENT MARKS(OUT OF 25):");
scanf("%f",&sname[i].internals.assignment);
printf("ENTER THE ASSESSMENT MARKS(OUT OF 25):");
scanf("%f",&sname[i].internals.assessment);
printf("ENTER THE MIDSEM MARKS(OUT OF 100):");
scanf("%f",&sname[i].mid_marks);
printf("ENTER THE EXTERNALS MARKS(OUT OF 100:");
scanf("%f",&sname[i].extr_marks);
}
for(i=0;i<num;i++){
sname[i].internals.total=(sname[i].internals.seminar+sname[i].internals.project+sname[i].internals.assignment+sname[i].internals.assessment)*0.4;
sname[i].mid_marks*=0.2;
sname[i].internals.total+=sname[i].mid_marks;
sname[i].extr_marks*=0.4;
sname[i].total_marks=sname[i].internals.total+sname[i].extr_marks;
if((sname[i].internals.total<30.0)&&(sname[i].total_marks<50)){
sub_count++;
printf("SORRY!REDO %s IN THE SEM NO:%d IN %d\n",sname[i].sub_name,sem+2,yr+1);
}
else if((sname[i].internals.total>=30.0) &&(sname[i].total_marks<50)){
sub_count++;
if(sem%2==0)
printf("SORRY!YOU HAVE AN ARREAR IN %s & CLEAR IT IN THE SEM NO:%d IN %d\n",sname[i].sub_name,sem+1,yr);
else
printf("SORRY!YOU HAVE AN ARREAR IN %s & CLEAR IT IN THE SEM NO:%d IN %d\n",sname[i].sub_name,sem+1,yr+1);
}
else
printf("CONGRATS!YOU HAVE CLEARED %s",sname[i].sub_name);
switch(sname[i].total_marks/10){
case 10:
case 9:
grade_point=10;
total_gradepoint+=grade_point;
printf("\n YOUR GRADE POINT IN %s IS %d",sname[i].sub_name,grade_point);
break;
case 8: 
grade_point=9;
total_gradepoint+=grade_point;
printf("\n YOUR GRADE POINT IN %s IS %d",sname[i].sub_name,grade_point);
break;
case 7:
grade_point=8;
total_gradepoint+=grade_point;
printf("\n YOUR GRADE POINT IN %s IS %d",sname[i].sub_name,grade_point);
break;						
case 6:
grade_point=7;
total_gradepoint+=grade_point;
printf("\n YOUR GRADE POINT IN %s IS %d",sname[i].sub_name,grade_point);
break;
case 5:     
grade_point=6;
total_gradepoint+=grade_point;
printf("\n YOUR GRADE POINT IN %s IS %d",sname[i].sub_name,grade_point);
break;
default:
grade_point=0;
total_gradepoint+=grade_point;
printf("\n YOUR GRADE POINT IN %s IS %d",sname[i].sub_name,grade_point);
break;
}
}   
num-=subcount;
printf("GPA(OUT OF 10)IS %f",num,(float)total_gradepoint/num);
}
}			
}