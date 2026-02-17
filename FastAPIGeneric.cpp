#include "FastAPIGeneric.h"

FastAPIGeneric::FastAPIGeneric(const char* baseUrl) : _baseUrl(baseUrl) {}

int FastAPIGeneric::postJSON(const char* endpoint, String jsonPayload) {
    if (WiFi.status() == WL_CONNECTED) {
        HTTPClient http;
        String fullUrl = String(_baseUrl) + String(endpoint);
        http.begin(fullUrl);
        http.addHeader("Content-Type", "application/json");
        
        int httpCode = http.POST(jsonPayload);
        http.end();
        return httpCode; 
    }
    return -1; 
}