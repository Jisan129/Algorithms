from elasticsearch import Elasticsearch

# Create an Elasticsearch client instance
es = Elasticsearch(['http://localhost:9200'])

# Define your index name
index_name = "my_index"

# Create the index (if it doesn't exist)
if not es.indices.exists(index=index_name):
    es.indices.create(index=index_name)
if  es.indices.exists(index=index_name):
    print("it exitst")