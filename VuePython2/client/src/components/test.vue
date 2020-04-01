<template>
<div id="components-demo">
<thichnhathaan></thichnhathaan>
    <!-- the above line create a new instance of the component -->
    <div :style="{ fontSize: postFontSize + 'em' }">
        <blogPost
            v-for="post in posts"
            v-bind:key="post.id"
            v-bind:post="post"
            v-on:enlarge-text="postFontSize += 0.1"
        ></blogPost>
    </div>
</div>
</template>

<script>
//  to make a component reusable first import it
import thichnhathaan from './buttonComp';
import blogPost from './blog'
export default {
    components : {
        thichnhathaan,
        blogPost
    },
    data : function(){
        return {
            posts : [
            { id: 1, title: 'My journey with Vue' },
            { id: 2, title: 'Blogging with Vue' },
            { id: 3, title: 'Why Vue is so fun'}
        ]
        } 
    },
    method : function(){
        
    },
    postFontSize: 1
}
</script>
