import numpy as np
import pandas as pd
from scipy.cluster.hierarchy import fcluster
from scipy.cluster.hierarchy import dendrogram, linkage
from sklearn.cluster import AgglomerativeClustering
import matplotlib.pyplot as plt


df = pd.read_csv('Engg_College_Data.csv')

df.head()
df.shape
df.info()

df.Engg_College.nunique()

df.describe() 

enggdata = df.iloc[:,1:7] 
enggdata.head()


link_method = linkage(enggdata.iloc[:,1:6], method = 'average')
labelList = np.array(enggdata.Engg_College)
labelList

dend = dendrogram(link_method,labels = labelList)
dend = dendrogram(link_method,
                 truncate_mode='lastp',
                 p = 10,
                 labels = labelList 
                 )

# Set criterion as maxclust,then create 3 clusters, and store the result in another object 'clusters'

clusters = fcluster(link_method, 3, criterion='maxclust')
clusters

df['clusters'] = clusters
df.head()
df.clusters.value_counts().sort_index()
df.iloc[:,1:8]

aggdata=df.iloc[:,2:8].groupby('clusters').mean()
aggdata['Freq']=df.clusters.value_counts().sort_index()
aggdata

cluster = AgglomerativeClustering(n_clusters=3, linkage='average')
Cluster_agglo=cluster.fit_predict(enggdata.iloc[:,1:6])
print(Cluster_agglo)

df["Agglo_CLusters"]=Cluster_agglo
df.columns

agglo_data=df.drop(["SR_NO","clusters","Engg_College"],axis=1).groupby('Agglo_CLusters').mean()
agglo_data['Freq']=df.Agglo_CLusters.value_counts().sort_index()
agglo_data

dendrogram(link_method, labels=labelList, leaf_rotation=90)
plt.title("Hierarchical Clustering Dendrogram")
plt.xlabel("Engineering Colleges")
plt.ylabel("Distance")
plt.tight_layout()
plt.show()
