tcpdump -w /data/mqtt_toyota.pcap -i rmnet_data0 port 8883
timeout /t 1
mosquitto_sub -h test.mosquitto.org -p 8883 -t 'test/t11' -v --protocol-version 5 --cafile mosquitto.org.crt --insecure --tls-version tlsv1.3
timeout /t 1
mosquitto_pub -h test.mosquitto.org -p 8883 -d --protocol-version 5 --cafile mosquitto.org.crt --insecure --tls-version tlsv1.3 -t 'test/t10' -m 'Testing MQTT TLS'
timeout /t 1