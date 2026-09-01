https://chatgpt.com/share/6a965e2f-69f4-83ea-ba91-a2f9fd1521e9

# table
Requirement	                 Recommended
Map UI	                     react-native-maps
Map data	                   OpenStreetMap
Routing	                     OSRM or openrouteservice
Geocoding/search	           Nominatim initially
Current GPS location	       expo-location
Route line	                 Polyline from react-native-maps
Turn-by-turn instructions	   OSRM steps=true / openrouteservice
Alternative routes	         OSRM / openrouteservice
Distance & ETA	             Routing API response
Offline maps	               Later: MapLibre + downloaded tiles/data
API key	                     Not required for OSRM public demo; openrouteservice requires a free key
