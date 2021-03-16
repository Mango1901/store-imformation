1. Chuyển sang brach production nếu có ticket mới (git checkout production) 
2. git fetch --all --prune
3. git pull
4. khi hoàn thành thì check sang brand dev (git checkout dev --)
5. Test then create branch git checkout -b feature/CU-(ID_tickets)-dev
6. git add các file mình đã sửa (chỉ file mình đã sửa)
7. git push origin feature/CU-(ID_tickets)
8. Lên bicbutket Create pull request
9. Gửi link pull request cho JC 
10. Khi ông ý check xong thì lên magnilife.devzn.com
11. gitk -> shaID rồi copy vào đâu đấy  
12. git checkout production
13. git checkout -b feature/CU-(ID_tickets)
14. git cherry-pick shaID
15.git push origin feature/CU-(ID_tickets)
16. Create pull request 

sudo chmod -R 777 ./ (Phân quyền tất cả )
sudo chmod -R 644 ./ (Phân quyền file )
sudo chmod -R 755 ./ (Phân quyền folder )


<VirtualHost *:80>
          ServerName www.pdservice.congtyphuongdong.vn 
          ServerAlias pdservice.congtyphuongdong.vn
        DocumentRoot /home/mango/service/public

    ErrorLog /home/mango/service/error.log
    CustomLog /home/mango/service/access.log combined

<Directory /home/mango/service/public>
    AllowOverride all
    Require all granted
</Directory>

</VirtualHost>


 alias composer='/usr/local/bin/composer'


root@192.243.108.61
0p41Ceso

chown -R mango:mango pdwarranty/

hieu.tuhai2001@gmail.com
ncmlfdxkjhrqsjch

database,username:mnads
password: "TqeQsb'TM[8{FR<&"

https://accounts.google.com/o/oauth2/auth?client_id=your-client-id&response_type=code&scope=https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fadwords&redirect_uri=urn:ietf:wg:oauth:2.0:oob&access_type=offline&prompt=consent


"https://${yourOktaDomain}/oauth2/default/v1/token&client_id={client_id}&client_secret={client_secret}&grant_type=authorization_code&redirect_uri={redirect_uri}&code={code}"

	"developer-token": "BrtDh-R9uWJUYzJx1d_EoA"
Client ID
124712444776-6dfhlgdvb827j30mhpsd3s7hhalmumq2.apps.googleusercontent.com

Client secret
hFz7FHT3B2VZOK92WV3qk8ip

refresh_token
"1//0eN_kfP5wLwAHCgYIARAAGA4SNwF-L9IrtLdFJghhLCbrXH2RM1gt1QPOgDM_VLFZ6soKOJShJyxzijpy15GQgb0hdef5ruVrE74"

"https://www.googleapis.com/auth/adwords"


APP_NAME=Laravel
APP_ENV=local
APP_KEY=base64:orD9jhxwFTZsHb8I09tXXS6AhbuNl9CI3Dd9FVjYt5c=
APP_DEBUG=true
APP_URL=http://localhost

LOG_CHANNEL=stack

DB_CONNECTION=mysql
DB_HOST=192.243.108.61
DB_PORT=3306
DB_DATABASE=pdwarranty
DB_USERNAME=pdwarranty
DB_PASSWORD=pdwarranty

BROADCAST_DRIVER=log
CACHE_DRIVER=file
QUEUE_CONNECTION=sync
SESSION_DRIVER=file
SESSION_LIFETIME=120

REDIS_HOST=127.0.0.1
REDIS_PASSWORD=null
REDIS_PORT=6379

MAIL_MAILER=smtp
MAIL_HOST=smtp.googlemail.com
MAIL_PORT=587
MAIL_USERNAME=hieu.tuhai2001@gmail.com
MAIL_PASSWORD=fixtrqbyfidnqzde
MAIL_ENCRYPTION=tls
MAIL_FROM_ADDRESS=deaglelinhtrinh@gmail.com
MAIL_FROM_NAME="${APP_NAME}"

