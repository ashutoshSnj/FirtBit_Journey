package com.deliveryboy.deliveryboy;

import java.util.Map;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/location")
public class LocationController {
	@Autowired
	KafkaService service;
	@PostMapping
public ResponseEntity<?> updatelocation(){
	 this.service.updateLocation(Math.random()*100 +"  "+Math.random()*10);
	  return new ResponseEntity<>(Map.of("message","location Update"),HttpStatus.OK);
	 
}
}
