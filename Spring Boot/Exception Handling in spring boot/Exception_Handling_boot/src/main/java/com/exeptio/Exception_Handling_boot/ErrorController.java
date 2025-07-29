package com.exeptio.Exception_Handling_boot;

import org.springframework.http.HttpHeaders;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.context.request.WebRequest;
import org.springframework.web.server.ResponseStatusException;

@RestController
public class ErrorController {
	@GetMapping("/error/{code}")
  public String checkError(@PathVariable int code) throws CustomException {
		if(code==2) {
		//throw new Exception();
		throw new CustomException();
		}
		
		if(code==3) {
			try {
				throw new LocalException();
			}
			catch (LocalException obj) {
				throw new ResponseStatusException(HttpStatus.I_AM_A_TEAPOT);
			}
			
		}
		else {
		return "okk";
		}
	}
	
}
