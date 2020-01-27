cocci_test_suite() {
	struct usbport_trig_port cocci_id/* drivers/usb/core/ledtrig-usbport.c 87 */;
	struct device_attribute *cocci_id/* drivers/usb/core/ledtrig-usbport.c 84 */;
	char *cocci_id/* drivers/usb/core/ledtrig-usbport.c 84 */;
	ssize_t cocci_id/* drivers/usb/core/ledtrig-usbport.c 83 */;
	void __exit cocci_id/* drivers/usb/core/ledtrig-usbport.c 358 */;
	int __init cocci_id/* drivers/usb/core/ledtrig-usbport.c 353 */;
	struct led_trigger cocci_id/* drivers/usb/core/ledtrig-usbport.c 347 */;
	void cocci_id/* drivers/usb/core/ledtrig-usbport.c 331 */;
	struct usbport_trig_data *cocci_id/* drivers/usb/core/ledtrig-usbport.c 304 */;
	struct led_classdev *cocci_id/* drivers/usb/core/ledtrig-usbport.c 302 */;
	int cocci_id/* drivers/usb/core/ledtrig-usbport.c 302 */;
	bool cocci_id/* drivers/usb/core/ledtrig-usbport.c 282 */;
	struct usbport_trig_data cocci_id/* drivers/usb/core/ledtrig-usbport.c 279 */;
	struct notifier_block *cocci_id/* drivers/usb/core/ledtrig-usbport.c 275 */;
	unsigned long cocci_id/* drivers/usb/core/ledtrig-usbport.c 275 */;
	void *cocci_id/* drivers/usb/core/ledtrig-usbport.c 236 */;
	struct usbport_trig_port {
		struct usbport_trig_data *data;
		struct usb_device *hub;
		int portnum;
		char *port_name;
		bool observed;
		struct device_attribute attr;
		struct list_head list;
	} cocci_id/* drivers/usb/core/ledtrig-usbport.c 23 */;
	size_t cocci_id/* drivers/usb/core/ledtrig-usbport.c 189 */;
	struct usbport_trig_port *cocci_id/* drivers/usb/core/ledtrig-usbport.c 188 */;
	const char *cocci_id/* drivers/usb/core/ledtrig-usbport.c 185 */;
	struct usb_device *cocci_id/* drivers/usb/core/ledtrig-usbport.c 184 */;
	struct usbport_trig_data {
		struct led_classdev *led_cdev;
		struct list_head ports;
		struct notifier_block nb;
		int count;
	} cocci_id/* drivers/usb/core/ledtrig-usbport.c 16 */;
	struct of_phandle_args cocci_id/* drivers/usb/core/ledtrig-usbport.c 134 */;
	struct device_node *cocci_id/* drivers/usb/core/ledtrig-usbport.c 133 */;
	struct device *cocci_id/* drivers/usb/core/ledtrig-usbport.c 132 */;
	const struct attribute_group cocci_id/* drivers/usb/core/ledtrig-usbport.c 117 */;
	struct attribute *cocci_id/* drivers/usb/core/ledtrig-usbport.c 113 */[];
}
