int T = int.Parse(Console.ReadLine());
int[,] temp;
for(int t = 0; t < T; t++)
{
	//입력
	string s = Console.ReadLine();
	string[] size = s.Split(' ');
	int m = int.Parse(size[0]);
	int n = int.Parse(size[1]);
	int k = int.Parse(size[2]);
	int[,] field = new int[m, n];
	int res = 0;
	for(int i = 0; i < k; i++)
	{
		string p = Console.ReadLine();
		string[] point = p.Split(' ');
		int x = int.Parse(point[0]);
		int y = int.Parse(point[1]);
		field[x, y] = 1;
	}
	temp = field;

	//처리
	for(int a = 0; a < temp.GetLength(0); a++)
	{
		for(int b = 0; b < temp.GetLength(1); b++)
		{
			if(temp[a,b] == 1)
			{
				temp[a,b] = 2;
				dfs(a, b);
				res++;
			}
		}
	}
	
	Console.WriteLine(res);
}

void dfs(int x, int y)
{
	int[] dx = {0, 0, 1, -1};
	int[] dy = {1, -1, 0, 0};
	for(int d = 0; d < 4; d++)
	{
		int nx = x + dx[d];
		int ny = y + dy[d];
        if(nx < 0 || nx >= temp.GetLength(0) || ny < 0 || ny >= temp.GetLength(1)) continue;
		if(temp[nx, ny] == 1)
		{
			temp[nx, ny] = 2;
			dfs(nx, ny);
		}
	}
}