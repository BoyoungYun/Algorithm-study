function solution(k, dungeons) {
    var answer = 0;
    var answerArr = [];
    var tmp = k;
    var per = getPermutation(dungeons, dungeons.length);
    for(var i in per)
    {
        for(var j in dungeons)
        {
            if(k>=per[i][j][0])
            {
                k-=per[i][j][1];
                answer++;
            }
        }
        answerArr.push(answer);
        answer=0;
        k=tmp;
    }
    const max = Math.max.apply(null, answerArr);
    answer = max;
    return answer;
}
function getPermutation(dungeons, num)
{
    var result = [];
    if(num===1)
    {
        return dungeons.map(v=>[v]);
    }
    dungeons.forEach((items, idx, arr)=>{
        var rest = [...arr.slice(0,idx),...arr.slice(idx+1)];
        var permutations=getPermutation(rest, num-1);
        var attached = permutations.map((v)=>[items, ...v]);
        result.push(...attached);
    })
    return result;
}