cocci_test_suite() {
	struct attribute *cocci_id/* drivers/staging/most/usb/usb.c 990 */[];
	size_t cocci_id/* drivers/staging/most/usb/usb.c 942 */;
	char *cocci_id/* drivers/staging/most/usb/usb.c 917 */;
	struct device_attribute *cocci_id/* drivers/staging/most/usb/usb.c 916 */;
	ssize_t cocci_id/* drivers/staging/most/usb/usb.c 916 */;
	const char *cocci_id/* drivers/staging/most/usb/usb.c 900 */;
	const struct regs *cocci_id/* drivers/staging/most/usb/usb.c 899 */;
	const struct regs cocci_id/* drivers/staging/most/usb/usb.c 881 */[];
	struct regs {
		const char *name;
		u16 reg;
	} cocci_id/* drivers/staging/most/usb/usb.c 876 */;
	const struct usb_device_id cocci_id/* drivers/staging/most/usb/usb.c 868 */[];
	const struct file_operations cocci_id/* drivers/staging/most/usb/usb.c 861 */;
	struct clear_hold_work cocci_id/* drivers/staging/most/usb/usb.c 83 */;
	struct clear_hold_work *cocci_id/* drivers/staging/most/usb/usb.c 827 */;
	struct work_struct *cocci_id/* drivers/staging/most/usb/usb.c 825 */;
	u8 cocci_id/* drivers/staging/most/usb/usb.c 786 */[6];
	struct timer_list *cocci_id/* drivers/staging/most/usb/usb.c 765 */;
	struct clear_hold_work {
		struct work_struct ws;
		struct most_dev *mdev;
		unsigned int channel;
		int pipe;
	} cocci_id/* drivers/staging/most/usb/usb.c 76 */;
	void (*cocci_id/* drivers/staging/most/usb/usb.c 742 */)(struct most_interface *,
								 unsigned char,
								 unsigned char *);
	struct most_dev cocci_id/* drivers/staging/most/usb/usb.c 74 */;
	struct most_dci_obj cocci_id/* drivers/staging/most/usb/usb.c 72 */;
	struct device *cocci_id/* drivers/staging/most/usb/usb.c 668 */;
	struct most_interface *cocci_id/* drivers/staging/most/usb/usb.c 662 */;
	struct most_dci_obj {
		struct device dev;
		struct usb_device *usb_device;
		u16 reg_addr;
	} cocci_id/* drivers/staging/most/usb/usb.c 66 */;
	u32 cocci_id/* drivers/staging/most/usb/usb.c 631 */;
	void *cocci_id/* drivers/staging/most/usb/usb.c 631 */;
	unsigned long cocci_id/* drivers/staging/most/usb/usb.c 557 */;
	struct urb *cocci_id/* drivers/staging/most/usb/usb.c 556 */;
	struct most_channel_config *const cocci_id/* drivers/staging/most/usb/usb.c 308 */;
	struct most_dev *cocci_id/* drivers/staging/most/usb/usb.c 272 */;
	struct mbo *cocci_id/* drivers/staging/most/usb/usb.c 272 */;
	spinlock_t *cocci_id/* drivers/staging/most/usb/usb.c 232 */;
	struct most_channel_config *cocci_id/* drivers/staging/most/usb/usb.c 187 */;
	unsigned int cocci_id/* drivers/staging/most/usb/usb.c 187 */;
	u8 cocci_id/* drivers/staging/most/usb/usb.c 142 */;
	__le16 *cocci_id/* drivers/staging/most/usb/usb.c 141 */;
	u16 cocci_id/* drivers/staging/most/usb/usb.c 138 */;
	u16 *cocci_id/* drivers/staging/most/usb/usb.c 138 */;
	struct usb_device *cocci_id/* drivers/staging/most/usb/usb.c 138 */;
	int cocci_id/* drivers/staging/most/usb/usb.c 138 */;
	void cocci_id/* drivers/staging/most/usb/usb.c 127 */(struct work_struct *wq_obj);
	struct usb_driver cocci_id/* drivers/staging/most/usb/usb.c 1218 */;
	struct usb_interface *cocci_id/* drivers/staging/most/usb/usb.c 1196 */;
	void cocci_id/* drivers/staging/most/usb/usb.c 1196 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/staging/most/usb/usb.c 1047 */;
	struct most_channel_capability *cocci_id/* drivers/staging/most/usb/usb.c 1046 */;
	struct usb_host_interface *cocci_id/* drivers/staging/most/usb/usb.c 1040 */;
	const struct usb_device_id *cocci_id/* drivers/staging/most/usb/usb.c 1038 */;
	struct most_dev {
		struct usb_device *usb_device;
		struct most_interface iface;
		struct most_channel_capability *cap;
		struct most_channel_config *conf;
		struct most_dci_obj *dci;
		u8 *ep_address;
		char description[MAX_STRING_LEN];
		char suffix[MAX_NUM_ENDPOINTS][MAX_SUFFIX_LEN];
		spinlock_t channel_lock[MAX_NUM_ENDPOINTS];
		bool padding_active[MAX_NUM_ENDPOINTS];
		bool is_channel_healthy[MAX_NUM_ENDPOINTS];
		struct clear_hold_work clear_work[MAX_NUM_ENDPOINTS];
		struct usb_anchor *busy_urbs;
		struct mutex io_mutex;
		struct timer_list link_stat_timer;
		struct work_struct poll_work_obj;
		void (*on_netinfo)(struct most_interface *most_iface,
				   unsigned char link_state,
				   unsigned char *addrs);
	} cocci_id/* drivers/staging/most/usb/usb.c 103 */;
	struct most_dci_obj *cocci_id/* drivers/staging/most/usb/usb.c 1020 */;
	const struct attribute_group *cocci_id/* drivers/staging/most/usb/usb.c 1013 */[];
	struct attribute_group cocci_id/* drivers/staging/most/usb/usb.c 1009 */;
}