AWS_ACCESS_KEY_ID=
AWS_SECRET_ACCESS_KEY=
AWS_DEFAULT_REGION=us-east-1
AWS_BUCKET=

PUSHER_APP_ID=
PUSHER_APP_KEY=
PUSHER_APP_SECRET=
PUSHER_APP_CLUSTER=mt1

MIX_PUSHER_APP_KEY="${PUSHER_APP_KEY}"
MIX_PUSHER_APP_CLUSTER="${PUSHER_APP_CLUSTER}"




php artisan cache:clear
php artisan config:clear
php artisan route:clear
sudo rm pdservice.congtyphuongdong.com.conf

sudo ln -s /etc/httpd/sites-available/pdservice.congtyphuongdong.com.conf /etc/httpd/sites-enabled/


wget -O phpstorm.tar.gz https://download.jetbrains.com/webide/PhpStorm-2020.1.1.tar.gz?_ga=2.160865213.1870033120.1590048440-521251968.1588663586


mkdir -p phpstorm


tar -xzf phpstorm.tar.gz -C phpstorm/ --strip-components=1

cd phpstorm/bin

bash phpstorm.sh

0.0.0.0 account.jetbrains.com

1.2.3.4 account.jetbrains.com

1.2.3.4 http://www.jetbrains.com

1.2.3.4 www-weighted.jetbrains.com

//check hash-password 
private function passwordCorrect($suppliedPassword)
{
    return Hash::check($suppliedPassword, Auth::user()->password, []);
}


php artisan make:policy PostPolicy --model=Post

 chmod +x bin/magento
find var generated vendor pub/static pub/media app/etc -type f -exec chmod g+w {} +
find var generated vendor pub/static pub/media app/etc -type d -exec chmod g+ws {} +
chown -R :www-data . # Ubuntu
chmod u+x bin/magentosudo a2enmod proxy_http

sudo a2dismod php7.2
sudo a2enmod php7.4
sudo service restart apache2


sudo update-alternatives --set php /usr/bin/php7.4
sudo update-alternatives --set phar /usr/bin/phar7.4
sudo update-alternatives --set phar.phar /usr/bin/phar.phar7.4
sudo apt-get install phpmyadmin php-mbstring php-gettext

file_uploads = On
allow_url_fopen = On
short_open_tag = On
memory_limit = 512M
upload_max_filesize = 128M
max_execution_time = 3600

sudo apt install php7.2 libapache2-mod-php7.2 php7.2-common php7.2-gmp php7.2-curl php7.2-soap php7.2-bcmath php7.2-intl php7.2-mbstring php7.2-xmlrpc  php7.2-mysql php7.2-gd php7.2-xml php7.2-cli php7.2-zip
sudo apt install php7.4 libapache2-mod-php7.4 php7.4-common php7.4-gmp php7.4-curl php7.4-soap php7.4-bcmath php7.4-intl php7.4-mbstring php7.4-xmlrpc  php7.4-mysql php7.4-gd php7.4-xml php7.4-cli php7.4-zip

bin/magento setup:install \
--base-url="http://magento-local.local/" \
--db-host=127.0.0.1 \
--db-name=magento2 \
--db-user=mango \
--db-password=mango \
--admin-firstname=Mango \
--admin-lastname=Captain \
--admin-email=hieu.tuhai2001@gmail.com \
--admin-user=Mango \
--admin-password=Honganhnguyen11022001 \
--language=en_US \
--currency=USD \
--timezone=Asia/Ho_Chi_Minh \
--use-rewrites=1

bin/magento setup:install \
--base-url="http://magento-test.local/" \
--db-host=127.0.0.1 \
--db-name=magento-test \
--db-user=mango \
--db-password=mango \
--admin-firstname=Mango \
--admin-lastname=Captain \
--admin-email=hieu.tuhai2001@gmail.com \
--admin-user=Mango \
--admin-password=Honganhnguyen11022001 \
--language=en_US \
--currency=USD \
--timezone=Asia/Ho_Chi_Minh \
--use-rewrites=1


