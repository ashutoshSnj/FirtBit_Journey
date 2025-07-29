package Com.restApi_Documentaion.RestApi_Guidlines;


import io.jsonwebtoken.Claims;
import io.jsonwebtoken.Jwts;
import io.jsonwebtoken.SignatureAlgorithm;
import io.jsonwebtoken.security.Keys;
import org.springframework.http.HttpHeaders;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import javax.crypto.SecretKey;
import java.util.Date;

@RestController
public class AuthController {

    SecretKey SECRET_KEY = Keys.secretKeyFor(SignatureAlgorithm.HS256); 

   
    @GetMapping("/login")
    public ResponseEntity<String> login() {
    	System.out.println("We Called");
    	try {
			Thread.currentThread().sleep(30000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
    	System.out.println(this.SECRET_KEY);
    	System.out.println(Keys.secretKeyFor(SignatureAlgorithm.HS256));
        String jwtToken = Jwts.builder()
                .setSubject("user") 
                .setIssuedAt(new Date()) 
                .setExpiration(new Date(System.currentTimeMillis() + 60000)) 
             //   .claim("id", student.getId())
             //   .claim("name", student.getName())
                .signWith(SECRET_KEY) 
                .compact();
        System.out.println(jwtToken);
        //System.out.println(student.getId() +" "+student.getName());

        HttpHeaders headers = new HttpHeaders();
        headers.add("Authorization", "Bearer " + jwtToken);

        return ResponseEntity.ok().headers(headers).body("Login successful! Use this token for requests.");
    }

   
    @PostMapping("/store")
    public ResponseEntity<String> storeData(@RequestHeader(value = "Authorization", required = false) String authHeader) {
        if (authHeader == null || !authHeader.startsWith("Bearer ")) {
            return ResponseEntity.status(HttpStatus.UNAUTHORIZED).body("Access Denied! Please login.");
        }
//eyJhbGciOiJIUzI1NiJ9.eyJzdWIiOiJ1c2VyIiwiaWF0IjoxNzQxNDY1MjA1LCJleHAiOjE3NDE0NjUyNjV9.0e8
        String token = authHeader.substring(7); // Remove "Bearer " prefix
        
      
        try {
        Claims str=    Jwts.parserBuilder().setSigningKey(SECRET_KEY).build().parseClaimsJws(token).getBody();
        System.out.println(str.get("id"));
        System.out.println(str.get("name"));
            return ResponseEntity.ok("Data Stored Successfully!");
        } catch (Exception e) {
            return ResponseEntity.status(HttpStatus.UNAUTHORIZED).body("Invalid Token! Please login again.");
        }
    }
}
