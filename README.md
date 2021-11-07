# Aromatizapp

<div align="center">
  <img width="402" alt="aromatizapp" src="https://user-images.githubusercontent.com/10622989/140662899-a6a0ac63-cd75-4ff9-ada4-47f264992088.png">
</div>


Aromatizapp is an experiment that explores having an aromatizer connected to the internet! You can read a nice blog post [here]() (spanish).

## Features

Exposes and endpoint which can be called in the following form:

```bash
curl --location --request POST "https://api.particle.io/v1/devices/${device_id}/aromatize" \
--header "Authorization: Bearer ${token}" \
--header 'Content-Type: application/x-www-form-urlencoded' \
--data-urlencode 'arg=aromatize'
```

## Scripts

The scripts folder includes scripts for calling the aromatize endpoint as well as the endpoint for generating an access token.


## Building and flashing the firmware

[Use the Particle tooling](https://docs.particle.io/tutorials/developer-tools/workbench/).

## Demo video
You can see a demo [here](https://vimeo.com/643280797).
