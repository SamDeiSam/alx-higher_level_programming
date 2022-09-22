#!/bin/bash
# send a request to a URL passedv as an argument and only show the status code
curl -s -o /dev/null -I --w "%{http_code}" "$1"
