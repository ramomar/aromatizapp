curl --location --request POST "https://api.particle.io/v1/devices/${device_id}/aromatize" \
--header "Authorization: Bearer ${token}" \
--header 'Content-Type: application/x-www-form-urlencoded' \
--data-urlencode 'arg=aromatize'
