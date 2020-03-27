// import Vue from 'vue'
// import Router from 'vue-router'

const routerOptions = [
    {path: '/', component: 'home'},
    {path: 'about', component: 'About'},
    {path: 'flVue', component: 'forloopsinVue'},
    {path: 'pdfc', component: 'passingDataFromComponent'},
    {path: 'test', component: 'test'}
]
// The .map will call a predefined callback function on the array and return an array of results
// Here the array is RouterOptions
const routes = routerOptions.map(route => {
    console.log(`@/components`)
    return {
        ...route,
        component: () =>
    import(`@/components/${route.component}.vue`)
    }
})

console.log(routes);
// Vue.use(Router)

// export default new Router
// ({
//     routes,
//     mode:'history'
// })
    