cocci_test_suite() {
	const struct brport_attribute **cocci_id/* net/bridge/br_sysfs_if.c 363 */;
	struct net_bridge *cocci_id/* net/bridge/br_sysfs_if.c 362 */;
	struct net_bridge_port *cocci_id/* net/bridge/br_sysfs_if.c 360 */;
	int cocci_id/* net/bridge/br_sysfs_if.c 360 */;
	const struct sysfs_ops cocci_id/* net/bridge/br_sysfs_if.c 350 */;
	unsigned long cocci_id/* net/bridge/br_sysfs_if.c 310 */;
	const char *cocci_id/* net/bridge/br_sysfs_if.c 305 */;
	size_t cocci_id/* net/bridge/br_sysfs_if.c 305 */;
	struct brport_attribute *cocci_id/* net/bridge/br_sysfs_if.c 294 */;
	struct attribute *cocci_id/* net/bridge/br_sysfs_if.c 292 */;
	char *cocci_id/* net/bridge/br_sysfs_if.c 292 */;
	struct kobject *cocci_id/* net/bridge/br_sysfs_if.c 291 */;
	ssize_t cocci_id/* net/bridge/br_sysfs_if.c 291 */;
	struct brport_attribute cocci_id/* net/bridge/br_sysfs_if.c 289 */;
	const struct brport_attribute cocci_id/* net/bridge/br_sysfs_if.c 28 */;
	const struct brport_attribute *cocci_id/* net/bridge/br_sysfs_if.c 252 */[];
	struct net_device *cocci_id/* net/bridge/br_sysfs_if.c 206 */;
	struct brport_attribute {
		struct attribute attr;
		ssize_t (*show)(struct net_bridge_port *, char *);
		int (*store)(struct net_bridge_port *, unsigned long);
		int (*store_raw)(struct net_bridge_port *, char *);
	} cocci_id/* net/bridge/br_sysfs_if.c 20 */;
}
