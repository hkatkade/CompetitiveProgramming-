# 1) Download all equity bhavcopy from NSE from 2015 and store it locally in proper format.
# https://www1.nseindia.com/content/historical/EQUITIES/2015/JAN/cm05JAN2015bhav.csv.zip

print('Q.1:')

import datetime
import requests

date_str = '2015-01-01'           # The date from which we want to start downloading files
initial_date = (datetime.datetime.strptime(date_str, "%Y-%m-%d")).date()   # converting string to datetime object
date = initial_date

# defining headers which will be passed as a parameter while downloading files, to overcome access denial error
headers = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x32) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/70.0.3538.77 Safari/537.36",
    # 'User-Agent': 'Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:88.0) Gecko/20100101 Firefox/88.0',
    # 'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.122 Safari/537.36',
    'Referer': 'https://www1.nseindia.com/products/content/equities/equities/archieve_eq.htm',
    'Host': 'www1.nseindia.com'
}


while(date < datetime.date.today()):   # looping from the start date to present date

    print(date)
    # extracting the information from date and converting it into string
    year = date.strftime('%Y')
    month = date.strftime('%b').upper()
    day = date.strftime('%d')

    # defining the base url
    base_url = 'https://www1.nseindia.com/content/historical/EQUITIES/{year}/{month}/cm{day}{month}{year}bhav.csv.zip'

    # adding the date information in the url
    final_url = base_url.format(
        year=year,
        month=month,
        day=day
    )

    # download the content of the final_url
    response = requests.get(final_url, stream=True, headers=headers)
    print(response)

    if response.status_code != 404:    # enter the loop only if it is a valid url
        file_name = "{}.zip".format(str(date))   # name of the file based on the date

        with open('Bhav Copies/' + file_name, "wb") as handle:   # write the content of the url to the respective file
            for data in response.iter_content():
                handle.write(data)
    date = date + datetime.timedelta(days=1)   # increment the date by 1 i.e. go to next date

# -----------------------------------------------------------------------

