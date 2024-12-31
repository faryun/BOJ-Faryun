string str = Console.ReadLine();
string[] s = str.Split(' ');
int ab = int.Parse(s[0]) * int.Parse(s[1]);
int cd = int.Parse(s[2]) * int.Parse(s[3]);
if(ab > cd) Console.Write("M");
else if (cd > ab) Console.Write("P");
else Console.Write("E");