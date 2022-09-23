#!/usr/bin/python3
"""Takes in Github creds (username and password)
and uses the Github API to display an id
"""

import sys
import requests
from requests.auth import HTTPBasicAuth

if __name__ == "__main__":
    username = sys.argv[1]
    password = sys.argv[2]

    token = HTTPBasicAuth(username, password)
    request = requests.get('https://api.github.com/user', auth=token)
    print(request.json().get('id')
