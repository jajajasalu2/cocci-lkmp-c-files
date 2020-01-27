cocci_test_suite() {
	int cocci_id/* fs/xfs/xfs_sysfs.c 85 */;
	void cocci_id/* fs/xfs/xfs_sysfs.c 657 */;
	const struct sysfs_ops cocci_id/* fs/xfs/xfs_sysfs.c 61 */;
	const struct xfs_error_init cocci_id/* fs/xfs/xfs_sysfs.c 586 */[];
	const struct xfs_error_init cocci_id/* fs/xfs/xfs_sysfs.c 561 */[XFS_ERR_ERRNO_MAX];
	struct xfs_error_init {
		char *name;
		int max_retries;
		int retry_timeout;
	} cocci_id/* fs/xfs/xfs_sysfs.c 555 */;
	struct xfs_error_cfg *cocci_id/* fs/xfs/xfs_sysfs.c 420 */;
	struct xfs_mount cocci_id/* fs/xfs/xfs_sysfs.c 411 */;
	struct xfs_kobj *cocci_id/* fs/xfs/xfs_sysfs.c 410 */;
	struct xfs_mount *cocci_id/* fs/xfs/xfs_sysfs.c 407 */;
	struct xfs_error_cfg cocci_id/* fs/xfs/xfs_sysfs.c 404 */;
	struct xlog *cocci_id/* fs/xfs/xfs_sysfs.c 322 */;
	struct xlog cocci_id/* fs/xfs/xfs_sysfs.c 312 */;
	struct xstats *cocci_id/* fs/xfs/xfs_sysfs.c 279 */;
	struct xfs_sysfs_attr cocci_id/* fs/xfs/xfs_sysfs.c 26 */;
	struct xstats cocci_id/* fs/xfs/xfs_sysfs.c 257 */;
	struct kobj_type cocci_id/* fs/xfs/xfs_sysfs.c 242 */;
	struct attribute *cocci_id/* fs/xfs/xfs_sysfs.c 24 */;
	struct attribute *cocci_id/* fs/xfs/xfs_sysfs.c 231 */[];
	struct xfs_sysfs_attr *cocci_id/* fs/xfs/xfs_sysfs.c 23 */;
	char *cocci_id/* fs/xfs/xfs_sysfs.c 188 */;
	struct kobject *cocci_id/* fs/xfs/xfs_sysfs.c 187 */;
	ssize_t cocci_id/* fs/xfs/xfs_sysfs.c 185 */;
	size_t cocci_id/* fs/xfs/xfs_sysfs.c 175 */;
	const char *cocci_id/* fs/xfs/xfs_sysfs.c 174 */;
	struct xfs_sysfs_attr {
		struct attribute attr;
		ssize_t (*show)(struct kobject *kobject, char *buf);
		ssize_t (*store)(struct kobject *kobject, const char *buf,
				 size_t count);
	} cocci_id/* fs/xfs/xfs_sysfs.c 16 */;
}
