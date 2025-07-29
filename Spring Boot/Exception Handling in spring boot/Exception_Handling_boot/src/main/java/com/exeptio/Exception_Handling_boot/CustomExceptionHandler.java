package com.exeptio.Exception_Handling_boot;

import org.springframework.http.HttpHeaders;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.ControllerAdvice;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.context.request.WebRequest;
import org.springframework.web.servlet.mvc.method.annotation.ResponseEntityExceptionHandler;

@ControllerAdvice
public class CustomExceptionHandler extends ResponseEntityExceptionHandler {
	@ExceptionHandler(value={CustomException.class})
    public ResponseEntity<Object> handleProblems(Exception exp, WebRequest req) {
    	String str="Houston!! we have a problem";
		int no=23;
       return handleExceptionInternal(exp, str, new HttpHeaders(), HttpStatus.OK, req);
    }
}
