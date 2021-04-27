from requests import get
from bs4 import BeautifulSoup as soup
import pandas as pd
url = get("https://www.imdb.com/chart/top/")
request = url.text
data = soup(request, 'html.parser')
# data.title.text
name, rating, poster, year = [], [], [], []
ratings = data.findAll('td', {'class': 'ratingColumn imdbRating'})
movies = data.findAll('td', {'class': 'titleColumn'})
image = data.findAll('td', {'class': 'posterColumn'})
for i in range(len(movies)):
    name.append(movies[i].a.text)
    year.append(movies[i].span.text.replace('(', '').replace(')', ''))
    rating.append(ratings[i].strong.text)
    poster.append(image[i].a.img['src'])
df = pd.DataFrame(list(zip(name, year, rating, poster)),
                  columns=['Name', 'Year', 'Rating', 'Poster'])
for i in range(len(df)):
    print(df['Name'][i])


