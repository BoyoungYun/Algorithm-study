var people = [40,40,50,60,70];
var limit = 100;
function solution(people, limit) {
    var answer = 0;
    people.sort((a,b)=>a-b);
    for(var i in people)
    {
        for(var j=people.length-1; j>0; j--)
        {
            if(people[i]+people[j]<=limit)
            {
                people.pop();
                people.shift();
                j--;
            }
            else
            {
                people.pop();
            }
            answer++;
        }
    }
    if(people.length===1) answer++;
    return answer;
}