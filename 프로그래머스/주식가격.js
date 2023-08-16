function solution(prices) {
    var answer = [];
    for(var i=0; i<prices.length; i++)
    {
        var sum = 0;
        for(var j=i+1; j<prices.length; j++)
        {
            sum++;
            if(prices[i] > prices[j]) break;
        }
        answer.push(sum);
    }
    return answer;
}