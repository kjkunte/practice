class HashMap{
    constructor(intialCapacity=2) {
        this.buckets = new Array(initilCapacity);
    }

    set(key,value) {
        const index = this.getIndex(key);
        this.buckets[index] = value;
    }

    get(key){
        const index = this.getIndex(key);
        return this.buckets[index];
    }

    hash(key){
        return key.toString().length;
    }

    getIndex(key){
        const indexHash = this.hash(key);
        const index = indexHash  % this.buckets.length;
        return index;
    }

}
module.exports = HashMap;
    const assert = require('assert');
    const hasMap =  new HaspMap();
    hashMap.set('cat',2);
    hashMap.set('rat',7);
    hashMap.set('dog',1);
    hashMap.set('art',8);

    console.log(hashMap.buckets);

    