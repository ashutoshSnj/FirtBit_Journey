package com.EventManagement.start.Event.Management.kafkaEXe;

import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.ControllerAdvice;
import org.springframework.web.bind.annotation.ExceptionHandler;

@ControllerAdvice
public class GlobalExceptionHandler {

    @ExceptionHandler(Exception.class)
    public String handleException(Exception ex, Model model) {
        model.addAttribute("error", ex.getMessage()); // Ensure "error" attribute exists
        return "error"; // This should match error.ftlh
    }
}