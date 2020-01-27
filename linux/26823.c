cocci_test_suite() {
	struct kobj_type cocci_id/* fs/orangefs/orangefs-sysfs.c 935 */;
	struct attribute *cocci_id/* fs/orangefs/orangefs-sysfs.c 927 */[];
	struct orangefs_attribute cocci_id/* fs/orangefs/orangefs-sysfs.c 903 */;
	__u32 cocci_id/* fs/orangefs/orangefs-sysfs.c 326 */;
	struct orangefs_kernel_op_s *cocci_id/* fs/orangefs/orangefs-sysfs.c 323 */;
	const struct sysfs_ops cocci_id/* fs/orangefs/orangefs-sysfs.c 205 */;
	size_t cocci_id/* fs/orangefs/orangefs-sysfs.c 191 */;
	const char *cocci_id/* fs/orangefs/orangefs-sysfs.c 190 */;
	struct orangefs_attribute *cocci_id/* fs/orangefs/orangefs-sysfs.c 180 */;
	char *cocci_id/* fs/orangefs/orangefs-sysfs.c 178 */;
	struct attribute *cocci_id/* fs/orangefs/orangefs-sysfs.c 177 */;
	ssize_t cocci_id/* fs/orangefs/orangefs-sysfs.c 176 */;
	struct orangefs_attribute {
		struct attribute attr;
		ssize_t (*show)(struct kobject *kobj,
				struct orangefs_attribute *attr, char *buf);
		ssize_t (*store)(struct kobject *kobj,
				 struct orangefs_attribute *attr,
				 const char *buf, size_t count);
	} cocci_id/* fs/orangefs/orangefs-sysfs.c 165 */;
	void cocci_id/* fs/orangefs/orangefs-sysfs.c 1254 */;
	int cocci_id/* fs/orangefs/orangefs-sysfs.c 1112 */;
	struct kobject *cocci_id/* fs/orangefs/orangefs-sysfs.c 1105 */;
}
