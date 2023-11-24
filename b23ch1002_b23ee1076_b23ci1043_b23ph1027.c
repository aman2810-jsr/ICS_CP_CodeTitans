#include<stdio.h>
#include<string.h>
#define F "fever"
#define V "visit"
#define R "registration"
#define I "inpatient"
#define O "outpatient"
#define cbp "CBP"
#define crp "CRP"
#define ns1 "NS1"
#define na "NA"

  FILE*fp;
  void CBP()
  {
    char c[50];
    scanf("%s",c);
    fputs("\nTEST NAME\t\t\tRESULT\tUNIT\t\tBIOLOGICAL REFERNCE",fp);
    float r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13;
    printf("ENTER RESULTS OF HAEMOGLOBIN");
    scanf("%f",&r1);
    fprintf(fp,"\nHAEMOGLOBIN:\t\t%.2f\tgm/dL\t\t\t13.0-17.0",r1);
    printf("ENTER RESULTS OF TOTAL RBC COUNT");
    scanf("%f",&r2);
    fprintf(fp,"\nTOTAL RBC COUNT:\t%.2f\tCells/cumm\t\t4.5-5.5",r2);
    printf("ENTER RESULTS OF HEMATOCRIT");
    scanf("%f",&r3);
    fprintf(fp,"\nHEMATOCRIT:\t\t\t%.2f\t%%\t\t\t\t40.0-50.0",r3);
    printf("ENTER RESULTS OF MCV");
    scanf("%f",&r4);
    fprintf(fp,"\nMCV:\t\t\t\t%.2f\tfL\t\t\t\t83.0-101.0",r4);
    printf("ENTER RESULTS OF MCH");
    scanf("%f",&r5);
    fprintf(fp,"\nMCH:\t\t\t\t%.2f\tpg\t\t\t\t27.0-32.0",r5);
    printf("ENTER RESULTS OF MCHC");
    scanf("%f",&r6);
    fprintf(fp,"\nMCHC:\t\t\t\t%.2f\tgm/dL\t\t\t31.5-34.5",r6);
    printf("ENTER RESULTS OF RDW");
    scanf("%f",&r7);
    fprintf(fp,"\nRDW:\t\t\t\t%.2f\t%%\t\t\t\t11.6-14.0",r7);
    printf("ENTER RESULTS OF WBC COUNT");
    scanf("%f",&r8);
    fprintf(fp,"\nWBC COUNT:\t\t\t%.2f\tCells/cumm\t\t4000-10000",r8);
    printf("ENTER RESULTS OF NEUTROPHILS");
    scanf("%f",&r9);
    fprintf(fp,"\nNEUTROPHILS:\t\t%.1f\t%%\t\t\t\t40-80",r9);
    printf("ENTER RESULTS OF LYMPHOCYTES");
    scanf("%f",&r10);
    fprintf(fp,"\nLYMPHOCYTES:\t\t%.2f\t%%\t\t\t\t20-40",r10);
    printf("ENTER RESULTS OF EOSINOPHILS");
    scanf("%f",&r11);
    fprintf(fp,"\nEOSINOPHILS:\t\t%.2f\t%%\t\t\t\t1-6",r11);
    printf("ENTER RESULTS OF MONOCYTES");
    scanf("%f",&r12);
    fprintf(fp,"\nMONOCYTES:\t\t\t%.2f\t%%\t\t\t\t2-10",r12);
    printf("ENTER RESULTS OF BASOPHILS");
    scanf("%f",&r13);
    fprintf(fp,"\nBASOPHILS:\t\t\t%.2f\t%%\t\t\t\t0-2",r13);
    fprintf(fp,"\n\t\t\t\t\t\tSIGNATURE\n\t\t\t\t\t\tPATHOLOGIST\n\t\t\t\t\t\t");
    fputs(c,fp);
  }
  void CRP()
  {
    printf("ENTER THE RESULT OF THE CRP TEST");
    float r;
    scanf("%f",&r);
    fputs("\nTEST NAME\t\tRESULTS\t\tUNITS\t\tREFERENCE INTERVAL",fp);
    fprintf(fp,"\nCRP\t\t\t\t%.2f\t\tmg/L\t\t<5.00",r);
  }
  void NS1()
  {
    printf("ENTER THE RESULT OF THE NS1 TEST");
    float r;
    scanf("%f",&r);
    fputs("\nTEST NAME\t\tRESULTS\t\tREFERENCE INTERVAL",fp);
    fprintf(fp,"\nDENGUE NS1\t\t%.2f\t\t<0.90",r);
  }
  void search()
  {
    printf("ENTER THE NAME OF DOCTOR (OR) PATIENT WITH REGISTRATION NO:");
    FILE* fp1;
    char s[100],S[]=".txt";
    scanf("%s",s);
    strcat(s,S);
    fp1=fopen(s,"r");
    int c;
    while ((c = fgetc(fp1)) != EOF) 
    {
        putchar(c);
    }
  }
