string str = Console.ReadLine();
string[] n = str.Split(' ');
List<long> temp = new();
for(int i = 0; i < 3; i++)
{
    temp.Add(long.Parse(n[i]));
}

temp.Sort();
Console.Write(temp[1]);