// Online C compiler to run C program online
 #include <stdio.h>
 #include<string.h>
struct flight 
{
  char state[20];
  char city[20];
};


void state_s(struct flight f[28]);
void city_c(struct flight f1[44]);

int main()
{
  struct flight f[28];
  struct flight f1[44];
  int ch;

  //state
  strcpy(f[0].state,"Andhra Pradesh");
  strcpy(f[1].state,"Assam");
  strcpy(f[2].state,"Bihar");
  strcpy(f[3].state,"Chhattisgrah");
  strcpy(f[4].state,"New Delhi");
  strcpy(f[5].state,"Goa");
  strcpy(f[6].state,"Gujarat");
  strcpy(f[7].state,"Haryana");
  strcpy(f[8].state,"Jammu and Kashmir");
  strcpy(f[9].state,"Jharkhand");
  strcpy(f[10].state,"Karnataka");
  strcpy(f[11].state,"Kerala");
  strcpy(f[12].state,"Madhya Pradesh");
  strcpy(f[13].state,"Maharashtra");
  strcpy(f[14].state,"Odisha");
  strcpy(f[15].state,"Punjab");
  strcpy(f[16].state,"Rajasthan");
  strcpy(f[17].state,"Tamil Nadu");
  strcpy(f[18].state,"Himachal Pradesh");
  strcpy(f[19].state,"Daman and Diu");
  strcpy(f[20].state,"Arunachal Pradesh");
  strcpy(f[22].state,"Bihar");
  strcpy(f[23].state,"Andaman and Nicobar Islands");
  strcpy(f[24].state,"Uttar Pradesh");
  strcpy(f[25].state,"Telangana");
  strcpy(f[26].state,"West Bengal");
  strcpy(f[27].state,"Uttarakhand");


//city
  strcpy(f1[0].city,"Port Blair");
  strcpy(f1[1].city,"Triputi");
  strcpy(f1[2].city,"Pasighat");
  strcpy(f1[3].city,"Raipur");
  strcpy(f1[4].city,"Diu");
  strcpy(f1[5].city,"New Delhi");
  strcpy(f1[6].city,"Tezpur");
  strcpy(f1[7].city,"Rajkot");
  strcpy(f1[8].city,"Surat");
  strcpy(f1[9].city,"Karnal");
  strcpy(f1[10].city,"Shimla");
  strcpy(f1[11].city,"Jammu");
  strcpy(f1[12].city,"Jamshedpur");
  strcpy(f1[12].city,"Ranchi");
  strcpy(f1[13].city,"Mysore");
  strcpy(f1[14].city,"Agatti");
  strcpy(f1[15].city,"Satna");
  strcpy(f1[16].city,"Indore");
  strcpy(f1[17].city,"Nashik");
  strcpy(f1[18].city,"Mumbai");
  strcpy(f1[19].city,"Shilong");
  strcpy(f1[20].city,"Aizawl");
  strcpy(f1[21].city,"Dimapur");
  strcpy(f1[22].city,"Jeypore");
  strcpy(f1[23].city,"Pondichery");
  strcpy(f1[24].city,"Ludhiana");
  strcpy(f1[25].city,"Patiala");
  strcpy(f1[26].city,"Kota");
  strcpy(f1[27].city,"Gangtok");
  strcpy(f1[28].city,"Salem");
  strcpy(f1[29].city,"Hydrabad");
  strcpy(f1[30].city,"Agartala");
  strcpy(f1[31].city,"Agra");
  strcpy(f1[32].city,"Pantnagr");
  strcpy(f1[33].city,"Behala");
  strcpy(f1[34].city,"Cooch Behar");
  strcpy(f1[35].city,"Panagarh");
  strcpy(f1[36].city,"Kolhapur");
  strcpy(f1[37].city,"Belgaum");
  strcpy(f1[38].city,"Bhavnagar");
  strcpy(f1[39].city,"Bokaro");
  strcpy(f1[40].city,"satna");
  strcpy(f1[41].city,"Kullu");
  strcpy(f1[42].city,"Jeypore");
  strcpy(f1[43].city,"Pathankot");
  
  printf("\n");

  /// printf("\n");
  printf("\n1.for state to state destination");
  printf("\n");
  printf("\n2.for city to city(one state)");

  printf("\n");
  printf("\nenter your choice according to your wish= ");
  scanf("%d",&ch);

  switch(ch)
  {
    case 1:
            state_s(f);
            break;

    case 2:
            city_c(f1);
            break;
           
  }
  
  return 0;
}

