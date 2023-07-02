double p1 = 0.51;
double p2 = 0.59;
double p3 = -0.15;

double w11 = 0.57;
double w12 = -0.79;
double w13 = 0.75;

double b = 0.8;

double n = 0;
double a = 0;

void setup() {
   Serial.begin(9600);

   n = (w11*p1) + (w12*p2) + (w13*p3) +b ;
   a = hardlim(n);

   Serial.print("Salida a: ");
   Serial.println(a);
}

void loop() {
  

}


double hardlim(double n)
{
  if(n>= 0) 
  {
    return 1.0;
  }
  else if(n<0) 
  {
    return 0.0;
  }
  
}
