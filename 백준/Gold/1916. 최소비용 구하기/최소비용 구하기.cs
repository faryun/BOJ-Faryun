List<List<(int vertex, int weight)>> Graph = new List<List<(int vertex, int weight)>>(); //가중치 그래프
//입력
int n = int.Parse(Console.ReadLine()); //정점 수
int m = int.Parse(Console.ReadLine()); //간선 수
for(int g = 0; g <= n; g++) Graph.Add(new List<(int, int)>());
for(int i = 0; i < m; i++)
{
	string stri = Console.ReadLine();
	string[] sti = stri.Split(' ');
	int s = int.Parse(sti[0]);
	int e = int.Parse(sti[1]);
	int p = int.Parse(sti[2]);
	Graph[s].Add((e, p));
}
string str = Console.ReadLine();
string[] st = str.Split(' ');
int start = int.Parse(st[0]); //출발지
int end = int.Parse(st[1]); //도착지

Console.Write(Dijkstra(Graph, start, end));

int Dijkstra(List<List<(int, int)>> g, int s, int e) //다익스트라
{	
	int node = s; //현재 노드
	int[] d = new int[g.Count]; //최단거리 저장 배열
	bool[] check = new bool[g.Count]; // 방문 체크
	for(int t = 0; t < g.Count; t++) //거리 초기화
	{
		if(t == s) d[t] = 0;
		else d[t] = System.Int32.MaxValue;
	}
	
	while(true)
	{
		foreach((int neighbor, int weight) in g[node]) //거리 갱신
		{
    			int newDist = d[node] + weight;
    			if(newDist < d[neighbor]) d[neighbor] = newDist;
    		}
		
		check[node] = true; //노드 방문 완료

		int temp = System.Int32.MaxValue; //다음 노드 찾기
		for(int i = 0; i < d.Length - 1; i++)
		{
			if(temp > d[i + 1] && !check[i + 1])
			{
				node = i + 1;
				temp = d[i + 1];
			}
		}
		
		if(check[e]) break;
	}
	return d[e];		
}