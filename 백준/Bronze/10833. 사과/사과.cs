int n = int.Parse(Console.ReadLine());
int res = 0;
for(int i = 0; i < n; i++)
{
    string str = Console.ReadLine();
    string[] num = str.Split();
    res += int.Parse(num[1]) % int.Parse(num[0]);
}
Console.Write(res);