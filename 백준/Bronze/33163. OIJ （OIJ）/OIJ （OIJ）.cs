int n = int.Parse(Console.ReadLine());
string str = Console.ReadLine();
string res = string.Empty;
for(int i = 0; i < n; i++)
{
    if(str[i] == 'J') res += "O";
    else if(str[i] == 'O') res += "I";
    else res += "J";
}
Console.Write(res);