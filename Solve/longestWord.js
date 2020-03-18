function findLongestWordLength(str) {
  var str1 = '';
  str1 = str.split('')
  count = 0;
  spaceIndex = 0
 console.log(str1.length)
  for(var i = str1.length - 1; i>=0; i--){
    if(str1[i] === ' '){
      diff = i - count;
      count = i;
      console.log(diff)
    }
  }
  console.log(str1)
}

findLongestWordLength("The quick brown fox jumped over the lazy dog");

  