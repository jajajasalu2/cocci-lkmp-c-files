cocci_test_suite() {
	struct sg_attr cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 62 */;
	const char *cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 60 */;
	size_t cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 60 */;
	struct kobj_attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 59 */;
	ssize_t cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 59 */;
	struct opal_msg cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 33 */;
	bool cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 31 */;
	struct sensor_group {
		char name[20];
		struct attribute_group sg;
		struct sg_attr *sgattrs;
	} *cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 25 */;
	struct sg_attr {
		u32 handle;
		struct kobj_attribute attr;
	} cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 20 */;
	struct kobject *cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 18 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 162 */;
	void __init cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 160 */;
	u32 cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 130 */;
	const __be32 *cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 129 */;
	struct sensor_group *cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 129 */;
	struct sg_attr *cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 120 */;
	int cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 120 */;
	void cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 120 */;
	struct sg_ops_info {
		int opal_no;
		const char *attr_name;
		ssize_t (*store)(struct kobject *kobj,
				 struct kobj_attribute *attr, const char *buf,
				 size_t count);
	} cocci_id/* arch/powerpc/platforms/powernv/opal-sensor-groups.c 111 */[];
}
