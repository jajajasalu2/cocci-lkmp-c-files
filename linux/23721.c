cocci_test_suite() {
	struct device *cocci_id/* sound/hda/hdac_sysfs.c 98 */;
	struct hdac_device **cocci_id/* sound/hda/hdac_sysfs.c 96 */;
	struct widget_attribute {
		struct attribute attr;
		ssize_t (*show)(struct hdac_device *codec, hda_nid_t nid,
				struct widget_attribute *attr, char *buf);
		ssize_t (*store)(struct hdac_device *codec, hda_nid_t nid,
				 struct widget_attribute *attr,
				 const char *buf, size_t count);
	} cocci_id/* sound/hda/hdac_sysfs.c 87 */;
	struct widget_attribute cocci_id/* sound/hda/hdac_sysfs.c 85 */;
	const struct attribute_group *cocci_id/* sound/hda/hdac_sysfs.c 73 */[];
	struct attribute_group cocci_id/* sound/hda/hdac_sysfs.c 69 */;
	struct attribute *cocci_id/* sound/hda/hdac_sysfs.c 56 */[];
	struct device_attribute *cocci_id/* sound/hda/hdac_sysfs.c 49 */;
	struct hdac_widget_tree *cocci_id/* sound/hda/hdac_sysfs.c 425 */;
	struct kobject **cocci_id/* sound/hda/hdac_sysfs.c 340 */;
	const struct attribute_group *cocci_id/* sound/hda/hdac_sysfs.c 339 */;
	hda_nid_t cocci_id/* sound/hda/hdac_sysfs.c 338 */;
	struct kobject *cocci_id/* sound/hda/hdac_sysfs.c 338 */;
	int cocci_id/* sound/hda/hdac_sysfs.c 338 */;
	void cocci_id/* sound/hda/hdac_sysfs.c 311 */;
	const struct attribute_group cocci_id/* sound/hda/hdac_sysfs.c 307 */;
	hda_nid_t cocci_id/* sound/hda/hdac_sysfs.c 256 */[32];
	struct widget_attribute *cocci_id/* sound/hda/hdac_sysfs.c 220 */;
	char *cocci_id/* sound/hda/hdac_sysfs.c 220 */;
	struct hdac_device *cocci_id/* sound/hda/hdac_sysfs.c 219 */;
	ssize_t cocci_id/* sound/hda/hdac_sysfs.c 219 */;
	bool cocci_id/* sound/hda/hdac_sysfs.c 188 */;
	unsigned int cocci_id/* sound/hda/hdac_sysfs.c 179 */;
	struct kobj_type cocci_id/* sound/hda/hdac_sysfs.c 151 */;
	const struct sysfs_ops cocci_id/* sound/hda/hdac_sysfs.c 141 */;
	struct hdac_widget_tree {
		struct kobject *root;
		struct kobject *afg;
		struct kobject **nodes;
	} cocci_id/* sound/hda/hdac_sysfs.c 13 */;
	const char *cocci_id/* sound/hda/hdac_sysfs.c 126 */;
	size_t cocci_id/* sound/hda/hdac_sysfs.c 126 */;
	struct attribute *cocci_id/* sound/hda/hdac_sysfs.c 109 */;
}
