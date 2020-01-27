cocci_test_suite() {
	struct ipheth_device {
		struct usb_device *udev;
		struct usb_interface *intf;
		struct net_device *net;
		struct urb *tx_urb;
		struct urb *rx_urb;
		unsigned char *tx_buf;
		unsigned char *rx_buf;
		unsigned char *ctrl_buf;
		u8 bulk_in;
		u8 bulk_out;
		struct delayed_work carrier_work;
		bool confirmed_pairing;
	} cocci_id/* drivers/net/usb/ipheth.c 87 */;
	const struct usb_device_id cocci_id/* drivers/net/usb/ipheth.c 79 */[];
	struct usb_driver cocci_id/* drivers/net/usb/ipheth.c 536 */;
	struct usb_interface *cocci_id/* drivers/net/usb/ipheth.c 520 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/net/usb/ipheth.c 434 */;
	struct usb_host_interface *cocci_id/* drivers/net/usb/ipheth.c 433 */;
	const struct usb_device_id *cocci_id/* drivers/net/usb/ipheth.c 430 */;
	const struct net_device_ops cocci_id/* drivers/net/usb/ipheth.c 422 */;
	const struct ethtool_ops cocci_id/* drivers/net/usb/ipheth.c 418 */;
	u32 cocci_id/* drivers/net/usb/ipheth.c 412 */;
	struct net_device *cocci_id/* drivers/net/usb/ipheth.c 352 */;
	gfp_t cocci_id/* drivers/net/usb/ipheth.c 313 */;
	struct ipheth_device cocci_id/* drivers/net/usb/ipheth.c 275 */;
	struct work_struct *cocci_id/* drivers/net/usb/ipheth.c 273 */;
	void cocci_id/* drivers/net/usb/ipheth.c 273 */;
	struct usb_device *cocci_id/* drivers/net/usb/ipheth.c 241 */;
	char *cocci_id/* drivers/net/usb/ipheth.c 168 */;
	struct sk_buff *cocci_id/* drivers/net/usb/ipheth.c 166 */;
	u8 *cocci_id/* drivers/net/usb/ipheth.c 108 */;
	struct urb *cocci_id/* drivers/net/usb/ipheth.c 106 */;
	struct ipheth_device *cocci_id/* drivers/net/usb/ipheth.c 104 */;
	int cocci_id/* drivers/net/usb/ipheth.c 104 */;
	int cocci_id/* drivers/net/usb/ipheth.c 102 */(struct ipheth_device *dev,
						       gfp_t mem_flags);
}
