#include <stdio.h>
#include  <conio.h>
    typedef struct {
        int x,y;
    }player1;
    typedef struct {
        int x,y;
    }player2;


void main()
{
        for (;;){
    player1 player1;
    player2 player2;
    char t[5][5],play1[20],play2[20];
    int TP1[2][9];
    int i,j,k,c=0,cc=0,gan=0,I=0,play;

                //************************************
                for (i=0;i<5;i++){
                        for (j=0;j<5;j++){
                            t[i][j]='.';
                        }
                //************************************
                }
                    printf ("\n\n");
                    for (i=0;i<5;i++){
                            printf ("\t\t%d",5-i);
                            for (j=0;j<5;j++){
                        printf ("  %c\t",t[i][j]);
                            }printf ("\n\n");
                    }printf ("  ");
                     printf ("\t\t ");
                        for (i=0;i<5;i++){
                            printf ("  %d\t",i+1);
                        }printf ("\n\n");
                //*************************************
                printf ("\t Donner le nome de joueure 1: ");
                fflush(stdin);
                scanf ("%s",play1);
                printf ("\n");

        //**********************************************************************PLAYER 1
                for (k=0;k<9;k++){

                if (k!=0){

                    printf ("\n\n");
                    for (i=0;i<5;i++){
                            printf ("\t\t%d",5-i);
                            for (j=0;j<5;j++){
                        t[4-(player1.x-1)][player1.y-1]='@';
                        printf ("  %c\t",t[i][j]);
                            }printf ("\n\n");

                    }
                        printf ("  ");
                        printf ("\t\t ");
                        for (i=0;i<5;i++){
                            printf ("  %d\t",i+1);
                        }printf ("\n\n");
                }
                    do {
                        printf ("   put your position {x,y} player 1:\n");
                        scanf ("%d%d",&player1.y,&player1.x);
                        }while (player1.x<1 || player1.x>5 || player1.y<1 || player1.y>5 ||t[5-player1.x][player1.y-1]!='.');
                                TP1[0][k]=player1.x;
                                TP1[1][k]=player1.y;

                            if (k==8){
                                    system ("cls");
                    printf ("\n\n");
                    for (i=0;i<5;i++){
                            printf ("\t\t%d",5-i);
                            for (j=0;j<5;j++){
                        t[4-(player1.x-1)][player1.y-1]='@';
                        printf ("  %c\t",t[i][j]);
                            }printf ("\n\n");


                    }
                        printf ("  ");
                        printf ("\t\t ");
                        for (i=0;i<5;i++){
                            printf ("  %d\t",i+1);
                        }printf ("\n");
                                system ("pause");
                            }
                        system ("cls");
                    }
                //system ("cls");

               /* for (i=0;i<2;i++){
                        for (j=0;j<9;j++){
                    printf ("%d ",TP1[i][j]);
                        }printf ("\n");
                }*/

         //******************************************************************************END PLAYER 1

                printf ("\n\t Donner le nome de joueure 2: ");
                fflush(stdin);
                scanf ("%s",play2);
                printf ("\n");
         //**********************************
                printf ("\n\n");
                for (i=0;i<5;i++){
                        printf ("\t\t%d",5-i);
                        for (j=0;j<5;j++){
                            t[i][j]='.';
                            printf ("  %c\t",t[i][j]);
                        }printf ("\n\n");
                }
                        printf ("  ");
                        printf ("\t\t ");
                        for (i=0;i<5;i++){
                            printf ("  %d\t",i+1);
                        }printf ("\n\n");
        //***********************************

            for (I=0;I<13;I++){ //i<b

                if (I!=0){

                    for (k=0;k<9;k++){
                        if (player2.x == TP1[0][k] && player2.y == TP1[1][k]){
                            c=1;
                            gan++;
                            printf ("\n\n");
                            for (i=0;i<5;i++){
                                    printf ("\t\t%d",5-i);
                                    for (j=0;j<5;j++){
                                t[4-(player2.x-1)][player2.y-1]='@';
                                   // if (i==player2.x-1 && j==player2.y-1)
                                   // {
                                    textcolor (2);
                                    printf ("  ");
                                    cprintf ("%c",t[i][j]);
                                    printf ("\t");
                                   // }/*else {
                                      //  printf ("  %c\t",t[i][j]);
                                    //}*/
                                    }printf ("\n\n");
                                    }
                                printf ("  ");
                                printf ("\t\t ");
                                for (i=0;i<5;i++){
                                    printf ("  %d\t",i+1);
                                }printf ("\n\n");
                                textcolor (2);
                              printf ("\t\t\t");
                              cprintf ("Missile %d {%d,%d} Navire (@) Touche -%d Missile.\n",I,player2.y,player2.x,12-I); //b-2
                              printf ("\n");
                                    break;
                        }

                    }

                       if (gan >= 9){
                        printf ("\tfin de partie.\n");
                        printf ("\t\t");
                        textcolor (2);
                        cprintf ("le joueur %s gagne.",play2);
                        printf ("\n");
                            if (cc==0){
                                printf ("\t\t");
                                cprintf ("you lose %d missile.",cc);
                                printf ("\n");
                            }else {
                                textcolor (4);
                                printf ("\t\t");
                               cprintf ("you lose %d missile.",cc);
                               printf ("\n");
                            }
                        break;
                    }



                    if (c != 1){
                        cc++;
                            printf ("\n\n");
                            for (i=0;i<5;i++){
                                    printf ("\t\t%d",5-i);
                                    for (j=0;j<5;j++){
                                t[4-(player2.x-1)][player2.y-1]='X';
                                //textcolor (4);
                                //printf ("  %c\t",t[i][j]);

                                    textcolor (4);
                                    printf ("  ");
                                    cprintf ("%c",t[i][j]);
                                    printf ("\t");
                                    }printf ("\n\n");
                                    }
                                printf ("  ");
                                printf ("\t\t ");
                                for (i=0;i<5;i++){
                                    printf ("  %d\t",i+1);
                                }printf ("\n\n");
                              printf ("\t\t\t");
                              textcolor (4);
                              cprintf ("Missile %d {%d,%d} Rater -%d Missile.\n",I,player2.y,player2.x,12-I); //b-2
                              printf ("\n");

                    }
                }

                    if (I==12){ //i==b-1
                        break;
                    }

                 do {
                printf ("   put your position {x,y} player 2:\n");
                scanf ("%d%d",&player2.y,&player2.x);
                    }while (player2.x<1 || player2.x>5 || player2.y<1 || player2.y>5 || t[5-player2.x][player2.y-1]=='X' || t[5-player2.x][player2.y-1]=='@' );
                    c=0;
            system ("cls");



                }
                    if (gan <9) {
                        printf ("\tfin de partie.\n");
                        printf ("\t\t");
                        textcolor (2);
                        cprintf ("le joueur %s gagne.",play1);
                        printf ("\n");
                        printf ("\t\t");
                        textcolor (4);
                        cprintf ("%s lose %d missile.",play2,cc);
                        printf ("\n");
                    }
                    printf ("  ");
                system("pause");
                printf ("\n\t\t\tplay again 1:yes 0:no: ");
                scanf ("%d",&play);
                    if (play==0){
                        exit();
                    }else {
                        system ("cls");
                    }
        }
            }
