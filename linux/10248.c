cocci_test_suite() {
	struct vgasr_priv *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 908 */;
	const struct file_operations cocci_id/* drivers/gpu/vga/vga_switcheroo.c 899 */;
	char cocci_id/* drivers/gpu/vga/vga_switcheroo.c 778 */[64];
	loff_t *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 776 */;
	size_t cocci_id/* drivers/gpu/vga/vga_switcheroo.c 776 */;
	const char __user *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 775 */;
	ssize_t cocci_id/* drivers/gpu/vga/vga_switcheroo.c 774 */;
	struct vga_switcheroo_client *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 763 */;
	bool cocci_id/* drivers/gpu/vga/vga_switcheroo.c 761 */;
	void cocci_id/* drivers/gpu/vga/vga_switcheroo.c 761 */;
	enum vga_switcheroo_state cocci_id/* drivers/gpu/vga/vga_switcheroo.c 697 */;
	struct inode *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 667 */;
	struct file *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 667 */;
	struct seq_file *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 646 */;
	void *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 646 */;
	struct fb_info *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 528 */;
	struct list_head *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 417 */;
	enum vga_switcheroo_client_id cocci_id/* drivers/gpu/vga/vga_switcheroo.c 406 */;
	struct pci_dev *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 394 */;
	const struct vga_switcheroo_client_ops *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 292 */;
	int cocci_id/* drivers/gpu/vga/vga_switcheroo.c 291 */;
	enum vga_switcheroo_handler_flags_t cocci_id/* drivers/gpu/vga/vga_switcheroo.c 285 */;
	const struct vga_switcheroo_handler *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 236 */;
	struct vgasr_priv cocci_id/* drivers/gpu/vga/vga_switcheroo.c 174 */;
	void cocci_id/* drivers/gpu/vga/vga_switcheroo.c 171 */(struct vgasr_priv *priv);
	struct vgasr_priv {
		bool active;
		bool delayed_switch_active;
		enum vga_switcheroo_client_id delayed_client_id;
		struct dentry *debugfs_root;
		int registered_clients;
		struct list_head clients;
		const struct vga_switcheroo_handler *handler;
		enum vga_switcheroo_handler_flags_t handler_flags;
		struct mutex mux_hw_lock;
		int old_ddc_owner;
	} cocci_id/* drivers/gpu/vga/vga_switcheroo.c 149 */;
	struct vga_switcheroo_client {
		struct pci_dev *pdev;
		struct fb_info *fb_info;
		enum vga_switcheroo_state pwr_state;
		const struct vga_switcheroo_client_ops *ops;
		enum vga_switcheroo_client_id id;
		bool active;
		bool driver_power_control;
		struct list_head list;
		struct pci_dev *vga_dev;
	} cocci_id/* drivers/gpu/vga/vga_switcheroo.c 113 */;
	struct device *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 1079 */;
	struct dev_pm_domain *cocci_id/* drivers/gpu/vga/vga_switcheroo.c 1063 */;
}
