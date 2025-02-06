int n = int.Parse(Console.ReadLine());
int res = 0;
for(int i = 0; i < n; i++)
{
    string str = Console.ReadLine();
    string[] s = str.Split(" ");
    int w = int.Parse(s[0]);
    if(w == 154) res += 50000;
    else if(w == 148) res += 10000;
    else if(w == 142) res += 5000;
    else res += 1000;
}
Console.Write(res);