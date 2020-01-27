cocci_test_suite() {
	struct dfl_fpga_enum_info *cocci_id/* drivers/fpga/dfl.c 875 */;
	struct dfl_chardev_info cocci_id/* drivers/fpga/dfl.c 83 */[];
	struct dfl_chardev_info {
		const char *name;
		dev_t devt;
	} cocci_id/* drivers/fpga/dfl.c 77 */;
	unsigned long long cocci_id/* drivers/fpga/dfl.c 751 */;
	resource_size_t cocci_id/* drivers/fpga/dfl.c 650 */;
	struct dfl_fpga_enum_dfl *cocci_id/* drivers/fpga/dfl.c 650 */;
	struct dfl_dev_info cocci_id/* drivers/fpga/dfl.c 65 */[];
	u8 cocci_id/* drivers/fpga/dfl.c 628 */;
	u16 cocci_id/* drivers/fpga/dfl.c 627 */;
	void cocci_id/* drivers/fpga/dfl.c 593 */;
	struct dfl_dev_info {
		const char *name;
		u32 dfh_id;
		struct idr id;
		enum dfl_fpga_devt_type devt_type;
	} cocci_id/* drivers/fpga/dfl.c 57 */;
	void __iomem *cocci_id/* drivers/fpga/dfl.c 557 */;
	struct dfl_feature *cocci_id/* drivers/fpga/dfl.c 522 */;
	enum dfl_id_type cocci_id/* drivers/fpga/dfl.c 474 */;
	struct dfl_feature_info *cocci_id/* drivers/fpga/dfl.c 473 */;
	struct build_feature_devs_info *cocci_id/* drivers/fpga/dfl.c 469 */;
	int cocci_id/* drivers/fpga/dfl.c 469 */;
	const char *cocci_id/* drivers/fpga/dfl.c 45 */[DFL_ID_MAX];
	struct dfl_feature_info {
		u64 fid;
		struct resource mmio_res;
		void __iomem *ioaddr;
		struct list_head node;
	} cocci_id/* drivers/fpga/dfl.c 446 */;
	struct lock_class_key cocci_id/* drivers/fpga/dfl.c 43 */[DFL_ID_MAX];
	struct build_feature_devs_info {
		struct device *dev;
		struct dfl_fpga_cdev *cdev;
		struct platform_device *feature_dev;
		void __iomem *ioaddr;
		struct list_head sub_features;
		int feature_num;
	} cocci_id/* drivers/fpga/dfl.c 429 */;
	struct module *cocci_id/* drivers/fpga/dfl.c 388 */;
	const struct file_operations *cocci_id/* drivers/fpga/dfl.c 387 */;
	enum dfl_fpga_devt_type{DFL_FPGA_DEVT_FME, DFL_FPGA_DEVT_PORT, DFL_FPGA_DEVT_MAX,} cocci_id/* drivers/fpga/dfl.c 37 */;
	dev_t cocci_id/* drivers/fpga/dfl.c 369 */;
	enum dfl_fpga_devt_type cocci_id/* drivers/fpga/dfl.c 369 */;
	enum dfl_id_type{FME_ID, PORT_ID, DFL_ID_MAX,} cocci_id/* drivers/fpga/dfl.c 31 */;
	const struct dfl_feature_id *cocci_id/* drivers/fpga/dfl.c 290 */;
	struct dfl_feature_driver *cocci_id/* drivers/fpga/dfl.c 288 */;
	int *cocci_id/* drivers/fpga/dfl.c 238 */;
	struct dfl_fpga_port_ops *cocci_id/* drivers/fpga/dfl.c 235 */;
	u32 cocci_id/* drivers/fpga/dfl.c 135 */;
	void __exit cocci_id/* drivers/fpga/dfl.c 1233 */;
	u64 cocci_id/* drivers/fpga/dfl.c 1155 */;
	bool cocci_id/* drivers/fpga/dfl.c 1152 */;
	struct device *cocci_id/* drivers/fpga/dfl.c 1151 */;
	int __init cocci_id/* drivers/fpga/dfl.c 1056 */;
	struct dfl_feature_platform_data *cocci_id/* drivers/fpga/dfl.c 1042 */;
	int (*cocci_id/* drivers/fpga/dfl.c 1040 */)(struct platform_device *,
						     void *);
	struct dfl_fpga_cdev *cocci_id/* drivers/fpga/dfl.c 1039 */;
	void *cocci_id/* drivers/fpga/dfl.c 1039 */;
	struct platform_device *cocci_id/* drivers/fpga/dfl.c 1038 */;
}
