#ifndef FASTAPI_GENERIC_H
#define FASTAPI_GENERIC_H

#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>

class FastAPIGeneric {
public:
    // Constructor: recibe la URL base (ej. http://192.168.1.50:8000)
    FastAPIGeneric(const char* baseUrl);
    
    // Envía un JSON a un endpoint específico y devuelve el código HTTP
    int postJSON(const char* endpoint, String jsonPayload);
private:
    const char* _baseUrl;
};
#endif