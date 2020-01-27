cocci_test_suite() {
	struct bfusb_data_scb *cocci_id/* drivers/bluetooth/bfusb.c 87 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/bfusb.c 80 */;
	struct urb *cocci_id/* drivers/bluetooth/bfusb.c 78 */;
	void cocci_id/* drivers/bluetooth/bfusb.c 76 */(struct urb *urb);
	struct bfusb_data_scb {
		struct urb *urb;
	} cocci_id/* drivers/bluetooth/bfusb.c 71 */;
	struct usb_interface *cocci_id/* drivers/bluetooth/bfusb.c 691 */;
	void cocci_id/* drivers/bluetooth/bfusb.c 691 */;
	struct bfusb_data cocci_id/* drivers/bluetooth/bfusb.c 623 */;
	struct usb_host_endpoint *cocci_id/* drivers/bluetooth/bfusb.c 603 */;
	struct usb_device *cocci_id/* drivers/bluetooth/bfusb.c 602 */;
	const struct firmware *cocci_id/* drivers/bluetooth/bfusb.c 601 */;
	const struct usb_device_id *cocci_id/* drivers/bluetooth/bfusb.c 599 */;
	unsigned char *cocci_id/* drivers/bluetooth/bfusb.c 522 */;
	const unsigned char *cocci_id/* drivers/bluetooth/bfusb.c 520 */;
	struct bfusb_data {
		struct hci_dev *hdev;
		unsigned long state;
		struct usb_device *udev;
		unsigned int bulk_in_ep;
		unsigned int bulk_out_ep;
		unsigned int bulk_pkt_size;
		rwlock_t lock;
		struct sk_buff_head transmit_q;
		struct sk_buff *reassembly;
		atomic_t pending_tx;
		struct sk_buff_head pending_q;
		struct sk_buff_head completed_q;
	} cocci_id/* drivers/bluetooth/bfusb.c 49 */;
	unsigned char cocci_id/* drivers/bluetooth/bfusb.c 454 */[3];
	unsigned long cocci_id/* drivers/bluetooth/bfusb.c 437 */;
	struct bfusb_data *cocci_id/* drivers/bluetooth/bfusb.c 436 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/bfusb.c 434 */;
	int cocci_id/* drivers/bluetooth/bfusb.c 434 */;
	const struct usb_device_id cocci_id/* drivers/bluetooth/bfusb.c 30 */[];
	struct hci_sco_hdr *cocci_id/* drivers/bluetooth/bfusb.c 297 */;
	struct hci_acl_hdr *cocci_id/* drivers/bluetooth/bfusb.c 287 */;
	struct usb_driver cocci_id/* drivers/bluetooth/bfusb.c 28 */;
	struct hci_event_hdr *cocci_id/* drivers/bluetooth/bfusb.c 277 */;
	unsigned char cocci_id/* drivers/bluetooth/bfusb.c 258 */;
	void *cocci_id/* drivers/bluetooth/bfusb.c 221 */;
}
