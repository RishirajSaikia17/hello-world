from textblob import TextBlob

feedback = "It is a worst product"
blob = TextBlob(feedback)
print(blob.sentiment)