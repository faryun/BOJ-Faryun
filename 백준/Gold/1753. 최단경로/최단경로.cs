List<List<(int vertex, int weight)>> Graph = new List<List<(int vertex, int weight)>>(); //가중치 그래프
//입력
string str = Console.ReadLine();
string[] arr = str.Split(' ');
int V = int.Parse(arr[0]); //정점 수
int E = int.Parse(arr[1]); //간선 수
for(int g = 0; g <= V; g++) Graph.Add(new List<(int, int)>());
int start = int.Parse(Console.ReadLine()); //출발지
for(int i = 0; i < E; i++)
{
	string stri = Console.ReadLine();
	string[] sti = stri.Split(' ');
	int u = int.Parse(sti[0]);
	int v = int.Parse(sti[1]);
	int w = int.Parse(sti[2]);
	Graph[u].Add((v, w));
}

bool[] check = new bool[Graph.Count]; // 방문 체크
int[] res = Dijkstra(Graph, start);
for(int o = 1; o < res.Length; o++)
{
    if(check[o]) Console.WriteLine(res[o]);
    else Console.WriteLine("INF");
}

int[] Dijkstra(List<List<(int, int)>> g, int s) //다익스트라
{	
	int node = s; //현재 노드
	int[] d = new int[g.Count]; //최단거리 저장 배열
	for(int t = 0; t < g.Count; t++) //거리 초기화
	{
		if(t == s) d[t] = 0;
		else d[t] = System.Int32.MaxValue;
	}
	
	for(int t = 0; t < g.Count; t++)
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
	}
	return d;		
}