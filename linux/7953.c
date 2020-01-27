cocci_test_suite() {
	struct vl600_pkt_hdr *cocci_id/* drivers/net/usb/lg-vl600.c 99 */;
	struct vl600_frame_hdr *cocci_id/* drivers/net/usb/lg-vl600.c 98 */;
	struct sk_buff *cocci_id/* drivers/net/usb/lg-vl600.c 96 */;
	void cocci_id/* drivers/net/usb/lg-vl600.c 86 */;
	struct vl600_state cocci_id/* drivers/net/usb/lg-vl600.c 59 */;
	struct vl600_state *cocci_id/* drivers/net/usb/lg-vl600.c 59 */;
	struct usbnet *cocci_id/* drivers/net/usb/lg-vl600.c 56 */;
	struct usb_interface *cocci_id/* drivers/net/usb/lg-vl600.c 56 */;
	int cocci_id/* drivers/net/usb/lg-vl600.c 56 */;
	struct vl600_state {
		struct sk_buff *current_rx_buf;
	} cocci_id/* drivers/net/usb/lg-vl600.c 52 */;
	struct vl600_pkt_hdr {
		__le32 dummy[2];
		__le32 len;
		__be16 h_proto;
	}__attribute__((packed)) cocci_id/* drivers/net/usb/lg-vl600.c 46 */;
	struct vl600_frame_hdr {
		__le32 len;
		__le32 serial;
		__le32 pkt_cnt;
		__le32 dummy_flags;
		__le32 dummy;
		__le32 magic;
	}__attribute__((packed)) cocci_id/* drivers/net/usb/lg-vl600.c 37 */;
	struct usb_driver cocci_id/* drivers/net/usb/lg-vl600.c 321 */;
	unsigned long cocci_id/* drivers/net/usb/lg-vl600.c 315 */;
	const struct usb_device_id cocci_id/* drivers/net/usb/lg-vl600.c 311 */[];
	const struct driver_info cocci_id/* drivers/net/usb/lg-vl600.c 301 */;
	struct vl600_frame_hdr cocci_id/* drivers/net/usb/lg-vl600.c 238 */;
	struct ethhdr cocci_id/* drivers/net/usb/lg-vl600.c 237 */;
	uint32_t cocci_id/* drivers/net/usb/lg-vl600.c 236 */;
	gfp_t cocci_id/* drivers/net/usb/lg-vl600.c 231 */;
	struct ethhdr *cocci_id/* drivers/net/usb/lg-vl600.c 100 */;
}
