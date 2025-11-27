//입력
int n = int.Parse(Console.ReadLine());
List<int> nums = new() {0};
string str = Console.ReadLine();
string[] arr = str.Split(' ');
for(int s = 0; s < n; s++) nums.Add(int.Parse(arr[s]));
List<int> LIS = new() {0};
List<int> res = new() {0};
bool b;

//LIS 계산
for(int i = 1; i <= n; i++)
{
    b = false;
    for(int j = 1; j < LIS.Count; j++)
    {
        if(LIS[j] >= nums[i])
        {
            LIS[j] = nums[i];
            b = true;
            break;
        }
    }
    if(b) continue;
    if(nums[i] > LIS[LIS.Count - 1]) 
    {
        LIS.Add(nums[i]);
        res.Add(res.Count);
    }
}

//출력
Console.Write(res[res.Count - 1]);