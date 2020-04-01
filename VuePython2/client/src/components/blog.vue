<template>
<div class="blog-post">
    <h3> {{post.title}} </h3>
    <!-- This is the child component called the blog which will emit an event 
    of v-on and this event will be listened by the parent componenet instance -->
     <button v-on:click="$emit('enlarge-text')">
        Enlarge text
      </button>
    <div v-html="content"></div>
</div>
</template>


<script>
export default {
    name : 'blogPost',
    props:['post']
}
</script>