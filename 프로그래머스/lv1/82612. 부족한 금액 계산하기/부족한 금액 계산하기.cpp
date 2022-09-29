using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = money;
    
    for(int i = 0; i < count; i++)
        answer -= price * (i + 1);

    return answer < 0 ? answer *= -1 : 0;;
}