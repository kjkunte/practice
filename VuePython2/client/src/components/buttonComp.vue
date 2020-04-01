<template>
    <button v-on:click="count++">You clicked me {{ count }} times.</button>
</template>

<script>
export default {

    // Data is the default function that is called on v-on:click
    // Since data is a function, when we make this component reusable the data function will get called
    // on each seperate compoment individually
    name: 'buttonComp',
     data: function(){
        return {
            count: 0
        }
    }
}
</script>