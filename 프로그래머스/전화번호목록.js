function solution(phone_book) {
    var answer = true;
    var sort_book = phone_book.sort();
    
    for(var i=0; i<sort_book.length-1; i++)
    {
        for(var j=0; j<sort_book[i+1].length; j++)
        {
            if(sort_book[i] === sort_book[i+1].slice(0,j)) return false;
        }
    }
    return answer;
}