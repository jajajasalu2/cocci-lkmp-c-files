cocci_test_suite() {
	struct sms_msg_hdr *cocci_id/* drivers/media/usb/siano/smsusb.c 98 */;
	struct urb *cocci_id/* drivers/media/usb/siano/smsusb.c 86 */;
	struct smsusb_device_t *cocci_id/* drivers/media/usb/siano/smsusb.c 73 */;
	struct smsusb_urb_t cocci_id/* drivers/media/usb/siano/smsusb.c 72 */;
	struct smsusb_urb_t *cocci_id/* drivers/media/usb/siano/smsusb.c 72 */;
	struct usb_driver cocci_id/* drivers/media/usb/siano/smsusb.c 717 */;
	struct work_struct *cocci_id/* drivers/media/usb/siano/smsusb.c 70 */;
	void cocci_id/* drivers/media/usb/siano/smsusb.c 70 */;
	int cocci_id/* drivers/media/usb/siano/smsusb.c 63 */(struct smsusb_device_t *dev,
							      struct smsusb_urb_t *surb);
	const struct usb_device_id cocci_id/* drivers/media/usb/siano/smsusb.c 620 */[];
	pm_message_t cocci_id/* drivers/media/usb/siano/smsusb.c 579 */;
	struct usb_interface *cocci_id/* drivers/media/usb/siano/smsusb.c 574 */;
	char cocci_id/* drivers/media/usb/siano/smsusb.c 500 */[32];
	const struct usb_device_id *cocci_id/* drivers/media/usb/siano/smsusb.c 497 */;
	struct smsusb_device_t {
		struct usb_device *udev;
		struct smscore_device_t *coredev;
		struct smsusb_urb_t surbs[MAX_URBS];
		int response_alignment;
		int buffer_size;
		unsigned char in_ep;
		unsigned char out_ep;
		enum smsusb_state state;
	} cocci_id/* drivers/media/usb/siano/smsusb.c 49 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/media/usb/siano/smsusb.c 405 */;
	struct smsusb_device_t cocci_id/* drivers/media/usb/siano/smsusb.c 395 */;
	struct smsdevice_params_t cocci_id/* drivers/media/usb/siano/smsusb.c 388 */;
	struct smsusb_urb_t {
		struct list_head entry;
		struct smscore_buffer_t *cb;
		struct smsusb_device_t *dev;
		struct urb urb;
		struct work_struct wq;
	} cocci_id/* drivers/media/usb/siano/smsusb.c 38 */;
	struct sms_board *cocci_id/* drivers/media/usb/siano/smsusb.c 362 */;
	struct usb_device *cocci_id/* drivers/media/usb/siano/smsusb.c 361 */;
	struct media_device *cocci_id/* drivers/media/usb/siano/smsusb.c 360 */;
	int cocci_id/* drivers/media/usb/siano/smsusb.c 357 */;
	void *cocci_id/* drivers/media/usb/siano/smsusb.c 356 */;
	struct sms_msg_hdr cocci_id/* drivers/media/usb/siano/smsusb.c 325 */;
	enum smsusb_state{SMSUSB_DISCONNECTED, SMSUSB_SUSPENDED, SMSUSB_ACTIVE,} cocci_id/* drivers/media/usb/siano/smsusb.c 32 */;
	int *cocci_id/* drivers/media/usb/siano/smsusb.c 301 */;
	u8 *cocci_id/* drivers/media/usb/siano/smsusb.c 251 */;
	const struct firmware *cocci_id/* drivers/media/usb/siano/smsusb.c 250 */;
	char **cocci_id/* drivers/media/usb/siano/smsusb.c 244 */;
	char *cocci_id/* drivers/media/usb/siano/smsusb.c 242 */;
	char *cocci_id/* drivers/media/usb/siano/smsusb.c 234 */[];
	size_t cocci_id/* drivers/media/usb/siano/smsusb.c 206 */;
	struct sms_msg_data *cocci_id/* drivers/media/usb/siano/smsusb.c 132 */;
}
