FROM docker/whalesay:latest
LABEL Name=siteaps8sem2021 Version=0.0.1
WORKDIR /app
COPY index.html /app 
RUN apt-get -y update && apt-get install -y fortunes
CMD ["sh", "-c", "/usr/games/fortune -a | cowsay"]
#COPY
RUN npm run build 

FROM nginx:alpine 
VOLUME /var/cache/nginx
COPY index.html /app/usr/share/nginx/html




