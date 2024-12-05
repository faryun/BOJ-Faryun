string str = Console.ReadLine();
string[] num = str.Split(' ');
int t = int.Parse(num[0]);
int d = int.Parse(num[1]);

if(t >= 12 && t <= 16 && d == 0) Console.Write(320);
else Console.Write(280);