string str = Console.ReadLine();
string[] arr = str.Split(' ');
int n = int.Parse(arr[0]);
int k = int.Parse(arr[1]);
List<int> weights = new();
List<int> values = new();
for(int i = 0; i < n; i++)
{
    str = Console.ReadLine();
	arr = str.Split(' ');
	int w = int.Parse(arr[0]); //무게
	int v = int.Parse(arr[1]); //가치
	weights.Add(w);
	values.Add(v);
}
Console.Write(nap(k, weights, values));

int nap(int max_w, List<int> weights, List<int> values)
{
	int len = values.Count;
	int[,] dp = new int[len + 1, max_w + 1];
	for(int i = 1; i < len + 1; i++)
    {
        for(int w = 1; w < max_w + 1; w++)
        {
            if(weights[i - 1] <= w)
            {
                dp[i, w] = Math.Max(dp[i - 1, w], dp[i - 1, w - weights[i - 1]] + values[i - 1]);
            }
			else dp[i, w] = dp[i - 1, w];
        }
    }
	return dp[len, max_w];
}