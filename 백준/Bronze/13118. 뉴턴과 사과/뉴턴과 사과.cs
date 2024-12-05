string str = Console.ReadLine();
string str2 = Console.ReadLine();
string[] p = str.Split(' ');
string[] a = str2.Split(' ');
int n = 0;

for(int i = 0; i < p.Length; i++)
{
    if(p[i] == a[0]) 
    {
        n = i+1;
        break;
    }
}

Console.Write(n);