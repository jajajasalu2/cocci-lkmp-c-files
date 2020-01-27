cocci_test_suite() {
	char cocci_id/* drivers/fsi/fsi-sbefifo.c 936 */[32];
	struct platform_device *cocci_id/* drivers/fsi/fsi-sbefifo.c 935 */;
	struct device_node *cocci_id/* drivers/fsi/fsi-sbefifo.c 934 */;
	struct fsi_device *cocci_id/* drivers/fsi/fsi-sbefifo.c 932 */;
	struct sbefifo cocci_id/* drivers/fsi/fsi-sbefifo.c 920 */;
	const struct file_operations cocci_id/* drivers/fsi/fsi-sbefifo.c 910 */;
	const char __user *cocci_id/* drivers/fsi/fsi-sbefifo.c 835 */;
	enum sbe_state{SBE_STATE_UNKNOWN=0x0, SBE_STATE_IPLING=0x1, SBE_STATE_ISTEP=0x2, SBE_STATE_MPIPL=0x3, SBE_STATE_RUNTIME=0x4, SBE_STATE_DMT=0x5, SBE_STATE_DUMP=0x6, SBE_STATE_FAILURE=0x7, SBE_STATE_QUIESCE=0x8,} cocci_id/* drivers/fsi/fsi-sbefifo.c 80 */;
	struct iovec cocci_id/* drivers/fsi/fsi-sbefifo.c 792 */;
	loff_t *cocci_id/* drivers/fsi/fsi-sbefifo.c 787 */;
	char __user *cocci_id/* drivers/fsi/fsi-sbefifo.c 786 */;
	ssize_t cocci_id/* drivers/fsi/fsi-sbefifo.c 786 */;
	struct sbefifo_user cocci_id/* drivers/fsi/fsi-sbefifo.c 770 */;
	struct inode *cocci_id/* drivers/fsi/fsi-sbefifo.c 765 */;
	struct file *cocci_id/* drivers/fsi/fsi-sbefifo.c 765 */;
	struct sbefifo_user *cocci_id/* drivers/fsi/fsi-sbefifo.c 757 */;
	struct iov_iter *cocci_id/* drivers/fsi/fsi-sbefifo.c 666 */;
	struct sbefifo *cocci_id/* drivers/fsi/fsi-sbefifo.c 664 */;
	__be32 cocci_id/* drivers/fsi/fsi-sbefifo.c 630 */[2];
	__be32 *cocci_id/* drivers/fsi/fsi-sbefifo.c 628 */;
	struct kvec cocci_id/* drivers/fsi/fsi-sbefifo.c 627 */;
	struct iov_iter cocci_id/* drivers/fsi/fsi-sbefifo.c 626 */;
	unsigned long cocci_id/* drivers/fsi/fsi-sbefifo.c 530 */;
	__be32 cocci_id/* drivers/fsi/fsi-sbefifo.c 274 */;
	u32 *cocci_id/* drivers/fsi/fsi-sbefifo.c 249 */;
	size_t *cocci_id/* drivers/fsi/fsi-sbefifo.c 207 */;
	u16 cocci_id/* drivers/fsi/fsi-sbefifo.c 206 */;
	u32 cocci_id/* drivers/fsi/fsi-sbefifo.c 149 */;
	char *cocci_id/* drivers/fsi/fsi-sbefifo.c 146 */;
	char cocci_id/* drivers/fsi/fsi-sbefifo.c 145 */[FFDC_LSIZE];
	int cocci_id/* drivers/fsi/fsi-sbefifo.c 143 */;
	bool cocci_id/* drivers/fsi/fsi-sbefifo.c 141 */;
	size_t cocci_id/* drivers/fsi/fsi-sbefifo.c 141 */;
	const __be32 *cocci_id/* drivers/fsi/fsi-sbefifo.c 140 */;
	struct device *cocci_id/* drivers/fsi/fsi-sbefifo.c 140 */;
	void cocci_id/* drivers/fsi/fsi-sbefifo.c 140 */;
	struct sbefifo_user {
		struct sbefifo *sbefifo;
		struct mutex file_lock;
		void *cmd_page;
		void *pending_cmd;
		size_t pending_len;
	} cocci_id/* drivers/fsi/fsi-sbefifo.c 129 */;
	struct sbefifo {
		uint32_t magic;
#define SBEFIFO_MAGIC 0x53424546
		struct fsi_device *fsi_dev;
		struct device dev;
		struct cdev cdev;
		struct mutex lock;
		bool broken;
		bool dead;
		bool async_ffdc;
	} cocci_id/* drivers/fsi/fsi-sbefifo.c 117 */;
	struct fsi_driver cocci_id/* drivers/fsi/fsi-sbefifo.c 1039 */;
	struct fsi_device_id cocci_id/* drivers/fsi/fsi-sbefifo.c 1031 */[];
	void *cocci_id/* drivers/fsi/fsi-sbefifo.c 1002 */;
}
