cocci_test_suite() {
	unsigned long cocci_id/* drivers/base/map.c 99 */;
	struct probe *cocci_id/* drivers/base/map.c 98 */;
	dev_t cocci_id/* drivers/base/map.c 95 */;
	struct kobject *cocci_id/* drivers/base/map.c 95 */;
	struct kobj_map *cocci_id/* drivers/base/map.c 95 */;
	int *cocci_id/* drivers/base/map.c 95 */;
	void cocci_id/* drivers/base/map.c 68 */;
	struct probe **cocci_id/* drivers/base/map.c 58 */;
	struct probe cocci_id/* drivers/base/map.c 44 */;
	unsigned cocci_id/* drivers/base/map.c 36 */;
	int (*cocci_id/* drivers/base/map.c 34 */)(dev_t, void *);
	kobj_probe_t *cocci_id/* drivers/base/map.c 33 */;
	int cocci_id/* drivers/base/map.c 32 */;
	struct kobj_map {
		struct probe {
			struct probe *next;
			dev_t dev;
			unsigned long range;
			struct module *owner;
			kobj_probe_t *get;
			int (*lock)(dev_t, void *);
			void *data;
		} *probes[255];
		struct mutex *lock;
	} cocci_id/* drivers/base/map.c 19 */;
	struct kobj_map cocci_id/* drivers/base/map.c 137 */;
	struct mutex *cocci_id/* drivers/base/map.c 135 */;
	void *cocci_id/* drivers/base/map.c 106 */;
	struct module *cocci_id/* drivers/base/map.c 105 */;
	struct kobject *(*cocci_id/* drivers/base/map.c 104 */)(dev_t, int *,
								void *);
}
