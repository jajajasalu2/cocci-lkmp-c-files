cocci_test_suite() {
	u32 cocci_id/* drivers/net/usb/gl620a.c 72 */;
	struct gl_packet *cocci_id/* drivers/net/usb/gl620a.c 70 */;
	struct gl_header *cocci_id/* drivers/net/usb/gl620a.c 69 */;
	struct sk_buff *cocci_id/* drivers/net/usb/gl620a.c 67 */;
	struct gl_header {
		__le32 packet_count;
		struct gl_packet packets;
	} cocci_id/* drivers/net/usb/gl620a.c 62 */;
	struct gl_packet {
		__le32 packet_length;
		char packet_data[1];
	} cocci_id/* drivers/net/usb/gl620a.c 57 */;
	struct usb_driver cocci_id/* drivers/net/usb/gl620a.c 214 */;
	unsigned long cocci_id/* drivers/net/usb/gl620a.c 205 */;
	const struct usb_device_id cocci_id/* drivers/net/usb/gl620a.c 201 */[];
	const struct driver_info cocci_id/* drivers/net/usb/gl620a.c 187 */;
	struct usbnet *cocci_id/* drivers/net/usb/gl620a.c 178 */;
	struct usb_interface *cocci_id/* drivers/net/usb/gl620a.c 178 */;
	int cocci_id/* drivers/net/usb/gl620a.c 178 */;
	__le32 *cocci_id/* drivers/net/usb/gl620a.c 142 */;
	gfp_t cocci_id/* drivers/net/usb/gl620a.c 136 */;
}
