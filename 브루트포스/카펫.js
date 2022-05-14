var brown = 10;
var yellow = 2;
solution(brown,yellow);
function solution(brown, yellow) {
    var answer = [];
    var quotient = [];
    for(var i=0; i<=yellow; i++)
    {
        if(yellow%i===0)
        {
            for(var j=0; j<=yellow; j++)
            {
                if(i*j===yellow)
                {
                    quotient.push([i,j]);
                }
            }
        }
    }
    for(var i=0; i<quotient.length; i++)
    {
        var width = quotient[i][0] + 2;
        var height = quotient[i][1];
        if(width*2+height*2 === brown && width>=height+2)
        {
            answer.push([width,height]);
        }
    }
    return answer;
}