cocci_test_suite() {
	struct ktermios *cocci_id/* net/bluetooth/rfcomm/tty.c 858 */;
	unsigned long cocci_id/* net/bluetooth/rfcomm/tty.c 825 */;
	uint cocci_id/* net/bluetooth/rfcomm/tty.c 793 */;
	const unsigned char *cocci_id/* net/bluetooth/rfcomm/tty.c 783 */;
	struct file *cocci_id/* net/bluetooth/rfcomm/tty.c 773 */;
	void cocci_id/* net/bluetooth/rfcomm/tty.c 77 */(struct rfcomm_dlc *dlc,
							 u8 v24_sig);
	void cocci_id/* net/bluetooth/rfcomm/tty.c 76 */(struct rfcomm_dlc *dlc,
							 int err);
	void cocci_id/* net/bluetooth/rfcomm/tty.c 75 */(struct rfcomm_dlc *dlc,
							 struct sk_buff *skb);
	u8 cocci_id/* net/bluetooth/rfcomm/tty.c 643 */;
	unsigned int cocci_id/* net/bluetooth/rfcomm/tty.c 582 */;
	struct rfcomm_dev_info cocci_id/* net/bluetooth/rfcomm/tty.c 557 */;
	u16 __user *cocci_id/* net/bluetooth/rfcomm/tty.c 513 */;
	u16 cocci_id/* net/bluetooth/rfcomm/tty.c 509 */;
	struct rfcomm_dev_info *cocci_id/* net/bluetooth/rfcomm/tty.c 507 */;
	struct rfcomm_dev_list_req *cocci_id/* net/bluetooth/rfcomm/tty.c 506 */;
	struct rfcomm_dev {
		struct tty_port port;
		struct list_head list;
		char name[12];
		int id;
		unsigned long flags;
		int err;
		unsigned long status;
		bdaddr_t src;
		bdaddr_t dst;
		u8 channel;
		uint modem_status;
		struct rfcomm_dlc *dlc;
		struct device *tty_dev;
		atomic_t wmem_alloc;
		struct sk_buff_head pending;
	} cocci_id/* net/bluetooth/rfcomm/tty.c 46 */;
	struct tty_struct *cocci_id/* net/bluetooth/rfcomm/tty.c 442 */;
	struct tty_driver *cocci_id/* net/bluetooth/rfcomm/tty.c 44 */;
	struct rfcomm_dlc *cocci_id/* net/bluetooth/rfcomm/tty.c 393 */;
	struct rfcomm_dev_req cocci_id/* net/bluetooth/rfcomm/tty.c 392 */;
	struct sock *cocci_id/* net/bluetooth/rfcomm/tty.c 390 */;
	void __user *cocci_id/* net/bluetooth/rfcomm/tty.c 390 */;
	int cocci_id/* net/bluetooth/rfcomm/tty.c 390 */;
	gfp_t cocci_id/* net/bluetooth/rfcomm/tty.c 378 */;
	void *cocci_id/* net/bluetooth/rfcomm/tty.c 374 */;
	struct device *cocci_id/* net/bluetooth/rfcomm/tty.c 320 */;
	struct sk_buff *cocci_id/* net/bluetooth/rfcomm/tty.c 280 */;
	struct rfcomm_dev cocci_id/* net/bluetooth/rfcomm/tty.c 223 */;
	struct list_head *cocci_id/* net/bluetooth/rfcomm/tty.c 220 */;
	struct rfcomm_dev_req *cocci_id/* net/bluetooth/rfcomm/tty.c 216 */;
	struct rfcomm_dev *cocci_id/* net/bluetooth/rfcomm/tty.c 216 */;
	struct device_attribute *cocci_id/* net/bluetooth/rfcomm/tty.c 201 */;
	char *cocci_id/* net/bluetooth/rfcomm/tty.c 201 */;
	ssize_t cocci_id/* net/bluetooth/rfcomm/tty.c 201 */;
	struct hci_conn *cocci_id/* net/bluetooth/rfcomm/tty.c 179 */;
	struct hci_dev *cocci_id/* net/bluetooth/rfcomm/tty.c 178 */;
	const struct tty_port_operations cocci_id/* net/bluetooth/rfcomm/tty.c 142 */;
	void cocci_id/* net/bluetooth/rfcomm/tty.c 1158 */;
	int __init cocci_id/* net/bluetooth/rfcomm/tty.c 1126 */;
	struct tty_port *cocci_id/* net/bluetooth/rfcomm/tty.c 111 */;
	const struct tty_operations cocci_id/* net/bluetooth/rfcomm/tty.c 1106 */;
	char cocci_id/* net/bluetooth/rfcomm/tty.c 1043 */;
}
