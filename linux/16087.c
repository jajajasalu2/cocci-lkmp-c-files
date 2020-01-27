cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 592 */;
	const struct usb_device_id cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 586 */[];
	const struct usb_device_id *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 581 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 573 */;
	void cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 557 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 512 */;
	struct usb_interface *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 510 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 508 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 477 */;
	struct usb_host_interface *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 476 */;
	size_t cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 457 */;
	struct ni6501_private *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 456 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 454 */;
	int cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 454 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 424 */;
	u32 cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 395 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 392 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 391 */;
	u8 cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 362 */;
	__be32 *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 283 */;
	u8 *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 253 */;
	struct usb_device *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 250 */;
	u32 *cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 248 */;
	struct ni6501_private {
		struct usb_endpoint_descriptor *ep_rx;
		struct usb_endpoint_descriptor *ep_tx;
		struct mutex mut;
		u8 *usb_rx_buf;
		u8 *usb_tx_buf;
	} cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 157 */;
	enum commands{READ_PORT, WRITE_PORT, SET_PORT_DIR, START_COUNTER, STOP_COUNTER, READ_COUNTER, WRITE_COUNTER,} cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 147 */;
	const u8 cocci_id/* drivers/staging/comedi/drivers/ni_usb6501.c 133 */[];
}
