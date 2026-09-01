https://chatgpt.com/share/6a965e2f-69f4-83ea-ba91-a2f9fd1521e9

# table
Requirement_____________________Recommended
Map UI__________________________react-native-maps
Map data________________________OpenStreetMap
Routing_________________________OSRM or openrouteservice
Geocoding/search________________Nominatim initially
Current GPS location____________expo-location
Route line______________________Polyline from react-native-maps
Turn-by-turn instructions_______OSRM steps=true / openrouteservice
Alternative routes______________OSRM / openrouteservice
Distance & ETA__________________Routing API response
Offline maps____________________Later: MapLibre + downloaded tiles/data
API key_________________________Not required for OSRM public demo; openrouteservice requires a free key
