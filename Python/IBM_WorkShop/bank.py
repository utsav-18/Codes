import pandas as pd
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt
import seaborn as sns 
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import silhouette_samples, silhouette_score


df = pd.read_csv('bank.csv')

# print(df.head())
 

data_df = df   

# print(df.duplicated().sum())

x = StandardScaler()

#scaling data
# keep your original slicing idea (columns 1 to 5), but now it's applied to the real dataframe
scaled_df = pd.DataFrame(x.fit_transform(data_df.iloc[:,1:6]), columns=data_df.columns[1:6])

# scaled_df

k_mean = KMeans(n_clusters=2, random_state=1, n_init=10)
k_mean.fit(scaled_df)
# k_mean.labels_
# print(k_mean.labels_)
print(k_mean.inertia_)

k_mean = KMeans(n_clusters=3, random_state=1, n_init=10)
k_mean.fit(scaled_df)
# k_mean.labels_
# print(k_mean.labels_)
print(k_mean.inertia_)

k_mean = KMeans(n_clusters=4, random_state=1, n_init=10)
k_mean.fit(scaled_df)
# k_mean.labels_
# print(k_mean.labels_)
print(k_mean.inertia_)

k_mean = KMeans(n_clusters=5, random_state=1, n_init=10)
k_mean.fit(scaled_df)
# k_mean.labels_
# print(k_mean.labels_)
print(k_mean.inertia_)

k_mean = KMeans(n_clusters=6, random_state=1, n_init=10)
k_mean.fit(scaled_df)
# k_mean.labels_
# print(k_mean.labels_)
print(k_mean.inertia_)


wss=[]


max_k = min(10, scaled_df.shape[0])   
for i in range(1, max_k+1):
    KM = KMeans(n_clusters=i, random_state=1, n_init=10)
    KM.fit(scaled_df)
    wss.append(KM.inertia_)

# print(wss)

plt.plot(range(1, max_k + 1), wss, marker='o')
plt.title('Elbow Method for Optimal k')
plt.xlabel('Number of Clusters')
plt.ylabel('WSS (Inertia)')
plt.show()

