<!-- Your View-->
<template>
    <div> 
        <ul>
            <li v-for="cat in cats" :key="cat.name">{{cat.name}}</li>
        </ul>
    </div>
</template>

<!-- Your Script-->
<script>
export default {
    data : () => ({
        cats : [
            {name: "kitkat"},
            {name: "fish"},
            {name:"henry"}
        ]
    })
}
</script>

<!-- Your Style-->
<style scoped>

</style>