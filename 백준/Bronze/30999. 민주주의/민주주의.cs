string t = Console.ReadLine();
string[] num = t.Split(' ');
int n = int.Parse(num[0]);
int m = int.Parse(num[1]);
int res = 0;
for(int i = 0; i < n; i++)
{
    string str = Console.ReadLine();
    int temp = 0;
    for(int j = 0; j < m; j++)
    {
        if(str[j] == 'O') temp++;
    }
    if(temp >= m / 2 + 1) res++;
}
Console.Write(res);