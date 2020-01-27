cocci_test_suite() {
	const char cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 96 */[];
	struct usbhsh_ep *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 870 */;
	struct usbhsh_hpriv {
		struct usbhs_mod mod;
		struct usbhs_pipe *dcp;
		struct usbhsh_device udev[USBHSH_DEVICE_MAX];
		u32 port_stat;
		struct completion setup_ack_done;
	} cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 84 */;
	gfp_t cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 811 */;
	struct usbhs_pipe *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 810 */;
	struct urb *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 809 */;
	struct usbhsh_request *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 800 */;
	struct usbhs_pkt *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 798 */;
	void cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 797 */;
	struct usb_ctrlrequest cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 754 */;
	struct usbhsh_ep {
		struct usbhs_pipe *pipe;
		struct usbhsh_device *udev;
		struct usb_host_endpoint *ep;
		struct list_head ep_list;
		unsigned int counter;
	} cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 74 */;
	struct usb_ctrlrequest *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 738 */;
	struct usbhsh_device {
		struct usb_device *usbv;
		struct list_head ep_list_head;
	} cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 69 */;
	struct usbhsh_request {
		struct urb *urb;
		struct usbhs_pkt pkt;
	} cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 64 */;
	unsigned long cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 492 */;
	struct usb_device *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 454 */;
	struct usbhsh_ep cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 377 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 374 */;
	struct usb_host_endpoint *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 371 */;
	struct usbhsh_device *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 241 */(struct usbhsh_hpriv *hpriv,
										     struct urb *urb);
	struct usbhsh_device *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1522 */;
	struct usb_hcd *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1521 */;
	struct usbhsh_request cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 150 */;
	struct usbhs_mod *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1452 */;
	struct renesas_usbhs_driver_pipe_config *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1403 */;
	struct usbhs_irq_state *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1311 */;
	const struct hc_driver cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1279 */;
	__le32 *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1214 */;
	struct usb_hcd cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 121 */;
	void *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 121 */;
	struct device *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1199 */;
	struct usb_hub_descriptor *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1198 */;
	struct usbhs_priv *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1197 */;
	char *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1195 */;
	u16 cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1194 */;
	struct usbhsh_hpriv *cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1193 */;
	int cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 1193 */;
	struct usbhsh_hpriv cocci_id/* drivers/usb/renesas_usbhs/mod_host.c 102 */;
}
