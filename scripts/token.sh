curl https://api.particle.io/oauth/token \
       -u particle:particle \
       -d grant_type=password \
       -d "username=${username}" \
       -d "password=${password}" \
       -d "expires_in=0"
       
