string str = Console.ReadLine();
string[] s = str.Split(' ');
int n = int.Parse(s[0]);
int total = int.Parse(s[1]);
int sum = 0;
List<int> solve = new();
for(int i = 0; i < n; i++)
{
    int temp = int.Parse(Console.ReadLine());
    sum += temp;
    solve.Add(temp);
}
for(int j = 0; j < n; j++) Console.WriteLine(total / sum * solve[j]);