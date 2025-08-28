FROM ubuntu:20.04

COPY . /

RUN pip3 install -r requirements.txt

RUN apt-get update && apt-get install -y python3 python3-pip

EXPOSE 22 80 443 8000 9000

CMD python3 app.py

