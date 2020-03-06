import pandas as pd
import numpy as numpy
from bz2 import BZ2Compressor, BZ2Decompressor
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
import pickle

## Getting and parsing the data
training_data = pd.read_csv("iris.data")

## Appropriately name the columns; see details iris.data website
training_data.columns = [
    "sepal_length",
    "sepal_width",
    "petal_length",
    "petal_width",
    "class",
]

# Split up the columns of the dataframe above into features and labels

feature_cols = ["sepal_length", "sepal_width", 
"petal_length", "petal_width"]

label_cols = ["class"]

#sklearn can be pick with how the data is formatted

X = training_data.loc[:,feature_cols]
Y = training_data.loc[:, label_cols].values.ravel()

#Make our training and test sets

X_train, X_test, Y_train, Y_test = train_test_split(X,Y, test_size=0.33)

## Train a Model
# We use cross validation here, but you could also use a training-test set

#Instantiate and Fit the model:
logreg = LogisticRegression(
solver = "liblinear",
multi_class="ovr")

# only training variables are passed as parameters to fist the model
clf = logreg.fit(X_train, Y_train)

# See if the model is reasonable "To get the score the test data is provided"
print("Score: ", clf.score(X_test, Y_test))

#Pickle to save the model for use in our API
pickle.dump(clf, open("./our_model.pkl", "wb"))

