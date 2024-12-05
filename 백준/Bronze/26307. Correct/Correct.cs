string str = Console.ReadLine();
string[] num = str.Split(' ');
Console.Write((int.Parse(num[0]) - 9) * 60 + int.Parse(num[1]));