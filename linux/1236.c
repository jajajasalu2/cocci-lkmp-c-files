cocci_test_suite() {
	struct dentry *cocci_id/* drivers/usb/host/ohci-dbg.c 765 */;
	struct usb_bus *cocci_id/* drivers/usb/host/ohci-dbg.c 764 */;
	void cocci_id/* drivers/usb/host/ohci-dbg.c 762 */;
	struct inode *cocci_id/* drivers/usb/host/ohci-dbg.c 740 */;
	struct file *cocci_id/* drivers/usb/host/ohci-dbg.c 740 */;
	int cocci_id/* drivers/usb/host/ohci-dbg.c 740 */;
	unsigned long cocci_id/* drivers/usb/host/ohci-dbg.c 734 */;
	loff_t *cocci_id/* drivers/usb/host/ohci-dbg.c 705 */;
	size_t cocci_id/* drivers/usb/host/ohci-dbg.c 705 */;
	char __user *cocci_id/* drivers/usb/host/ohci-dbg.c 704 */;
	ssize_t cocci_id/* drivers/usb/host/ohci-dbg.c 704 */;
	unsigned *cocci_id/* drivers/usb/host/ohci-dbg.c 69 */;
	char *cocci_id/* drivers/usb/host/ohci-dbg.c 686 */;
	char **cocci_id/* drivers/usb/host/ohci-dbg.c 68 */;
	struct debug_buffer cocci_id/* drivers/usb/host/ohci-dbg.c 670 */;
	ssize_t (*cocci_id/* drivers/usb/host/ohci-dbg.c 666 */)(struct debug_buffer *);
	struct ohci_hcd *cocci_id/* drivers/usb/host/ohci-dbg.c 665 */;
	struct debug_buffer *cocci_id/* drivers/usb/host/ohci-dbg.c 665 */;
	struct ohci_regs __iomem *cocci_id/* drivers/usb/host/ohci-dbg.c 585 */;
	struct usb_hcd *cocci_id/* drivers/usb/host/ohci-dbg.c 583 */;
	struct list_head *cocci_id/* drivers/usb/host/ohci-dbg.c 532 */;
	u32 cocci_id/* drivers/usb/host/ohci-dbg.c 531 */;
	unsigned cocci_id/* drivers/usb/host/ohci-dbg.c 491 */;
	struct ed **cocci_id/* drivers/usb/host/ohci-dbg.c 489 */;
	struct ed *cocci_id/* drivers/usb/host/ohci-dbg.c 400 */;
	struct debug_buffer {
		ssize_t (*fill_func)(struct debug_buffer *);
		struct ohci_hcd *ohci;
		struct mutex mutex;
		size_t count;
		char *page;
	} cocci_id/* drivers/usb/host/ohci-dbg.c 391 */;
	const struct file_operations cocci_id/* drivers/usb/host/ohci-dbg.c 367 */;
	ssize_t cocci_id/* drivers/usb/host/ohci-dbg.c 364 */(struct file *,
							      char __user *,
							      size_t,
							      loff_t *);
	int cocci_id/* drivers/usb/host/ohci-dbg.c 360 */(struct inode *,
							  struct file *);
	struct td cocci_id/* drivers/usb/host/ohci-dbg.c 352 */;
	struct td *cocci_id/* drivers/usb/host/ohci-dbg.c 351 */;
	const struct ed *cocci_id/* drivers/usb/host/ohci-dbg.c 313 */;
	const struct ohci_hcd *cocci_id/* drivers/usb/host/ohci-dbg.c 312 */;
	const char *cocci_id/* drivers/usb/host/ohci-dbg.c 312 */;
	void __maybe_unused cocci_id/* drivers/usb/host/ohci-dbg.c 311 */;
	u16 cocci_id/* drivers/usb/host/ohci-dbg.c 300 */;
	const struct td *cocci_id/* drivers/usb/host/ohci-dbg.c 256 */;
	const char cocci_id/* drivers/usb/host/ohci-dbg.c 252 */[];
}