yum -y install php73u php73u-pdo php73u-mysqlnd php73u-opcache php73u-xml php73u-mcrypt php73u-gd php73u-devel php73u-mysql php73u-intl php73u-mbstring php73u-bcmath php73u-json php73u-iconv php73u-soap


GOOGLE_DRIVE_CLIENT_ID=935427211416-ajqchra21jorcef2u94a9jjianef1793.apps.googleusercontent.com
GOOGLE_DRIVE_CLIENT_SECRET=UaNoX_XlUZ9QYW43g3nEerWn
GOOGLE_DRIVE_REFRESH_TOKEN=1//047g9raALOtiCCgYIARAAGAQSNwF-L9IrMVQ4Z6_2V6eT-G6YvkasjgCNnpnwwhrRp43OgVwLDIE8cNU_GWKu_V1sFc_6_EkB1lQ
GOOGLE_DRIVE_FOLDER_ID=1gJWuheA97QCYWpUgyzBIa_TIT-1OsYh-


sudo systemctl restart crond.service

API KEY : AIzaSyADUKwLTe4eMlldAOIS_SdAsmdcuDkSMh8

sudo pkill -f nginx & wait $!
sudo systemctl start nginx

sudo nano /etc/nginx/conf.d/phpmyadmin.conf

server {
    listen 80 default_server;
    listen [::]:80 default_server;

    root /var/www/html;

    index index.html index.htm index.nginx-debian.html index.php;

    server_name _;

    location ~ \.php$ {
            include snippets/fastcgi-php.conf;
            fastcgi_pass unix:/var/run/php/php7.2-fpm.sock;
        }

    location / {
        # First attempt to serve request as file, then
        # as directory, then fall back to displaying a 404.
        try_files \$uri \$uri/ =404;
    }

}
//setup laravel nginx
server {
    listen 80;

    server_name graphql.com www.graphql.com;

    root /home/mango/pdhr/public;

    add_header X-Frame-Options "SAMEORIGIN";
    add_header X-XSS-Protection "1; mode=block";
    add_header X-Content-Type-Options "nosniff";

    index index.php;

    charset utf-8;

    location / {
        try_files $uri $uri/ /index.php?$query_string;
    }

    location = /favicon.ico { access_log off; log_not_found off; }
    location = /robots.txt  { access_log off; log_not_found off; }

    error_page 404 /index.php;

    location ~ \.php$ {
        fastcgi_pass unix:/var/run/php/php7.4-fpm.sock;
        fastcgi_param SCRIPT_FILENAME $realpath_root$fastcgi_script_name;
        include fastcgi_params;
    }

    location ~ /\.(?!well-known).* {
        deny all;
    }
}
fastcgi_temp_file_write_size 10m;
fastcgi_busy_buffers_size 512k;
fastcgi_buffer_size 512k;
fastcgi_buffers 16 512k;
client_max_body_size 50M;


1.Tìm hiểu về roles and permissions
+ Định nghĩa 
+ use case 
+ So sánh mô hình tương tự 
2.Cài một số offical add-ons
3.Tạo module CMS 
4. tách thành add-ons riêng   


cockroach start-single-node \
--insecure \
--store=node1 \
--listen-addr=localhost:26257 \
--http-addr=localhost:8080

cockroach start \
--insecure \
--store=node \
--listen-addr=localhost:26257 \
--http-addr=localhost:8081 \
--join=localhost:26257,localhost:26258,localhost:26259 \
--background && \
\
cockroach start \
--insecure \
--store=node2 \
--listen-addr=localhost:26258 \
--http-addr=localhost:8081 \
--join=localhost:26257,localhost:26258,localhost:26259 \
--background && \
\
cockroach start \
--insecure \
--store=node3 \
--listen-addr=localhost:26259 \
--http-addr=localhost:8082 \
--join=localhost:26257,localhost:26258,localhost:26259 \
--background