int main()
{
  FILE* fp2;
  FILE* fp3;
  fp2=fopen("records1.txt","a");
  char reason_of_visit[20];
  printf("visit or registration:\n");
  scanf("%s",reason_of_visit);
  if(strcmp(V,reason_of_visit)==0){
    search();
  }
  else if(strcmp(R,reason_of_visit)==0)
  {
  char name_file[50];
  printf("ENTER THE FILE NAME WITH NAME OF PATIENT AND REGISTRATION NO\n");
  scanf("%s",name_file);
  fp=fopen(name_file,"w+");
  printf("FirstName:\n");
  char firstname[20],lastname[20],sex[50];
  scanf("%s",firstname);
    printf("lastName:\n");
    scanf("%s",lastname);
  fputs("NAME:",fp);
  fputs(firstname,fp);
   fputs(" ",fp);
  fputs(lastname,fp);
fputs(firstname,fp2);
  printf("Sex:\n");
  scanf("%s",sex);
  fputs("\nSEX:",fp);
  fputs(sex,fp);
  printf("Age:\n");
  int age;
  scanf("%d",&age);
  fprintf(fp,"\nAge:%d", age);
  printf("Mobile.No: ");
  long long  mobile_no;
  scanf("%lld",&mobile_no);
  fprintf(fp,"\nMobile.No: %lld",mobile_no);
  fprintf(fp2,"\t\t%lld",mobile_no);
  char purpose_of_visit[1024];
  printf("Purpose of Visit(in one word):\n");
  scanf("%s",purpose_of_visit);
  fputs("\nPurpose of visit:",fp);
  fputs(purpose_of_visit,fp);
  char doctor_firstname[100],doctor_lastname[100];
  printf("Doctor to visit:\n");
  printf("Doctor first name:\n");
  scanf("%s",doctor_firstname);
   printf("Doctor last name:\n");
  scanf("%s",doctor_lastname);
  fputs("\nDoctor to visit:",fp);
  fputs(doctor_firstname,fp);
   fputs(" ",fp);
  fputs(doctor_lastname,fp);
  printf("Go to the nurse for basic medical tests\n");
  float height;
  float weight;
  int uBP,lBP;
  int spO2;
  printf("Enter the Height of patient: \n");
  scanf("%f",&height);
  fprintf(fp,"\nHeight:%.2f",height);
    printf("Enter the Weight of patient: \n");
    scanf("%f",&weight);
    fprintf(fp,"\nWeight:%.2f kg",weight);
    printf("Enter the BP of patient: \n");
    scanf("%d%d",&uBP,&lBP);
    fprintf(fp,"\nBP:%d/%d",uBP,lBP);
    printf("Enter the spO2 of patient: \n");
    scanf("%d",&spO2);
    fprintf(fp,"\nSP02:%d",spO2);
    if(strcmp(purpose_of_visit,F)==0){
      float temp;
      printf("Enter The Temperature");
      scanf("%f",&temp);
     fprintf(fp,"\nTemperature:%.2f",temp);
    }
    printf("Go To the doctor");
    char test1[40],test2[40],test3[40];
    printf("TEST1:");
    scanf("%s",test1);
    printf("TEST2:");
    scanf("%s",test2);
     printf("TEST3:");
    scanf("%s",test3);
  if(strcmp(test1,cbp)==0)
  {
    CBP();
  }
   else if(strcmp(test1,crp)==0)
   {
    CRP();
    }
    else if(strcmp(test1,ns1)==0) 
    {
      NS1();
    }
    else 
    {
      fprintf(fp,"\nTEST 1:NA");
    }
     if(strcmp(test2,cbp)==0)
  {
    CBP();
  }
  
   else if(strcmp(test2,crp)==0)
   {
    CRP();
    }
    else if(strcmp(test2,ns1)==0) 
       {
      NS1();
    }
     else 
    {
      fprintf(fp,"\nTEST 2:NA");
    }

    if(strcmp(test3,cbp)==0)
  {
    CBP();
  }
  
   else if(strcmp(test3,crp)==0)
   {
    CRP();
    }
    else if(strcmp(test2,ns1)==0) 
    {
      NS1();
    }
    else 
    {
      fprintf(fp,"\nTEST 3:NA\n");
    }


printf("AFTER RESULTS");
printf("IN PATIENT OR OUT PATIENT");
char inout[50];
scanf("%s",inout);
if(strcmp(I,inout)==0)
{
 fputs("\t\t IN PATIENT\n",fp2);
}
else
{
  fputs("\t\t OUT PATIENT\n",fp2);
}
printf("ENTER THE MEDICINE WITH DOSAGE");
char m1[20],m2[20],m3[20],m4[20],m5[20];
int dos1,dos2,dos3,dos4,dos5;
scanf("%s",m1);
scanf("%d",&dos1);
fputs("Medicine1:",fp);
fputs(m1,fp);
fprintf(fp,"  %d\n",dos1);
scanf("%s",m2);
scanf("%d",&dos2);
fputs("Medicine2:",fp);
fputs(m2,fp);
fprintf(fp,"  %d\n",dos2);
scanf("%s",m3);
scanf("%d",&dos3);
fputs("Medicine3:",fp);
fputs(m3,fp);
fprintf(fp,"  %d\n",dos3);
scanf("%s",m4);
scanf("%d",&dos4);
fputs("Medicine4:",fp);
fputs(m4,fp);
fprintf(fp,"  %d\n",dos4);
scanf("%s",m5);
scanf("%d",&dos5);
fputs("Medicine5:",fp);
fputs(m4,fp);
fprintf(fp,"  %d\n",dos5);    
fclose(fp);
fclose(fp2);
  }
return 0;
}
