#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_10,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_11,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_12,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_13,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_14,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_15,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_16,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_17,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_18,SIGNAL(clicked()),this,SLOT(lol3()));

}










MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button=(QPushButton*)sender();
    QString All_numbers;
    All_numbers=(ui->result_show->text()+button->text());
    QString  new_Label;
    new_Label=All_numbers;
    ui->result_show->setText(new_Label);
}

void MainWindow::lol3()
{

    QString All_numbers;
    QPushButton *button=(QPushButton*)sender();
    All_numbers=(ui->result_show->text()+button->text());
    //////////взятие значения на кнопке
    char a[25];
    const QByteArray stringData = All_numbers.toUtf8();
    a[qMin(99,stringData.size())]='\0';
    std::copy(stringData.constBegin(),stringData.constBegin()+qMin(99,stringData.size()),a);

    char re_array[50];
    char c[1];
    int d, b, l, z, x, j, q, t, wafer, one;
    d = b = z = x = q = t = one = 0;
    l = 3;
    int m, n;
    n = j = 1;
    m = 0;
    int one_array[14];
    int two_array[4];
    int three_array[20];
    char five_array[50];
    int one_secret;
    one_secret = 0;
    int mi;
    int lole = 0;
    int gig[20];
    int nnn[20];
    int ccc[20];
    int yyy[10];
    int uuu[10];
    int ddd[10];
    int lip[10];
    int rip[5];
    lole = 0;
    mi = 1;
    int ri = 0;
    int i;
    int il = 0;
    int puni = 0;
    int ld = 0;
    //--------------------------------------

    int giga = 0;
    const  int DIM1 = 5;
    const   int DIM2 = 5;
    char five_array_2[20];
    int ary[DIM1][DIM2];
    int counter[DIM1][DIM2];
    int qm = 0;
    int qt = 0;
    int xc = 0;
    int xz = 0;
    int lk = 0;
    int gt = 0;
    int rp = 0;
    int rs = 1;
    int ss = 0;
    int gs = 0;
    i = 0;
    memcpy(re_array, a, strlen(a) + 1);

    i = 0;
    for (i; i < 20; i++)
    {
        if ((int)a[i] == 40 && (int)a[i-1] == 40)
        {
            gs++;
        }

    }



    lole = 0;
    i = 0;

    xc = 0;
    i = 3;

    for (i; i < 20; i++)
    {
        five_array[xc] = a[i];
        if ((int)a[i] == 41)
        {
            five_array[xc] = a[i];
            five_array[xc + 1] = '(';
            xc++;
            i++;
        }
        if ((int)a[i + 1] == 40)
        {
            five_array[xc] = ')';
            five_array[xc + 1] = a[i];
        }
        xc++;

    }

  //-----
    for (int i = 0; i < 20; i++)
    {
        giga++;
        if ((int)a[i] == 40 && (int)a[i + 3] != 40)
        {
            lip[lole] = giga;

            gig[lole] = i;

            lole++;
            puni = lole;


        }
        if ((int)a[i] == 41)
        {
            gig[lole] = i;

        }


    }
//-----




//------
    lole = 0;
    for (int i = 0; i < 20; i++)
    {
        if ((int)a[i] == 41)
        {
            ddd[lole] = i;
            //lole++;
            i = 20;
        }
    }
    i = ddd[lole];

    for (i; i < 20; i++)
    {
        if ((int)a[i] == 40)
        {
            gt++;
        }
    }

//------



    lole = 0;
    for (int i = 0; i < 20; i++)
    {
        if ((int)five_array[i] == 40)
        {
            ddd[lole] = i;
            lole++;
        }
    }

    lole = 0;


    for (int i = 0; i < 20; i++)
    {

        if ((int)five_array[i] == 41)
        {
            yyy[lole] = i;
            lole++;
        }


    }

    lole = 0;
    for (int i = 0; i < 20; i++)
    {
        if ((int)a[i] == 40)
        {
            ddd[lole] = i;
            lole++;
        }
    }

    lole = 0;

    for (int i = 0; i < 20; i++)
    {
        if ((int)a[i] == 40)
        {
            qt++;
        }
    }
    //  -------------
      for (int i = 0; i < 20; i++)
      {
          if ((int)a[i] == 41)
          {
              xc = i;
              while ((int)a[i] != 40)
              {
                  i++;
                  if ((int)a[i] == 40)
                  {
                      lk++;
                  }

              }

          }

      }

      if (gt>0)
      {



      for (int i = 0; i < 20; i++)
      {
          if ((int)a[i] == 41)
          {
              a[i + 1] = '(';
          }
          if ((int)a[i+2] == 40)
          {
              a[i + 1] = ')';
          }
      }

      }

      lk--;
      five_array[0] = '(';

      if (qt >= 3 || qt < 3 && lk>0)
      {

          for (int lole = 0; lole < puni; lole++)  //формирование нового массива
          {
              i = 8; //gig[lole];
              for (i; i <20 ; i++) //
              {


                  if ((int)a[i] == 40)
                  {
                      if ((int)a[i] == 40 && (int)a[i + 1] == 40)
                      {
                          i = i + 1;
                      }


                      i = i + 1;


                      while ((int)a[i] != 40 && mi < 17 || (int)a[i] != 41 && mi < 17)
                      {
                          five_array[mi] = a[i];
                          i++;
                          mi++;
                          if ((int)a[i + 1] == 43 && (int)a[i + 2] == 40)
                          {
                              five_array[mi] = a[i];
                              mi++;
                              i = i + 2;
                          }



                          if ((int)a[i] == 40 || (int)a[i] == 41)
                          {
                              if ((int)a[i + 3] == 40)
                              {
                                  i = i + 3;
                              }

                              five_array[mi] = ')';
                              mi = mi + 1;

                              while ((int)a[i] != 40)
                              {
                                  i++;
                              }

                              five_array[mi] = '(';
                              mi = mi + 1;
                              i++;
                          }
                      }
                  }
              }
          }

      }


      if (qt < 3)
      {
          for (int lole = 0; lole < puni; lole++)
          {

              b = gig[lole];
              i = gig[lole] + 1;

              for (b; b < i; b++)
              {


                  if ((int)a[b] == 40)
                  {



                      b = b + 1;
                      if ((int)a[b + 1] == 43 || (int)a[b + 1] == 45)
                      {
                          b = b + 2;
                      }

                      while ((int)a[b] != 43 && (int)a[b] != 40 && mi < 20)
                      {
                          five_array[mi] = a[b];
                          b++;
                          mi++;
                          if ((int)a[b] == 43 && (int)a[b + 2] == 43 || (int)a[b] == 45 && (int)a[b] != 40)
                          {
                              five_array[mi] = ')';
                              five_array[mi + 1] = '(';
                              mi = mi + 2;
                              b = b + 3;

                          }
                          if ((int)a[b] == 43 || (int)a[b] == 45 && (int)a[b] != 40)
                          {
                              five_array[mi] = ')';
                              five_array[mi + 1] = '(';
                              mi = mi + 2;

                              if ((int)a[i + 2] == 43)
                              {
                                  b = b + 3;
                              }
                              else
                              {
                                  b++;
                              }
                          }
                      }

                  }
              }
          }
      }


     if (qt >= 3 || qt < 3 && lk>0)
     {
          mi = 1;
          i = 0;

          for (i; i < 1; i++)
          {

              if ((int)a[i] != 41)
              {
                  five_array_2[0] = '(';
                  five_array_2[mi] = a[i];
                  i = i + 1;
                  mi = mi + 1;

                  while ((int)a[i] != 40)
                  {
                      five_array_2[mi] = a[i];
                      i++;
                      mi++;
                      if ((int)a[i + 1] == 40)
                      {

                          five_array_2[mi] = ')';
                          mi = mi + 3;
                      }
                  }
              }

          }

          i = 0;
          for (i; i < 20; i++)
          {
              if ((int)five_array[i] == 41)
              {

                  xc++;

                  if (xc == puni)
                  {
                      xc = i;
                      xz = xc;

                  }
              }
          }
          i = 0;

          xc = 15;
          i = 16;
          b = i;
          for (b; b < 20; b++)
          {
              if ((int)a[b] == 41)
              {
                  i = b;

                  five_array[xc] = '(';
                  xc++;
                  i = i + 2;

                  while ((int)a[i] != 40 )
                  {

                      five_array[xc] = a[i];
                      if ((int)a[i + 1] == 41)
                      {
                          xc++;
                          five_array[xc] = ')';


                      }
                      i++;
                      xc++;
                  }
              }
          }
     }


     xc = 0;
     i = 0;

     if (gs == 1)
     {
         for (i; i < 20; i++)
         {
             if((int)a[i]==42 || (int)a[i + 2] == 47)
             {




                 five_array[xc] = '(';
                 xc++;
                 five_array[xc] = a[i - 1];
                 xc++;
                 five_array[xc] = a[i];
                 xc++;
                 five_array[xc] = a[i+1];
                 xc++;

                 if ((int)a[i+2] == 42 || (int)a[i + 2] == 47 )
                 {
                     while ((int)a[i] != 43 || (int)a[i] != 41 && i < 20)
                     {



                         five_array[xc] = a[i ];
                         xc++;
                         i++;


                     }
                 }

                 five_array[xc] = ')';
                 xc++;
             }

         }

     }

    for (xz; xz < 25; xz++)
    {
        if (five_array[xz] == 42)
        {
            puni = puni + 1;

        }
    }


    i = 0;
    for (i; i < 24; i++)
    {
        if ((int)five_array[i] == 41)
        {
            lip[0] = 0;
            lip[il + 1] = i;
            il++;

        }

    }
    for (int lole = 0; lole < puni; lole++)
    {
        i = lip[lole + 1];
        b = lip[lole] + 1;
        if (lole == 0)
        {
            b = 0;

        }



        for (b; b < i; b = b + 2)
        {

            if ((int)five_array[b] == 47)
            {
                c[0] = five_array[b - 1];
                d = atoi(c);
                one_array[m] = d;
                c[0] = five_array[b + 1];
                d = atoi(c);
                one_array[n] = d;
                one_array[m] = one_array[m] / one_array[n];
                ary[lole][m] = one_array[m];

                if ((int)five_array[b + 2] == 42 || (int)five_array[b + 2] == 47)
                {
                    while ((int)five_array[b + 2] == 42 || (int)five_array[b + 2] == 47)
                    {
                        if ((int)five_array[b + 2] == 42)
                        {
                            b = b + 2;
                            c[0] = a[b + 1];
                            d = atoi(c);
                            one_array[n] = d;

                            one_array[m] = one_array[m] * one_array[n];
                            ary[lole][m] = one_array[m];
                        }
                        if ((int)five_array[b + 2] == 47)
                        {
                            b = b + 2;
                            c[0] = five_array[b + 1];
                            d = atoi(c);
                            one_array[n] = d;

                            one_array[m] = one_array[m] / one_array[n];
                            ary[lole][m] = one_array[m];
                        }
                    }if ((int)five_array[z + 2] == 43 || (int)five_array[z + 2] == 45)
                    {
                        b = b + 2;
                        ary[lole][m] = one_array[m];
                        m = m + 1; n = n + 1;
                    }
                }
                else  b = b + 2;
                ary[lole][m] = one_array[m];
                m = m + 1; n = n + 1;
            }
            if ((int)five_array[b] == 42)
            {
                c[0] = five_array[b - 1];
                d = atoi(c);
                one_array[m] = d;
                c[0] = five_array[b + 1];
                d = atoi(c);
                one_array[n] = d;
                one_array[m] = one_array[m] * one_array[n];
                if ((int)five_array[b + 2] == 42 || (int)five_array[b + 2] == 47)
                {
                    while ((int)five_array[b + 2] == 42 || (int)five_array[b + 2] == 47)
                    {
                        if ((int)five_array[b + 2] == 42)
                        {
                            b = b + 2;
                            c[0] = five_array[b + 1];
                            d = atoi(c);
                            one_array[n] = d;

                            one_array[m] = one_array[m] * one_array[n];
                            ary[lole][m] = one_array[m];
                        }
                        if ((int)five_array[b + 2] == 47)
                        {
                            b = b + 2;
                            c[0] = five_array[b + 1];
                            d = atoi(c);
                            one_array[n] = d;

                            one_array[m] = one_array[m] / one_array[n];

                            ary[lole][m] = one_array[m];
                        }

                    }if ((int)five_array[z + 2] == 43 || (int)five_array[z + 2] == 45)
                    {
                        b = b + 2;
                        ary[lole][m] = one_array[m];
                        m = m + 1; n = n + 1;
                    }

                }
                else  b = b + 2;
                ary[lole][lole] = one_array[m];
                m = m + 1; n = n + 1;
            }
        };
    };
    ary[0][0];
    mi = 0;

    if (qt < 3)
    {

    for (int i = 0; i < 20; i++)
    {
        if ((int)a[i] == 42)
        {
            mi++;
        }
    }



    qm = 0;
    lole = 0;
    counter[lole][qm] = 0;



    for (lole; lole < puni; lole++) //+1;
    {

        qm++;
        i = gig[lole + 1];
        z = gig[lole];

        for (z; z < i; z = z + 1)
        {


           if ((int)a[z] == 43 &&qt==2)
           {

                if ((int)a[z - 2] == 45 && (int)a[z + 2] == 42 && (int)a[z] == 43 && rp == 0 )
                {
                    ary[0][0] = ary[0][0] + ary[rs][rs];
                    rs++;/////

                    rp++;
                }

                if ((int)a[z - 2] == 42 && (int)a[z + 2] == 45 && (int)a[z] == 43 && rp == 0)
                {
                    ary[0][0] = ary[0][0] + ary[rs][rs];
                    rs++;/////

                    rp++;
                }

                if ((int)a[z - 2] == 45 && (int)a[z + 2] == 45 && (int)a[z] == 43 && rp == 0)
                {
                    ary[0][0] = ary[0][0] + ary[rs][rs];
                    rs++;/////

                    rp++;

                }
                if ((int)a[z - 2] == 42 && (int)a[z + 2] == 42 && (int)a[z] == 43 && rp == 0)
                {
                    ary[0][0] = ary[0][0] + ary[rs][rs];
                    rs++;/////

                    rp++;
                    ary[1][1] = -1;

                }

                if ((int)a[z - 2] == 45 && (int)a[z + 2] == 42 && (int)a[z] == 47 && rp == 0)
                {
                    ary[0][0] = ary[0][0] + ary[rs][rs];
                    rs++;/////

                    rp++;
                }

                if ((int)a[z - 2] == 42 && (int)a[z + 2] == 45 && (int)a[z] == 47 && rp == 0)
                {
                    ary[0][0] = ary[0][0] + ary[rs][rs];
                    rs++;/////

                    rp++;
                }

                if ((int)a[z - 2] == 45 && (int)a[z + 2] == 45 && (int)a[z] == 47 && rp == 0)
                {
                    ary[0][0] = ary[0][0] + ary[rs][rs];
                    rs++;/////

                    rp++;
                }
                if ((int)a[z - 2] == 42 && (int)a[z + 2] == 42 && (int)a[z] == 47 && rp == 0)
                {
                    ary[0][0] = ary[0][0] + ary[rs][rs];
                    rs++;/////

                    rp++;
                }

            }


            if ((int)a[z - 1] == 40 && (int)a[z + 1] == 45 || (int)a[z - 1] == 40 && (int)a[z + 1] == 43 )
            {

                if ((int)a[z - 1] == 40 && (int)a[z + 1] == 45 && ary[lole][lole] > 0)
                {
                    c[0] = a[z];
                    d = atoi(c);
                    q = d;
                    ary[lole][lole] = q - ary[lole][lole];
                    z = z + 5;
                }
                if ((int)a[z - 1] == 40 && (int)a[z + 1] == 43 && ary[lole][lole] > 0)
                {
                    c[0] = a[z];
                    d = atoi(c);
                    q = d;
                    z = z + 5;
                    ary[lole][lole] = q + ary[lole][lole];
                }
            }

            if (((int)a[z + 2] == 43 && ary[lole][lole] < 0  || (int)a[z + 2] == 45  && ary[lole][lole] < 0  ) )
            {

                if ((int)a[z + 2] == 43 || (int)a[z + 2] == 45)
                {
                    if ((int)a[z + 2] == 43)
                    {
                        c[0] = a[z + 1];
                        d = atoi(c);
                        q = d;
                        counter[lole][qm] = q;


                        c[0] = a[z + 3];
                        d = atoi(c);
                        q = d;
                        counter[lole][qm] = counter[lole][qm] + q;
                        z = z + 2;

                        if ((int)a[z + 2] == 42 || (int)a[z + 2] == 47 || (int)a[z + 2] == 41)
                        {
                            z = z + 1;
                        }
                        else while ((int)a[z + 2] == 43 || (int)a[z + 2] == 45)
                        {
                            if ((int)a[z + 2] == 43 || (int)a[z + 2] == 45)
                            {
                                if ((int)a[z + 2] == 43)
                                {

                                    if ((int)a[z + 4] == 42 || (int)a[z + 4] == 47)
                                    {
                                        ary[lole][lole] = ary[lole][lole] + counter[lole][qm]; z = z + 1;

                                    }
                                    c[0] = a[z + 3];
                                    d = atoi(c);
                                    q = d;
                                    counter[lole][qm] = counter[lole][qm] + q;
                                    z = z + 2;

                                }
                            }   if ((int)a[z + 2] == 45)
                            {
                                c[0] = a[z + 1];
                                d = atoi(c);
                                q = d;
                                counter[lole][qm] = counter[lole][qm] - q;
                                z = z + 2;
                                if ((int)a[z + 2] == 42 || (int)a[z + 2] == 47 || (int)a[z + 2] == 41)
                                {
                                    z = z + 1;
                                }

                            }
                        }

                    }

                    if ((int)a[z + 2] == 45)
                    {
                        if ((int)a[z + 2] == 45)
                        {

                            c[0] = a[z + 1];
                            d = atoi(c);
                            q = d;
                            counter[lole][qm] = q;
                            c[0] = a[z + 3];
                            d = atoi(c);
                            q = d;
                            counter[lole][qm] = counter[lole][qm] - q;
                            z = z + 2;
                            if ((int)a[z + 2] == 42 || (int)a[z + 2] == 47 || (int)a[z + 2] == 41)
                            {

                                z = z + 1;
                            }
                            else while ((int)a[z + 2] == 43 || (int)a[z + 2] == 45)
                            {
                                if ((int)a[z + 2] == 43 || (int)a[z + 2] == 45)
                                {
                                    if ((int)a[z + 2] == 43)
                                    {
                                        c[0] = a[z + 3];
                                        d = atoi(c);
                                        q = d;
                                        counter[lole][qm] = counter[lole][qm] + q;
                                        z = z + 2;
                                        if ((int)a[z + 2] == 42 || (int)a[z + 2] == 47 || (int)a[z + 2] == 41)
                                        {
                                            z = z + 1;
                                        }
                                    }
                                }   if ((int)a[z + 2] == 45)
                                {
                                    c[0] = a[z + 3];
                                    d = atoi(c);
                                    q = d;
                                    counter[lole][qm] = counter[lole][qm] - q;
                                    z = z + 2;
                                    if ((int)a[z + 2] == 42 || (int)a[z + 2] == 47 || (int)a[z + 2] == 41)
                                    {
                                        z = z + 1;
                                    }
                                }
                            }


                        }
                    }

                }
            }

            //Сложение элементов массива
            if ((int)a[z] == 43 &&rp==0)
            {


                if ((int)a[z + 2] == 43 || (int)a[z + 2] == 41 || (int)a[z + 2] == 45 || (int)a[z + 2] == 41)
                {
                    c[0] = a[z + 1];
                    d = atoi(c);
                    q = d;
                    ary[lole][lole] = ary[lole][lole] + q;

                }
                if ((int)a[z + 2] == 43)
                {
                    z = z + 1;


                }
                else if ((int)a[z + 2] == 42 || (int)a[z + 2] == 47)
                {

                    ss = ss + 1;
                    ary[lole][lole] = ary[lole][lole] + ary[ss][ss];


                }
            }
            if ((int)a[z] == 45 && rp == 0)
            {

                if ((int)a[z + 2] == 43 || (int)a[z + 2] == 45 || (int)a[z + 2] == 41)
                {
                    c[0] = a[z + 1];
                    d = atoi(c);
                    q = d;
                    ary[lole][lole] = ary[lole][lole] - q;

                }
                if ((int)a[z + 2] == 45 || (int)a[z + 2] == 43)
                {
                    z = z + 1;
                }
                else if ((int)a[z + 2] == 42 || (int)a[z + 2] == 47)
                {
                    ary[lole][lole] = ary[lole][lole] - ary[qt][qt];
                    j = j + 1;

                }
            }

        }

    }
}

   if ( qt >=3 || lk>0)
   {


        b = 0;
        xc = 0;
        puni = 0;
        m = 0;
        qt = puni;
        for (b; b < 25; b = b + 1)
        {
            if ((int)a[b] == 40)
            {
                gig[xc] = b;
                xc = xc + 1;
                puni++;
            }


            if ((int)a[b] == 41)
            {
                lip[m] = b;
                m++;
            }



        }

        m = 0;

        for (int i = 0; i < 20; i++)
        {
            if ((int)a[i] == 41)
            {
                xc = i;

                while ((int)a[i] != 40)
                {
                    i++;
                    if ((int)a[i] == 40)
                    {

                        if ((int)a[xc + 1] == 42 && (int)a[xc + 2] == 40)
                        {

                            ary[1][1] = ary[0][0] * ary[1][1];
                        }
                        if ((int)a[xc + 1] == 43 && (int)a[xc + 2] == 40)
                        {

                            ary[1][1] = ary[0][0] + ary[1][1];
                        }
                        if ((int)a[xc + 1] == 47 && (int)a[xc + 2] == 40)
                        {

                            ary[1][1] = ary[0][0] / ary[1][1];
                        }
                        if ((int)a[xc + 1] == 45 && (int)a[xc + 2] == 40)
                        {

                            ary[1][1] = ary[0][0] - ary[1][1];
                        }
                    }

                }
            }
        }
   }

   if (qt >= 3)
   {
        xc = 0;
        for (puni; puni > 0; puni--)
        {

            z = gig[puni - 1];
            i = gig[puni - 2];
            xz = lip[m];
            m++;

            if (puni == 1)
            {
                i = 0;
            }

            for (z; z > i; z--)
            {


                if ((int)a[z] == 40 && puni > 1)
                {

                    if ((int)a[z - 1] == 42 || (int)a[z - 1] == 43 || (int)a[z - 1] == 45 || (int)a[z - 1] == 47 && puni > 1)
                    {

                        if ((int)a[z - 1] == 43 || (int)a[z - 1] == 45)
                        {


                            if ((int)a[z - 1] == 43 && puni > 1)
                            {
                                if ((int)a[xz + 1] == 41)
                                {

                                }
                                else if ((int)a[xz + 1] == 42 && (int)a[xz + 3] != 41)
                                {

                                    ary[1][1] = ary[1][1] * ary[3][3];

                                }
                                else if ((int)a[xz + 3] == 41 && (int)a[xz + 1] == 42)
                                {
                                    c[0] = a[xz + 2];
                                    d = atoi(c);
                                    q = d;
                                    ary[1][1] = ary[1][1] * q;
                                }

                                if ((int)a[xz + 1] == 41)
                                {

                                }
                                else if ((int)a[xz + 1] == 43 && (int)a[xz + 3] != 41)
                                {

                                    ary[1][1] = ary[1][1] + ary[3][3];
                                }
                                else if ((int)a[xz + 3] == 41 && (int)a[xz + 1] == 43)
                                {
                                    c[0] = a[xz + 2];
                                    d = atoi(c);
                                    q = d;
                                    ary[1][1] = ary[1][1] + q;
                                }

                                if ((int)a[z - 1] == 43 && (int)a[z - 3] != 40)
                                {

                                    ary[1][1] = ary[1][1] + ary[0][0];
                                }
                                else if ((int)a[z - 1] == 43 && (int)a[z - 3] == 40)
                                {
                                    c[0] = a[z - 2];
                                    d = atoi(c);
                                    q = d;

                                    ary[1][1] = ary[1][1] + q;
                                    xc++;
                                }

                            }
                            else if ((int)a[z - 1] == 45 && puni > 1)
                            {

                                if ((int)a[xz + 1] == 41)
                                {

                                }
                                else if ((int)a[xz + 1] == 47 && (int)a[xz + 3] != 41 && puni > 1)
                                {

                                    ary[1][1] = ary[1][1] / ary[3][3];
                                }
                                else if ((int)a[xz + 3] == 41)
                                {
                                    c[0] = a[xz + 2];
                                    d = atoi(c);
                                    q = d;
                                    ary[1][1] = ary[1][1] / q;
                                }

                                if ((int)a[xz + 1] == 41)
                                {

                                }
                                else if ((int)a[xz + 1] == 45 && (int)a[xz + 3] != 41)
                                {

                                    ary[1][1] = ary[1][1] - ary[3][3];
                                }
                                else if ((int)a[xz + 3] == 41)
                                {
                                    c[0] = a[xz + 2];
                                    d = atoi(c);
                                    q = d;
                                    ary[1][1] = ary[1][1] - q;
                                }


                                c[0] = a[z - 2];
                                d = atoi(c);
                                q = d;
                                ary[1][1] = ary[1][1] - q;


                            }



                        }


                    }

                }


            }
        }

   }




    int *gggg=&counter[0][1];
   All_numbers=QString::number(*gggg);

   ui->result_show->setText(All_numbers);


























   ui->result_show->setText(All_numbers);

}








