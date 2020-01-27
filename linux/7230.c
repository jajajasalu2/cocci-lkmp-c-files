cocci_test_suite() {
	struct sk_buff *cocci_id/* drivers/bluetooth/hci_vhci.c 79 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/hci_vhci.c 78 */;
	__u8 cocci_id/* drivers/bluetooth/hci_vhci.c 76 */;
	struct vhci_data *cocci_id/* drivers/bluetooth/hci_vhci.c 76 */;
	int cocci_id/* drivers/bluetooth/hci_vhci.c 76 */;
	struct miscdevice cocci_id/* drivers/bluetooth/hci_vhci.c 360 */;
	const struct file_operations cocci_id/* drivers/bluetooth/hci_vhci.c 350 */;
	struct vhci_data {
		struct hci_dev *hdev;
		wait_queue_head_t read_wait;
		struct sk_buff_head readq;
		struct mutex open_mutex;
		struct delayed_work open_timeout;
	} cocci_id/* drivers/bluetooth/hci_vhci.c 32 */;
	struct vhci_data cocci_id/* drivers/bluetooth/hci_vhci.c 311 */;
	struct inode *cocci_id/* drivers/bluetooth/hci_vhci.c 307 */;
	struct file *cocci_id/* drivers/bluetooth/hci_vhci.c 307 */;
	bool cocci_id/* drivers/bluetooth/hci_vhci.c 30 */;
	struct work_struct *cocci_id/* drivers/bluetooth/hci_vhci.c 299 */;
	void cocci_id/* drivers/bluetooth/hci_vhci.c 299 */;
	__poll_t cocci_id/* drivers/bluetooth/hci_vhci.c 287 */;
	poll_table *cocci_id/* drivers/bluetooth/hci_vhci.c 287 */;
	struct kiocb *cocci_id/* drivers/bluetooth/hci_vhci.c 279 */;
	loff_t *cocci_id/* drivers/bluetooth/hci_vhci.c 248 */;
	unsigned int cocci_id/* drivers/bluetooth/hci_vhci.c 222 */;
	char __user *cocci_id/* drivers/bluetooth/hci_vhci.c 217 */;
	__u8 *cocci_id/* drivers/bluetooth/hci_vhci.c 174 */;
	size_t cocci_id/* drivers/bluetooth/hci_vhci.c 157 */;
	struct iov_iter *cocci_id/* drivers/bluetooth/hci_vhci.c 155 */;
	ssize_t cocci_id/* drivers/bluetooth/hci_vhci.c 154 */;
}
