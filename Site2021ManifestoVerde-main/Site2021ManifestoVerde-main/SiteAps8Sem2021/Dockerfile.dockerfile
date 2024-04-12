FROM hello-hello-world
WORKDIR /Dev/SiteAps8Sem2021/Dockerfile.dockerfile
COPY package* .Html ./ 
RUN npm install 
COPY ./DIST . 

FROM mcr.microsoft.com/windows/nanoserver:1809
COPY hello.txt C:
CMD ["cmd", "/C", "type C:\\hello.txt"]
    