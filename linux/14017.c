cocci_test_suite() {
	struct send_packet {
		struct packet header;
		uint8_t length;
		uint8_t channels;
		uint8_t busy7;
		uint8_t busy4;
		uint8_t payload[0];
	} cocci_id/* drivers/media/rc/iguanair.c 73 */;
	struct packet {
		uint16_t start;
		uint8_t direction;
		uint8_t cmd;
	} cocci_id/* drivers/media/rc/iguanair.c 67 */;
	struct send_packet cocci_id/* drivers/media/rc/iguanair.c 63 */;
	struct usb_driver cocci_id/* drivers/media/rc/iguanair.c 584 */;
	const struct usb_device_id cocci_id/* drivers/media/rc/iguanair.c 579 */[];
	pm_message_t cocci_id/* drivers/media/rc/iguanair.c 536 */;
	struct usb_interface *cocci_id/* drivers/media/rc/iguanair.c 521 */;
	struct usb_host_interface *cocci_id/* drivers/media/rc/iguanair.c 414 */;
	struct usb_device *cocci_id/* drivers/media/rc/iguanair.c 410 */;
	const struct usb_device_id *cocci_id/* drivers/media/rc/iguanair.c 408 */;
	int cocci_id/* drivers/media/rc/iguanair.c 395 */;
	struct iguanair *cocci_id/* drivers/media/rc/iguanair.c 394 */;
	struct rc_dev *cocci_id/* drivers/media/rc/iguanair.c 392 */;
	void cocci_id/* drivers/media/rc/iguanair.c 392 */;
	unsigned int cocci_id/* drivers/media/rc/iguanair.c 339 */;
	unsigned *cocci_id/* drivers/media/rc/iguanair.c 336 */;
	uint32_t cocci_id/* drivers/media/rc/iguanair.c 280 */;
	bool cocci_id/* drivers/media/rc/iguanair.c 262 */;
	struct iguanair {
		struct rc_dev *rc;
		struct device *dev;
		struct usb_device *udev;
		uint16_t version;
		uint8_t bufsize;
		uint8_t cycle_overhead;
		struct mutex lock;
		bool receiver_on;
		dma_addr_t dma_in,dma_out;
		uint8_t *buf_in;
		struct urb *urb_in,*urb_out;
		struct completion completion;
		bool tx_overflow;
		uint32_t carrier;
		struct send_packet *packet;
		char name[64];
		char phys[64];
	} cocci_id/* drivers/media/rc/iguanair.c 20 */;
	unsigned cocci_id/* drivers/media/rc/iguanair.c 192 */;
	struct urb *cocci_id/* drivers/media/rc/iguanair.c 180 */;
	struct ir_raw_event cocci_id/* drivers/media/rc/iguanair.c 123 */;
}
