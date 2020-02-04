function remove(array, element){
    console.log(array);             
    const index = search(array,element);  
    console.log("index ala" + index);  
    array.splice(index, 1); // By default if the first argument i.e index is not defiined, the splice function takes 0 as the index
    // console.log(array);
    return array;
}

function search(array, element){
        /*
    Trying to implement binary search
    -- first the array has to sorted
    -- second the size of the array has to be calculated
    }
    */

    for (i=0;i<array.length;i++) {
        if(array[i] > array[i+1]){
            var p = array[i];
            array[i] = array[i+1];
            array[i+1] = p;
        }
        console.log("---" + array);
    }
    // console.log(array.length);
     midIndex = array.length/2;
    // return index;
    while(array[midIndex]==element){
        if (array[midIndex] > element)
        {++midIndex;} else {--midIndex}   
    }
            return midIndex;
}

function callme(){ 
    const array1 = [0, 3, 1, 2]; // here the array is defined locally, but still its value is changed in the search function
    console.log(remove(array1,1));
}

callme();