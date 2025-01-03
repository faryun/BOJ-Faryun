string str = Console.ReadLine();
string[] s = str.Split(' ');
int k = int.Parse(s[0]), w = int.Parse(s[1]), m = int.Parse(s[2]), res = 0;
while(true)
{
    if(k >= w) break;
    k += m;
    res++;
}
Console.Write(res);