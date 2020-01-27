cocci_test_suite() {
	struct hidma_mgmt_fileinfo cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 88 */[];
	u64 cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 56 */;
	char cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 252 */[20];
	unsigned int cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 236 */;
	struct hidma_chan_attr *cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 212 */;
	struct kobject *cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 210 */;
	struct device_attribute cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 191 */;
	struct hidma_mgmt_fileinfo {
		char *name;
		int mode;
		int (*get)(struct hidma_mgmt_dev *mdev);
		int (*set)(struct hidma_mgmt_dev *mdev, u64 val);
	} cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 19 */;
	struct device_attribute *cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 187 */;
	struct hidma_mgmt_dev *cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 185 */;
	char *cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 185 */;
	int cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 185 */;
	struct hidma_chan_attr cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 166 */;
	struct kobj_attribute *cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 158 */;
	struct hidma_chan_attr {
		struct hidma_mgmt_dev *mdev;
		int index;
		struct kobj_attribute attr;
	} cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 13 */;
	unsigned long cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 120 */;
	const char *cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 117 */;
	size_t cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 117 */;
	struct device *cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 116 */;
	ssize_t cocci_id/* drivers/dma/qcom/hidma_mgmt_sys.c 116 */;
}
