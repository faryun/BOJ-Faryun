string str = Console.ReadLine();
string[] num = str.Split(' ');
if(int.Parse(num[0]) % int.Parse(num[1]) == 0) Console.Write("Yes");
else Console.Write("No");