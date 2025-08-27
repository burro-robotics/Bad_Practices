FROM ubuntu:20.04

RUN apt-get update && apt-get install -y python3 python3-pip

COPY . /

RUN pip3 install -r requirements.txt

EXPOSE 22 80 443 8000 9000

CMD python3 app.py

