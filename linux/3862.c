cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 978 */;
	const struct pci_error_handlers cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 974 */;
	pci_channel_state_t cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 962 */;
	pci_ers_result_t cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 961 */;
	struct pci_dev *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 961 */;
	void cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 95 */;
	const struct hisi_zip_hw_error *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 899 */;
	struct hisi_zip_resource {
		struct hisi_zip *hzip;
		int distance;
		struct list_head list;
	} cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 89 */;
	const char cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 84 */[];
	enum qm_hw_ver cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 780 */;
	const struct pci_device_id *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 777 */;
	struct dentry *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 550 */;
	struct debugfs_regset32 *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 549 */;
	const struct file_operations cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 537 */;
	unsigned long cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 495 */;
	const char __user *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 490 */;
	char cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 469 */[HZIP_BUF_SIZE];
	loff_t *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 466 */;
	size_t cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 466 */;
	struct file *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 465 */;
	char __user *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 465 */;
	ssize_t cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 465 */;
	int cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 450 */;
	struct hisi_qm *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 444 */;
	u32 cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 442 */;
	struct ctrl_debug_file *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 442 */;
	struct hisi_zip_ctrl *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 409 */;
	struct hisi_zip *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 394 */;
	bool cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 369 */;
	void __iomem *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 330 */;
	const struct pci_device_id cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 307 */[];
	const struct kernel_param_ops cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 291 */;
	u8 cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 260 */;
	const struct kernel_param *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 255 */;
	const char *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 255 */;
	struct debugfs_reg32 cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 230 */[];
	const u64 cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 219 */[];
	enum{HZIP_COMP_CORE0, HZIP_COMP_CORE1, HZIP_DECOMP_CORE0, HZIP_DECOMP_CORE1, HZIP_DECOMP_CORE2, HZIP_DECOMP_CORE3, HZIP_DECOMP_CORE4, HZIP_DECOMP_CORE5,} cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 208 */;
	struct hisi_zip_ctrl {
		u32 num_vfs;
		struct hisi_zip *hisi_zip;
		struct dentry *debug_root;
		struct ctrl_debug_file files[HZIP_DEBUG_FILE_NUM];
	} cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 201 */;
	struct ctrl_debug_file {
		enum ctrl_debug_file_index index;
		spinlock_t lock;
		struct hisi_zip_ctrl *ctrl;
	} cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 189 */;
	const char *const cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 184 */[];
	enum ctrl_debug_file_index{HZIP_CURRENT_QM, HZIP_CLEAR_ENABLE, HZIP_DEBUG_FILE_NUM,} cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 178 */;
	const struct hisi_zip_hw_error cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 163 */[];
	struct hisi_zip_hw_error {
		u32 int_msk;
		const char *msg;
	} cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 158 */;
	struct hisi_zip cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 145 */;
	struct device *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 111 */;
	struct list_head *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 110 */;
	struct hisi_zip_resource *cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 107 */;
	void __exit cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 1031 */;
	int __init cocci_id/* drivers/crypto/hisilicon/zip/zip_main.c 1001 */;
}
