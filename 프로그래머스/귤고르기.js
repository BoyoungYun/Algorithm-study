function solution(k, tangerine) {
    let answer = 0;
    let map = new Map();
    for(let i=0; i<tangerine.length; i++)
    {
        if(!map.get(tangerine[i]))
        {
            map.set(tangerine[i], 1);
        }
        else map.set(tangerine[i], map.get(tangerine[i]) + 1);
    }
    let mapToArray = [...map];
    map = new Map(mapToArray.sort((a, b) => b[1] - a[1]));

    for (const [key, value] of map) {
        answer++;
        if(k > value) k -= value;
        else break;
    }

    return answer;
}