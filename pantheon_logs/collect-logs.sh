
######## To Run, cd to file and run "sh collect-logs.sh"  ######

# Replace SITE_UUID with value from Dashboard URL

SITE_UUID=XXX
for app_server in `dig +short appserver.live.$SITE_UUID.drush.in`;
do
mkdir $app_server
sftp -o Port=2222 live.$SITE_UUID@$app_server << !
  cd logs
  lcd $app_server
  mget *.log
!
done
