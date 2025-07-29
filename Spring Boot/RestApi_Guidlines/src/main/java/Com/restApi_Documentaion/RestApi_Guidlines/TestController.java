package Com.restApi_Documentaion.RestApi_Guidlines;

import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.TimeUnit;

import org.springframework.http.CacheControl;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@RestController
public class TestController {

    private final ConcurrentHashMap<Integer, String> requestCache = new ConcurrentHashMap<>();
    private Integer lastRequestId = null;

    // 🟢 Stateless Example
    @GetMapping("/student")
    public String getStudent(@RequestParam int stdid) {
        return "Student Info: ID = " + stdid;
    }

    // 🟢 Cacheable Example with Memory Storage
    @CrossOrigin
    @GetMapping("/id")
    public ResponseEntity<String> getCachedStudent(@RequestParam int id) {

        // 🟡 Check if there's a previous request and print it
        if (lastRequestId != null && requestCache.containsKey(lastRequestId)) {
            System.out.println("Previous Request: ID = " + lastRequestId + ", Data = " + requestCache.get(lastRequestId));
        } else {
            System.out.println("No Previous Data Found.");
        }

        // 🟢 Store the current request in the cache
        String newData = "Cacheable Student Info: ID = " + id;
        requestCache.put(id, newData);
        lastRequestId = id;

        // 🟢 Return current and previous request data
        return ResponseEntity.ok()
                .cacheControl(CacheControl.maxAge(60, TimeUnit.SECONDS)) // Cache for 60 seconds
                .body("Current Request: " + newData + 
                      (lastRequestId != null ? " | Previous Request: " + requestCache.get(lastRequestId) : ""));
    }
}
