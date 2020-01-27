cocci_test_suite() {
	struct proc_dir_entry *cocci_id/* drivers/scsi/scsi_devinfo.c 847 */;
	int __init cocci_id/* drivers/scsi/scsi_devinfo.c 844 */;
	struct list_head *cocci_id/* drivers/scsi/scsi_devinfo.c 813 */;
	enum scsi_devinfo_key cocci_id/* drivers/scsi/scsi_devinfo.c 779 */;
	const char *cocci_id/* drivers/scsi/scsi_devinfo.c 779 */;
	const struct file_operations cocci_id/* drivers/scsi/scsi_devinfo.c 739 */;
	unsigned long cocci_id/* drivers/scsi/scsi_devinfo.c 735 */;
	char *cocci_id/* drivers/scsi/scsi_devinfo.c 713 */;
	size_t cocci_id/* drivers/scsi/scsi_devinfo.c 711 */;
	const char __user *cocci_id/* drivers/scsi/scsi_devinfo.c 710 */;
	ssize_t cocci_id/* drivers/scsi/scsi_devinfo.c 709 */;
	struct inode *cocci_id/* drivers/scsi/scsi_devinfo.c 697 */;
	struct file *cocci_id/* drivers/scsi/scsi_devinfo.c 697 */;
	const struct seq_operations cocci_id/* drivers/scsi/scsi_devinfo.c 690 */;
	void cocci_id/* drivers/scsi/scsi_devinfo.c 685 */;
	struct scsi_dev_info_list_table cocci_id/* drivers/scsi/scsi_devinfo.c 666 */;
	struct scsi_dev_info_list_table *cocci_id/* drivers/scsi/scsi_devinfo.c 665 */;
	struct double_list *cocci_id/* drivers/scsi/scsi_devinfo.c 664 */;
	loff_t *cocci_id/* drivers/scsi/scsi_devinfo.c 662 */;
	struct seq_file *cocci_id/* drivers/scsi/scsi_devinfo.c 662 */;
	void *cocci_id/* drivers/scsi/scsi_devinfo.c 662 */;
	loff_t cocci_id/* drivers/scsi/scsi_devinfo.c 644 */;
	struct scsi_dev_info_list cocci_id/* drivers/scsi/scsi_devinfo.c 629 */;
	struct scsi_dev_info_list *cocci_id/* drivers/scsi/scsi_devinfo.c 628 */;
	int cocci_id/* drivers/scsi/scsi_devinfo.c 623 */;
	struct double_list {
		struct list_head *top;
		struct list_head *bottom;
	} cocci_id/* drivers/scsi/scsi_devinfo.c 618 */;
	const unsigned char *cocci_id/* drivers/scsi/scsi_devinfo.c 573 */;
	struct scsi_device *cocci_id/* drivers/scsi/scsi_devinfo.c 572 */;
	struct {
		char *vendor;
		char *model;
		char *revision;
		blist_flags_t flags;
	} cocci_id/* drivers/scsi/scsi_devinfo.c 50 */[]__initdata;
	char cocci_id/* drivers/scsi/scsi_devinfo.c 39 */[256];
	blist_flags_t cocci_id/* drivers/scsi/scsi_devinfo.c 37 */;
	unsigned long long cocci_id/* drivers/scsi/scsi_devinfo.c 369 */;
	struct scsi_dev_info_list_table {
		struct list_head node;
		struct list_head scsi_dev_info_list;
		const char *name;
		int key;
	} cocci_id/* drivers/scsi/scsi_devinfo.c 29 */;
	struct scsi_dev_info_list {
		struct list_head dev_info_list;
		char vendor[8];
		char model[16];
		blist_flags_t flags;
		unsigned compatible;
	} cocci_id/* drivers/scsi/scsi_devinfo.c 21 */;
}
