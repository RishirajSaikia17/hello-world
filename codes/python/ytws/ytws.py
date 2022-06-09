from bs4 import BeautifulSoup
import requests
import csv
import pandas as pd
import html5lib

page = requests.get('https://www.flipkart.com/search?q=asus%20vivobook%20i5%20laptop&otracker=search&otracker1=search&marketplace=FLIPKART&as-show=on&as=off')
soup = BeautifulSoup(page.content, 'html5lib')
product = []
prices = []
rating = soup.find('div',attrs={'class':'_4rR01T'})
print(product.text)
