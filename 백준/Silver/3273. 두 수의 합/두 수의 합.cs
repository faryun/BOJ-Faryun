int n = int.Parse(Console.ReadLine());
string str = Console.ReadLine();
string[] sa = str.Split(' ');
List<int> nums = new List<int>();
foreach(string st in sa) nums.Add(int.Parse(st));
nums.Sort();
int x = int.Parse(Console.ReadLine());
int res = 0;
int s = 0, e = nums.Count - 1;
while(true)
{
	if(s == e) break;
	if(nums[s] + nums[e] == x)
	{
		res++;
		e--;
	}
	else if(nums[s] + nums[e] > x) e--;
	else s++;
}
Console.Write(res);