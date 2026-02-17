# FastAPIGeneric
**Role:** Universal REST/FastAPI Client for ESP32.
**Purpose:** Agnostic JSON data transmission via HTTP POST.

### LLM Implementation Guide
- **Dependencies:** `HTTPClient.h`, `WiFi.h`.
- **Class Signature:** `FastAPIGeneric(const char* baseUrl)`
- **Core Method:** `int postJSON(const char* endpoint, String jsonPayload)`

### Universal Usage Logic:
1. Initialize with the server's Base URL (e.g., `http://192.168.xxx.xx:8000`).
2. Construct any JSON string manually or via ArduinoJson.
3. Call `postJSON` specifying the endpoint (e.g., `/data`) and the payload.
4. The method returns the HTTP status code for error handling logic.

### AI Prompt Example:
"Using the FastAPIGeneric library, write a function to send a JSON payload `{"status": "active"}` to the `/logs` endpoint every 10 seconds."
