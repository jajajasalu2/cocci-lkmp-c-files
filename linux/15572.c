cocci_test_suite() {
	struct hfa384x_metacmd cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 884 */;
	u16 cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 882 */;
	int cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 882 */;
	struct hfa384x_cmdresult cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 801 */;
	const struct hfa384x_usbctlx *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 798 */;
	struct hfa384x_usb_rmemresp *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 764 */;
	struct usbctlx_rmem_completor *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 763 */;
	struct usbctlx_rmem_completor {
		struct usbctlx_completor head;
		const struct hfa384x_usb_rmemresp *rmemresp;
		void *data;
		unsigned int len;
	} cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 744 */;
	const struct hfa384x_usb_rridresp *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 714 */;
	struct usbctlx_rrid_completor *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 713 */;
	struct hfa384x_rridresult cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 695 */;
	struct usbctlx_rrid_completor {
		struct usbctlx_completor head;
		const struct hfa384x_usb_rridresp *rridresp;
		void *riddata;
		unsigned int riddatalen;
	} cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 684 */;
	struct hfa384x_cmdresult *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 670 */;
	const struct hfa384x_usb_statusresp *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 669 */;
	struct usbctlx_cmd_completor *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 668 */;
	struct usbctlx_cmd_completor {
		struct usbctlx_completor head;
		const struct hfa384x_usb_statusresp *cmdresp;
		struct hfa384x_cmdresult *result;
	} cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 652 */;
	struct hfa384x_rridresult *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 639 */;
	struct sk_buff *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 596 */;
	unsigned long cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 548 */;
	struct usb_device *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 525 */;
	struct net_device *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 433 */;
	struct hfa384x cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 432 */;
	struct work_struct *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 430 */;
	struct timer_list *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 3776 */;
	struct p80211_caphdr *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 3384 */;
	struct p80211_caphdr cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 3367 */;
	struct hfa384x_rx_frame *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 3351 */;
	struct hfa384x_usb_rxfrm *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 3349 */;
	struct wlandevice *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 3348 */;
	union hfa384x_usbin cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 328 */;
	struct hfa384x_rx_frame cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 3279 */;
	struct p80211_rxmeta *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 3254 */;
	gfp_t cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 323 */;
	const __le16 cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 3140 */;
	enum USBIN_ACTION{HANDLE, RESUBMIT, ABORT,} cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 2921 */;
	unsigned int cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 292 */;
	union hfa384x_usbin *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 2915 */;
	struct urb *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 286 */;
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 286 */;
	struct hfa384x_usbctlx cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 282 */;
	struct hfa384x_usbctlx *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 280 */;
	struct hfa384x *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 280 */;
	const char *const cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 267 */[];
	enum ctlx_state cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 265 */;
	const char *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 265 */;
	int cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 263 */(u16 pdrcode);
	union p80211_hdr cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 2527 */;
	int cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 249 */(struct hfa384x *hw,
								    u16 page,
								    u16 offset,
								    void *data,
								    unsigned int len);
	char *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 2488 */;
	struct hfa384x_tx_frame cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 2485 */;
	struct p80211_metawep *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 2483 */;
	union p80211_hdr *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 2482 */;
	int cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 233 */(struct hfa384x *hw,
								    enum cmd_mode mode,
								    u16 rid,
								    void *riddata,
								    unsigned int riddatalen,
								    ctlx_cmdcb_t cmdcb,
								    ctlx_usercb_t usercb,
								    void *usercb_data);
	int cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 229 */(struct hfa384x *hw,
								    struct hfa384x_metacmd *cmd);
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 223 */(const struct hfa384x_usb_rridresp *rridresp,
								     struct hfa384x_rridresult *result);
	struct pdaloc {
		u32 cardaddr;
		u16 auxctl;
	} cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 2202 */[];
	size_t cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 2197 */;
	__le16 *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 2193 */;
	int cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 219 */(const struct hfa384x_usb_statusresp *cmdresp,
								    struct hfa384x_cmdresult *result);
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 216 */(struct hfa384x *hw,
								     const struct hfa384x_usbctlx *ctlx);
	int cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 208 */(struct hfa384x *hw,
								    struct hfa384x_usbctlx *ctlx,
								    struct usbctlx_completor *completor);
	struct usbctlx_completor {
		int (*complete)(struct usbctlx_completor *completor);
	} cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 204 */;
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 201 */(struct hfa384x *hw,
								     struct hfa384x_usbctlx *ctlx);
	int cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 198 */(struct hfa384x *hw,
								    struct hfa384x_usbctlx *ctlx);
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 194 */(unsigned long data);
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 192 */(struct timer_list *t);
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 186 */(struct hfa384x *hw);
	u8 *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 1812 */;
	u32 cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 1801 */;
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 180 */(struct hfa384x *hw,
								     union hfa384x_usbin *usbin,
								     int urb_status);
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 177 */(struct wlandevice *wlandev,
								     union hfa384x_usbin *usbin);
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 175 */(struct wlandevice *wlandev,
								     struct sk_buff *skb);
	int cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 164 */(struct hfa384x *hw,
								    struct urb *tx_urb,
								    gfp_t flags);
	int cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 162 */(struct hfa384x *hw,
								    gfp_t flags);
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 160 */(struct work_struct *data);
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 157 */(struct wlandevice *wlandev,
								     struct hfa384x_usb_rxfrm *rxfrm);
	void cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 154 */(struct urb *urb);
	struct usbctlx_rmem_completor cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 1495 */;
	void *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 1457 */;
	enum cmd_mode{DOWAIT=0, DOASYNC,} cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 142 */;
	struct usbctlx_rrid_completor cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 1323 */;
	ctlx_usercb_t cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 1294 */;
	ctlx_cmdcb_t cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 1294 */;
	enum cmd_mode cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 1290 */;
	struct usbctlx_completor *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 1238 */;
	struct usbctlx_cmd_completor cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 1237 */;
	struct hfa384x_metacmd *cocci_id/* drivers/staging/wlan-ng/hfa384x_usb.c 1205 */;
}