//install phpmyadmin

server {
  listen 80;
  listen [::]:80;
  server_name pma.example.com;
  root /usr/share/phpmyadmin/;
  index index.php index.html index.htm index.nginx-debian.html;

  access_log /var/log/nginx/phpmyadmin_access.log;
  error_log /var/log/nginx/phpmyadmin_error.log;

  location / {
    try_files $uri $uri/ /index.php;
  }

  location ~ ^/(doc|sql|setup)/ {
    deny all;
  }

  location ~ \.php$ {
    fastcgi_pass unix:/run/php/php7.2-fpm.sock;
    fastcgi_param SCRIPT_FILENAME $document_root$fastcgi_script_name;
    include fastcgi_params;
    include snippets/fastcgi-php.conf;
  }

  location ~ /\.ht {
    deny all;
  }
}

"repositories": [{
        "type": "git",
        "url": "git@github.com:Mango1901/mangocaptain-package.git"
    }
],

//create
php artisan elastic:create-index "App\MyIndexConfigurator"

//update
php artisan elastic:update-index "App\MyIndexConfigurator"
//delete
php artisan elastic:drop-index "App\MyIndexConfigurator"


2A3BC-4DE56F-789GHI


SCOUT_DRIVER=elastic

composer self-update --1
composer self-update --2
composer self-update --rollback
 alias composer='/usr/local/bin/composer'

74.220.219.228

ctyphuongdongvn@gmail.com

./ngrok http 1102
./ngrok help

wpscan --url http://congtyphuongdong.vn/wp-login.php --passwords /home/mango/Downloads/rockyou.txt --usernames ctyphuongdongvn@gmail.com --wp-content-dir http://congtyphuongdong.vn/wp-login.php

192.243.108.61/phpmyadmin

username: pdwarranty
password: 80Qf2ruOVnGwaND4

mnads
@Mnads124

http://service.tamvietmedical.com.vn/CongtyTamViet/uploads/hack22.php

http://192.243.108.61/pdwarranty/bootstrap/z=2WUpKVMz8%3fHQ5N.php

http://apitreetask.congtyphuongdong.vn/mtask/public/images/node/EmbPAWi4wP1hYZyFWoVsHwCkibvoyvas1QfTmVvT.php

http://pdwork.congtyphuongdong.vn/public/images/node/hack22.php
EmbPAWi4wP1hYZyFWoVsHwCkibvoyvas1QfTmVvT.php


Huyenbon:$2y$10$/672eBpB.sSUTaQoLmocJOB4LBV45f6bvVxgTxaTu.yc8rcl1nhTu

Phuongdong:$2y$10$ZcrNwOE9GSq0HDIQI0qpSedt9ZORS5vSlrh7y6BRZISK4.sLMN6Ty

mango:$2y$10$5y/sgCR/hN.oR60tTjHDd.BVpgegjom4B4Uen2e.5vSZrgEKGWeIW

0L8n81V2w1BrFZJEuKiNNdfTrRg04eTPKF4WTRMz.jpeg

/etc/httpd/sites-available/baohanh.tamvietmedical.com.vn.conf
/etc/httpd/sites-available/mnads.congtyphuongdong.vn.conf
/etc/httpd/sites-available/pdservice.congtyphuongdong.vn.conf
/etc/httpd/sites-available/pdwork.congtyphuongdong.vn.conf
/etc/httpd/sites-available/service.tamvietmedical.com.vn.conf
/etc/httpd/sites-enabled/mnads.congtyphuongdong.vn.conf
/etc/httpd/sites-enabled/pdservice.congtyphuongdong.vn
/etc/httpd/sites-enabled/pdservice.congtyphuongdong.vn.conf
/etc/httpd/sites-enabled/pdwork.congtyphuongdong.vn.conf
/etc/httpd/sites-enabled/service.tamvietmedical.com.vn.conf

