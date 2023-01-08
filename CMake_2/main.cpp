#include <stdio.h>
#include <mosquitto.h>
#include<chrono>
#include <thread>

int main()
{

	int rc;
	struct mosquitto* mosq;
	mosquitto_lib_init();
	mosq = mosquitto_new("publisher-test", true, NULL);
    mosquitto_int_option(mosq, MOSQ_OPT_PROTOCOL_VERSION, MQTT_PROTOCOL_V5);
	//rc = mosquitto_connect(mosq, "localhost", 1883, 60);
    // mosquitto_loop_start(mosq);
	//rc = mosquitto_connect(mosq, "broker.emqx.io", 1883, 60);
    rc = mosquitto_connect_bind_v5(mosq, "broker.emqx.io", 1883, 60, NULL, NULL);

	if(rc != 0){

	printf("client can not connect to broker");
	mosquitto_destroy(mosq);
	return -1;
	}
	printf("connect success to broker");
    for(int i =0; i< 10; i++) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        mosquitto_publish(mosq, NULL, "test/t1", 5, "hello", 0, false);
    }
	
	mosquitto_disconnect(mosq);
    //mosquitto_loop_stop(mosq, true);
	mosquitto_destroy(mosq);
	mosquitto_lib_cleanup();

	return 0;



}