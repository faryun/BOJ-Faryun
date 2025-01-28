double w = double.Parse(Console.ReadLine());
double h = double.Parse(Console.ReadLine());
double bmi = (w / (h*h));
if(bmi > 25) Console.Write("Overweight");
else if(bmi >= 18.5) Console.Write("Normal weight");
else Console.Write("Underweight");