void state_s(struct flight f[28])
{
  char str_from[20],str_to[20];
  int from=0,to=0;


           rechoice:
           printf("\n");
           printf("\nAndhra Pradesh \nAssam \nBihar \nChhattisgrah \nNew Delhi \nGoa \nGujarat \nHaryana \nJammu and Kashmir \nJharkhand \nKarnataka \nKerala \nMadhya Pradesh \nMaharashtra \nOdisha \nPunjab \nRajasthan \nTamil Nadu \nHimachal Pradesh \nDaman and Diu \nArunachal Pradesh \nBihar \nAndaman and Nicobar Islands \nUttar Pradesh \nTelangana \nWest Bengal \nUttarakhand");

           printf("\n");
           printf("\nenter the departure destination= ");
           scanf("%s",str_from);

           printf("\n");
           printf("\nenter the final destination= ");
           printf("\n");
           scanf("%s",str_to);

          if(str_from!=NULL)
          {
              for(int i=0;i<28;i++)
              {
                  if(strcmp(f[i].state,str_from)!=0)
                  {
                     from++;
                  }
              }
          }
          
         if(from==28)
         {
             printf("\n");
             printf("\nyou have inserted wrong infformation");
             goto rechoice;
         }
         else
         {
             printf("\n");
             printf("your departure destination=%s \n",str_from);
         }
          
         //////////////
         if(str_from!=NULL)
          {
              for(int i=0;i<28;i++)
              {
                  if(strcmp(f[i].state,str_from)!=0)
                  {
                     to++;
                  }
              }
          }
          
          
         if(to==28)
         {
             printf("\n");
             printf("\nyou have inserted wrong infformation");
             goto rechoice;
         }
         else
         {
             printf("\n");
             printf("your final destination=%s \n",str_to);
         }
}


void city_c(struct flight f1[44])
{
   char str_from[20],str_to[20];
   int from=0,to=0;

     rechoice:
           printf("\n");
           printf("\nPort Blair || Triputi || Pasighat \nRaipur || Diu || New Delhi \nTezpur || Rajkot || Surat \nKarnal || Shimla || Jammu \nJamshedpur || Ranchi || Mysore \nAgatti || Satna || Indore \nNashik || Mumbai || Shilong || Aizawl \nDimapur || Jeypore || Pondichery \nLudhiana || Patiala || Kota \nGangtok || Salem || Hydrabad \nAgartala || Agra || Pantnagr \nBehala || Cooch Behar || Panagarh \nKolhapur || Belgaum || Bhavnagar \nBokaro || satna || Kullu \nJeypore || Pathankot");
           printf("\n");
           printf("\nenter the departure destination= ");
           scanf("%s",str_from);

           printf("\n");
           printf("\nenter the final destination= ");
           scanf("%s",str_to);

          if(str_from!=NULL)
          {
              for(int i=0;i<44;i++)
              {
                  if(strcmp(f1[i].city,str_from)!=0)
                  {
                     from++;
                  }
              }
          }
          
         if(from==44)
         {
             printf("\n");
             printf("\nyou have inserted wrong infformation");
             goto rechoice;
         }
         else
         {
             printf("\n");
             printf("your departure destination=%s \n",str_from);
         }
          
         //////////////
         if(str_from!=NULL)
          {
              for(int i=0;i<44;i++)
              {
                  if(strcmp(f1[i].city,str_to)!=0)
                  {
                     to++;
                  }
              }
          }
          
         if(to==44)
         {
             printf("\n");
             printf("\nyou have inserted wrong infformation");
             goto rechoice;
         }
         else
         {
             printf("\n");
             printf("your final destination=%s \n",str_to);
         }
}
