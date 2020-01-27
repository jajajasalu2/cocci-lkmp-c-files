cocci_test_suite() {
	void cocci_id/* drivers/media/rc/streamzap.c 99 */(struct usb_interface *interface);
	int cocci_id/* drivers/media/rc/streamzap.c 97 */(struct usb_interface *interface,
							  const struct usb_device_id *id);
	struct streamzap_ir {
		struct rc_dev *rdev;
		struct device *dev;
		struct usb_device *usbdev;
		struct usb_interface *interface;
		struct usb_endpoint_descriptor *endpoint;
		struct urb *urb_in;
		unsigned char *buf_in;
		dma_addr_t dma_in;
		unsigned int buf_in_len;
		enum StreamzapDecoderState decoder_state;
		bool idle;
		unsigned long sum;
		ktime_t signal_last;
		ktime_t signal_start;
		bool timeout_enabled;
		char name[128];
		char phys[64];
	} cocci_id/* drivers/media/rc/streamzap.c 62 */;
	enum StreamzapDecoderState{PulseSpace, FullPulse, FullSpace, IgnorePulse,} cocci_id/* drivers/media/rc/streamzap.c 54 */;
	pm_message_t cocci_id/* drivers/media/rc/streamzap.c 473 */;
	struct usb_device *cocci_id/* drivers/media/rc/streamzap.c 457 */;
	struct usb_interface *cocci_id/* drivers/media/rc/streamzap.c 454 */;
	usb_complete_t cocci_id/* drivers/media/rc/streamzap.c 419 */;
	const struct usb_device_id cocci_id/* drivers/media/rc/streamzap.c 37 */[];
	struct streamzap_ir cocci_id/* drivers/media/rc/streamzap.c 333 */;
	char cocci_id/* drivers/media/rc/streamzap.c 328 */[63];
	struct usb_host_interface *cocci_id/* drivers/media/rc/streamzap.c 326 */;
	const struct usb_device_id *cocci_id/* drivers/media/rc/streamzap.c 323 */;
	struct device *cocci_id/* drivers/media/rc/streamzap.c 278 */;
	struct rc_dev *cocci_id/* drivers/media/rc/streamzap.c 275 */;
	struct ir_raw_event cocci_id/* drivers/media/rc/streamzap.c 243 */;
	unsigned char cocci_id/* drivers/media/rc/streamzap.c 220 */;
	int cocci_id/* drivers/media/rc/streamzap.c 195 */;
	unsigned int cocci_id/* drivers/media/rc/streamzap.c 194 */;
	struct streamzap_ir *cocci_id/* drivers/media/rc/streamzap.c 193 */;
	struct urb *cocci_id/* drivers/media/rc/streamzap.c 191 */;
	void cocci_id/* drivers/media/rc/streamzap.c 191 */;
	unsigned long cocci_id/* drivers/media/rc/streamzap.c 180 */;
	struct usb_driver cocci_id/* drivers/media/rc/streamzap.c 105 */;
	int cocci_id/* drivers/media/rc/streamzap.c 102 */(struct usb_interface *intf);
	int cocci_id/* drivers/media/rc/streamzap.c 101 */(struct usb_interface *intf,
							   pm_message_t message);
	void cocci_id/* drivers/media/rc/streamzap.c 100 */(struct urb *urb);
}
