# Aromatizapp

Aromatizapp is an experiment that explores having an aromatizer connected to the internet!

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

<div style="padding:177.78% 0 0 0;position:relative;"><iframe src="https://player.vimeo.com/video/643280797?h=dcc6457b38" style="position:absolute;top:0;left:0;width:100%;height:100%;" frameborder="0" allow="autoplay; fullscreen; picture-in-picture" allowfullscreen></iframe></div><script src="https://player.vimeo.com/api/player.js"></script>
<p><a href="https://vimeo.com/643280797">Demo - Aromatizapp</a> from <a href="https://vimeo.com/user63369211">Eduardo Garza</a> on <a href="https://vimeo.com">Vimeo</a>.</p></div>
