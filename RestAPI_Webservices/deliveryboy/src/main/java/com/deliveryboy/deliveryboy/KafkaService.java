package com.deliveryboy.deliveryboy;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;



import org.springframework.kafka.core.KafkaTemplate;
import org.springframework.stereotype.Service;

@Service
public class KafkaService {
	Logger log=LoggerFactory.getLogger(KafkaService.class);
	KafkaTemplate<String, String> kafkatemplet;
public boolean  updateLocation(String location) {
	this.kafkatemplet.send(AppConstant.Location_Topioc_Name,location);
	log.info("msg produce");
	return true;
}
}
