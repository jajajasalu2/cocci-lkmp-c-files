cocci_test_suite() {
	unsigned cocci_id/* drivers/usb/core/endpoint.c 88 */;
	char cocci_id/* drivers/usb/core/endpoint.c 87 */;
	struct ep_attribute cocci_id/* drivers/usb/core/endpoint.c 34 */;
	struct ep_attribute {
		struct attribute attr;
		ssize_t (*show)(struct usb_device *,
				struct usb_endpoint_descriptor *, char *);
	} cocci_id/* drivers/usb/core/endpoint.c 28 */;
	struct ep_device cocci_id/* drivers/usb/core/endpoint.c 26 */;
	struct ep_device {
		struct usb_endpoint_descriptor *desc;
		struct usb_device *udev;
		struct device dev;
	} cocci_id/* drivers/usb/core/endpoint.c 20 */;
	struct usb_device *cocci_id/* drivers/usb/core/endpoint.c 178 */;
	struct usb_host_endpoint *cocci_id/* drivers/usb/core/endpoint.c 177 */;
	int cocci_id/* drivers/usb/core/endpoint.c 176 */;
	struct device_type cocci_id/* drivers/usb/core/endpoint.c 171 */;
	void cocci_id/* drivers/usb/core/endpoint.c 164 */;
	const struct attribute_group *cocci_id/* drivers/usb/core/endpoint.c 159 */[];
	struct attribute_group cocci_id/* drivers/usb/core/endpoint.c 156 */;
	struct attribute *cocci_id/* drivers/usb/core/endpoint.c 145 */[];
	struct ep_device *cocci_id/* drivers/usb/core/endpoint.c 132 */;
	char *cocci_id/* drivers/usb/core/endpoint.c 130 */;
	struct device_attribute *cocci_id/* drivers/usb/core/endpoint.c 129 */;
	struct device *cocci_id/* drivers/usb/core/endpoint.c 129 */;
	ssize_t cocci_id/* drivers/usb/core/endpoint.c 129 */;
}
