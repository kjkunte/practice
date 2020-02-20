<template>
  <v-container>
    <v-layout
      text-xs-center
      wrap
    >
      <v-flex>
<form>
        <v-text-field
        v-model="sepalLength"
        label="Sepal Length"
        required
        ></v-text-field>
         <v-text-field
        v-model="sepalLength"
        label="Sepal Width"
        required
        ></v-text-field>
         <v-text-field
        v-model="sepalLength"
        label="Petal Length"
        required
        ></v-text-field>
         <v-text-field
        v-model="sepalLength"
        label="Petal Width"
        required
        ></v-text-field>
<v-btn @click="submit">submit</v-btn>
        <v-btn @click="clear">clear</v-btn>
      </form> 
<br/>
<br/>
<h1 v-if="predictedClass"> Predicted Class is:{{ predictedClass}}
  </h1>   
      </v-flex>
    </v-layout>
  </v-container>
</template>