cocci_test_suite() {
	const struct sysfs_ops cocci_id/* samples/kobject/kset-example.c 89 */;
	struct attribute *cocci_id/* samples/kobject/kset-example.c 53 */;
	struct kobject *cocci_id/* samples/kobject/kset-example.c 52 */;
	struct foo_attribute {
		struct attribute attr;
		ssize_t (*show)(struct foo_obj *foo,
				struct foo_attribute *attr, char *buf);
		ssize_t (*store)(struct foo_obj *foo,
				 struct foo_attribute *attr, const char *buf,
				 size_t count);
	} cocci_id/* samples/kobject/kset-example.c 38 */;
	struct foo_obj cocci_id/* samples/kobject/kset-example.c 35 */;
	struct foo_obj {
		struct kobject kobj;
		int foo;
		int baz;
		int bar;
	} cocci_id/* samples/kobject/kset-example.c 29 */;
	void __exit cocci_id/* samples/kobject/kset-example.c 277 */;
	int __init cocci_id/* samples/kobject/kset-example.c 241 */;
	void cocci_id/* samples/kobject/kset-example.c 236 */;
	struct kset *cocci_id/* samples/kobject/kset-example.c 194 */;
	struct kobj_type cocci_id/* samples/kobject/kset-example.c 188 */;
	struct attribute *cocci_id/* samples/kobject/kset-example.c 175 */[];
	struct foo_attribute cocci_id/* samples/kobject/kset-example.c 168 */;
	const char *cocci_id/* samples/kobject/kset-example.c 151 */;
	size_t cocci_id/* samples/kobject/kset-example.c 151 */;
	int cocci_id/* samples/kobject/kset-example.c 141 */;
	char *cocci_id/* samples/kobject/kset-example.c 139 */;
	struct foo_obj *cocci_id/* samples/kobject/kset-example.c 138 */;
	struct foo_attribute *cocci_id/* samples/kobject/kset-example.c 138 */;
	ssize_t cocci_id/* samples/kobject/kset-example.c 138 */;
}
