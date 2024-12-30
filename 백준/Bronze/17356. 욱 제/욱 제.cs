string str = Console.ReadLine();
string[] s = str.Split(' ');
double a = double.Parse(s[0]);
double b = double.Parse(s[1]);
double d = (b - a) / 400;
Console.Write(1 / (1 + Math.Pow(10, d)));