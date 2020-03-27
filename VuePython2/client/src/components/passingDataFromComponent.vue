<template>
    <button v-on:click="count++">You clicked me {{ count }} times.</button>
</template>

<script>
export default {
    // Data is the default function that is called on v-on:click
     data: function(){
        return {
            count: 0
        }
    }
}
</script>