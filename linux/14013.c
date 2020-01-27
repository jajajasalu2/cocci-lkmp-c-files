cocci_test_suite() {
	struct urb *cocci_id/* drivers/media/rc/ttusbir.c 81 */;
	void cocci_id/* drivers/media/rc/ttusbir.c 68 */;
	struct ttusbir cocci_id/* drivers/media/rc/ttusbir.c 45 */;
	struct ttusbir *cocci_id/* drivers/media/rc/ttusbir.c 45 */;
	enum led_brightness cocci_id/* drivers/media/rc/ttusbir.c 43 */;
	struct led_classdev *cocci_id/* drivers/media/rc/ttusbir.c 43 */;
	struct usb_driver cocci_id/* drivers/media/rc/ttusbir.c 420 */;
	const struct usb_device_id cocci_id/* drivers/media/rc/ttusbir.c 415 */[];
	pm_message_t cocci_id/* drivers/media/rc/ttusbir.c 382 */;
	int cocci_id/* drivers/media/rc/ttusbir.c 364 */;
	struct usb_device *cocci_id/* drivers/media/rc/ttusbir.c 363 */;
	struct usb_interface *cocci_id/* drivers/media/rc/ttusbir.c 360 */;
	struct ttusbir {
		struct rc_dev *rc;
		struct device *dev;
		struct usb_device *udev;
		struct urb *urb[NUM_URBS];
		struct led_classdev led;
		struct urb *bulk_urb;
		uint8_t bulk_buffer[5];
		int bulk_out_endp,iso_in_endp;
		bool led_on,is_led_on;
		atomic_t led_complete;
		char phys[64];
	} cocci_id/* drivers/media/rc/ttusbir.c 26 */;
	void *cocci_id/* drivers/media/rc/ttusbir.c 242 */;
	struct rc_dev *cocci_id/* drivers/media/rc/ttusbir.c 188 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/media/rc/ttusbir.c 187 */;
	struct usb_interface_descriptor *cocci_id/* drivers/media/rc/ttusbir.c 186 */;
	const struct usb_device_id *cocci_id/* drivers/media/rc/ttusbir.c 183 */;
	bool cocci_id/* drivers/media/rc/ttusbir.c 113 */;
	unsigned cocci_id/* drivers/media/rc/ttusbir.c 112 */;
	struct ir_raw_event cocci_id/* drivers/media/rc/ttusbir.c 111 */;
	uint8_t *cocci_id/* drivers/media/rc/ttusbir.c 109 */;
}
