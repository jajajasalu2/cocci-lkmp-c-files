cocci_test_suite() {
	struct usb_gadget_driver *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 948 */;
	struct usb_gadget *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 947 */;
	struct usbhs_mod_info *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 934 */;
	struct usbhsg_uep cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 93 */;
	struct usbhsg_request cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 91 */;
	struct usbhs_mod *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 818 */;
	u32 cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 814 */;
	const struct usb_ep_ops cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 778 */;
	unsigned long cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 730 */;
	struct device *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 729 */;
	struct usbhs_priv *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 728 */;
	struct usbhsg_gpriv *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 727 */;
	struct usbhs_pipe *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 726 */;
	struct usbhsg_uep *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 725 */;
	struct usb_ep *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 723 */;
	int cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 723 */;
	gfp_t cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 660 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 580 */;
	struct usbhsg_recip_handle {
		char *name;
		int (*device)(struct usbhs_priv *priv, struct usbhsg_uep *uep,
			      struct usb_ctrlrequest *ctrl);
		int (*interface)(struct usbhs_priv *priv,
				 struct usbhsg_uep *uep,
				 struct usb_ctrlrequest *ctrl);
		int (*endpoint)(struct usbhs_priv *priv,
				struct usbhsg_uep *uep,
				struct usb_ctrlrequest *ctrl);
	} cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 58 */;
	struct usbhsg_recip_handle *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 484 */;
	struct usb_ctrlrequest cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 483 */;
	struct usbhs_irq_state *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 477 */;
	char *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 414 */;
	int (*cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 412 */)(struct usbhs_priv *priv,
									struct usbhsg_uep *uep,
									struct usb_ctrlrequest *ctrl);
	struct usbhsg_gpriv {
		struct usb_gadget gadget;
		struct usbhs_mod mod;
		struct usbhsg_uep *uep;
		int uep_size;
		struct usb_gadget_driver *driver;
		struct usb_phy *transceiver;
		bool vbus_active;
		u32 status;
#define USBHSG_STATUS_STARTED (1 << 0)
#define USBHSG_STATUS_REGISTERD (1 << 1)
#define USBHSG_STATUS_WEDGE (1 << 2)
#define USBHSG_STATUS_SELF_POWERED (1 << 3)
#define USBHSG_STATUS_SOFT_CONNECT (1 << 4)
						} cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 39 */;
	__le16 *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 318 */;
	unsigned short cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 312 */;
	struct usb_request *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 302 */;
	struct usbhsg_uep {
		struct usb_ep ep;
		struct usbhs_pipe *pipe;
		spinlock_t lock;
		char ep_name[EP_NAME_SIZE];
		struct usbhsg_gpriv *gpriv;
	} cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 29 */;
	struct usbhsg_gpriv cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 28 */;
	struct usbhsg_recip_handle cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 250 */;
	struct usb_ctrlrequest *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 232 */;
	struct usbhsg_request {
		struct usb_request req;
		struct usbhs_pkt pkt;
	} cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 22 */;
	enum dma_data_direction cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 193 */;
	struct usbhs_pkt *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 187 */;
	struct usbhsg_request *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 119 */;
	void cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 118 */;
	struct renesas_usbhs_driver_pipe_config *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 1081 */;
	const struct usb_gadget_ops cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 1050 */;
	struct platform_device *cocci_id/* drivers/usb/renesas_usbhs/mod_gadget.c 1041 */;
}
