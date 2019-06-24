import pandas as pd

df = pd.read_csv("data.csv")

y = df.pop("threshold")
X = df

from sklearn.svm import LinearSVR
svr = LinearSVR(epsilon=0.2)
svr.fit(X, y)

print(svr.intercept_)
print(svr.coef_)