curl -H "Content-Type: application/json" -XPOST "localhost:9200/bank/_bulk?pretty&refresh" --data-binary "@accounts.json"
curl "localhost:9200/_cat/indices?v=true"

bin/magento setup:install \
--base-url="http://magento-test.local/" \
--db-host=127.0.0.1 \
--db-name=magento-test \
--db-user=mango \
--db-password=mango \
--admin-firstname=Mango \
--admin-lastname=Captain \
--admin-email=hieu.tuhai2001@gmail.com \
--admin-user=Mango \
--admin-password=Honganhnguyen11022001 \
--language=en_US \
--currency=USD \
--timezone=Asia/Ho_Chi_Minh \
--use-rewrites=1


http://paperdivas_m2-store.com


"bin/magento" \
"setup:install" \
"--base-url=http://paperdivas-m2-store.com/" \
"--elasticsearch-host=localhost:9201" \
"--db-host=127.0.0.1:6603" \
"--db-name=magento2_paperdivas" \
"--db-user=root" \
"--db-password=secret" \
"--admin-firstname=Mango" \
"--admin-lastname=Captain" \
"--admin-email=hieu.tuhai2001@gmail.com" \
"--admin-user=Mango" \
"--admin-password=Honganhnguyen11022001" \
"--backend-frontname=admin" \
"--language=en_US" \
"--currency=USD" \
"--timezone=Asia/Ho_Chi_Minh" \
"--use-rewrites=1"


Backpack:
https://docs.google.com/presentation/d/16jRBPBBBookPD8kF4f_UD0sUU7Yr9VtU51Pf1k3tiaA/edit#slide=id.gc055ea162d_0_58


eval "$(ssh-agent -s)"
ssh-add {key-path}

bin/magento deploy:mode:set developer

gpasswd -d user group
usermod -a -G group user

find . -type d -exec chmod 0775 {} \; 
find . -type f -exec chmod 0664 {} \;

Centos7:
sudo firewall-cmd --add-service=http
sudo firewall-cmd --add-service=https
sudo firewall-cmd --runtime-to-permanent
sudo iptables -I INPUT -p tcp -m tcp --dport 80 -j ACCEPT
sudo iptables -I INPUT -p tcp -m tcp --dport 443 -j ACCEPT


acount_job:
nguyenvohungphuong@gmail.com
noverAsia@123


git config user.name "Joe Nguyen"
git config user.email internal+joen@coredevelop.com



fa24d17c4d29db9c4c6d9d011f5ccc9cbe76036f


data-bind="value: couponCode, attr:{disabled:isApplied() , placeholder: $t('Enter discount code')} " />


data-bind="visible: isVisible(), click: removeAll"



 <item name="config" xsi:type="array">
 <item name="componentDisabled" xsi:type="boolean">true</item>
 </item>

[["Hue","123"],["Dat","Hue"],["Lam","Hue"],["Trinh","Dat"],["1","Hue"]]



internal+testX@coredevelop.com
Core Test


admin
coredev@123



sudo curl -L "https://github.com/docker/compose/releases/download/1.24.1/docker-compose-$(uname -s)-$(uname -m)" -o /usr/local/bin/docker-compose


echo "deb https://artifacts.elastic.co/packages/6.x/apt stable main" | sudo tee -a /etc/apt/sources.list.d/elastic-6.x.list


#docker run elasticsearch

sudo docker run -p 9200:9200 -p 9300:9300 -e "discovery.type=single-node" docker.elastic.co/elasticsearch/elasticsearch:6.8.14 
cd docker/mysqldev && sudo docker-compose up -d
docker exec -it <id> /bin/bash
bin/elasticsearch-plugin install analysis-icu
bin/elasticsearch-plugin install analysis-phonetic


UPDATE core_config_data SET value = '${mysql_url}' WHERE path = 'web/secure/base_url';
