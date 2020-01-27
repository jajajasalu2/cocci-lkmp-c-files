cocci_test_suite() {
	void cocci_id/* drivers/xen/privcmd-buf.c 98 */;
	struct privcmd_buf_vma_private cocci_id/* drivers/xen/privcmd-buf.c 74 */;
	struct inode *cocci_id/* drivers/xen/privcmd-buf.c 37 */;
	struct privcmd_buf_vma_private {
		struct privcmd_buf_private *file_priv;
		struct list_head list;
		unsigned int users;
		unsigned int n_pages;
		struct page *pages[];
	} cocci_id/* drivers/xen/privcmd-buf.c 29 */;
	struct privcmd_buf_private {
		struct mutex lock;
		struct list_head list;
	} cocci_id/* drivers/xen/privcmd-buf.c 24 */;
	struct miscdevice cocci_id/* drivers/xen/privcmd-buf.c 187 */;
	const struct file_operations cocci_id/* drivers/xen/privcmd-buf.c 179 */;
	unsigned int cocci_id/* drivers/xen/privcmd-buf.c 137 */;
	unsigned long cocci_id/* drivers/xen/privcmd-buf.c 136 */;
	struct privcmd_buf_vma_private *cocci_id/* drivers/xen/privcmd-buf.c 135 */;
	struct privcmd_buf_private *cocci_id/* drivers/xen/privcmd-buf.c 134 */;
	struct vm_area_struct *cocci_id/* drivers/xen/privcmd-buf.c 132 */;
	struct file *cocci_id/* drivers/xen/privcmd-buf.c 132 */;
	int cocci_id/* drivers/xen/privcmd-buf.c 132 */;
	const struct vm_operations_struct cocci_id/* drivers/xen/privcmd-buf.c 126 */;
	void *cocci_id/* drivers/xen/privcmd-buf.c 121 */;
	vm_fault_t cocci_id/* drivers/xen/privcmd-buf.c 117 */;
	struct vm_fault *cocci_id/* drivers/xen/privcmd-buf.c 117 */;
}
