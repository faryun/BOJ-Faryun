int n = int.Parse(Console.ReadLine());
string str = Console.ReadLine();
string[] num = str.Split(' ');
int sum = 0;
for(int i = 0; i < 3; i++)
{
    if(int.Parse(num[i]) <= n) sum += int.Parse(num[i]);
    else sum += n;
}
Console.Write(sum);