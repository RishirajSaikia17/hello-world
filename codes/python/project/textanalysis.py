from bs4 import BeautifulSoup
import requests

link = 'https://www.flipkart.com/adsun-80-cm-32-inch-hd-ready-led-tv/p/itmffmnvusydzajr?pid=TVSFFMNVXFU4DFW4&lid=LSTTVSFFMNVXFU4DFW4CHQWEE&marketplace=FLIPKART&q=television&store=ckf%2Fczl&srno=s_1_1&otracker=search&otracker1=search&fm=Search&iid=en_gsHTJ7ubl7eSDdM2QIKbZkOtsKYHuQttO5GAG2eEV0Lt3EdEexEJMAHuW01GFk%2FGb4CokQodNaEi7FstDonC1Q%3D%3D&ppt=hp&ppn=homepage&ssid=r0dziu7av40000001648613417523&qH=79464212afb7fd6c'
page = requests.get(link)
soup = BeautifulSoup(page.content, 'html.parser')
print(soup.prettify())
#name = soup.find('span',class_="B_NuCI")
#print(name.text)

#review = soup.find('p',class_="_2-N8zT")
#print(review.text)