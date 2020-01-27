cocci_test_suite() {
	struct devres cocci_id/* drivers/base/devres.c 99 */;
	struct pages_devres {
		unsigned long addr;
		unsigned int order;
	} cocci_id/* drivers/base/devres.c 978 */;
	const void *cocci_id/* drivers/base/devres.c 940 */;
	va_list cocci_id/* drivers/base/devres.c 922 */;
	char *cocci_id/* drivers/base/devres.c 920 */;
	struct action_devres cocci_id/* drivers/base/devres.c 728 */;
	void (*cocci_id/* drivers/base/devres.c 723 */)(void *);
	struct action_devres *cocci_id/* drivers/base/devres.c 700 */;
	struct action_devres {
		void *data;
		void (*action)(void *);
	} cocci_id/* drivers/base/devres.c 693 */;
	struct list_head *cocci_id/* drivers/base/devres.c 672 */;
	struct devres_group *cocci_id/* drivers/base/devres.c 605 */;
	struct devres_group cocci_id/* drivers/base/devres.c 583 */;
	struct devres_node cocci_id/* drivers/base/devres.c 436 */;
	struct devres_group {
		struct devres_node node[2];
		void *id;
		int color;
	} cocci_id/* drivers/base/devres.c 39 */;
	dr_match_t cocci_id/* drivers/base/devres.c 377 */;
	struct devres {
		struct devres_node node;
		u8 __aligned(ARCH_KMALLOC_MINALIGN) data[];
	} cocci_id/* drivers/base/devres.c 27 */;
	struct devres_node {
		struct list_head entry;
		dr_release_t release;
#ifdef CONFIG_DEBUG_DEVRES
		const char *name;
		size_t size;
#endif
	} cocci_id/* drivers/base/devres.c 18 */;
	void (*cocci_id/* drivers/base/devres.c 178 */)(struct device *,
							void *, void *);
	struct devres *cocci_id/* drivers/base/devres.c 125 */;
	const char *cocci_id/* drivers/base/devres.c 123 */;
	gfp_t cocci_id/* drivers/base/devres.c 122 */;
	dr_release_t cocci_id/* drivers/base/devres.c 122 */;
	int cocci_id/* drivers/base/devres.c 122 */;
	struct devres_node *cocci_id/* drivers/base/devres.c 114 */;
	void cocci_id/* drivers/base/devres.c 114 */;
	void __percpu **cocci_id/* drivers/base/devres.c 1097 */;
	void *cocci_id/* drivers/base/devres.c 1084 */;
	struct device *cocci_id/* drivers/base/devres.c 1081 */;
	void __percpu *cocci_id/* drivers/base/devres.c 1081 */;
	size_t cocci_id/* drivers/base/devres.c 1081 */;
	void **cocci_id/* drivers/base/devres.c 1066 */;
	struct pages_devres cocci_id/* drivers/base/devres.c 1047 */;
	unsigned long cocci_id/* drivers/base/devres.c 1045 */;
	struct pages_devres *cocci_id/* drivers/base/devres.c 1014 */;
	unsigned int cocci_id/* drivers/base/devres.c 1012 */;
}
