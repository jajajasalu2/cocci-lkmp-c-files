cocci_test_suite() {
	struct intel_th_driver cocci_id/* drivers/hwtracing/intel_th/gth.c 812 */;
	unsigned long cocci_id/* drivers/hwtracing/intel_th/gth.c 76 */;
	void __iomem *cocci_id/* drivers/hwtracing/intel_th/gth.c 735 */;
	struct resource *cocci_id/* drivers/hwtracing/intel_th/gth.c 734 */;
	struct device *cocci_id/* drivers/hwtracing/intel_th/gth.c 731 */;
	struct intel_th_device *cocci_id/* drivers/hwtracing/intel_th/gth.c 647 */;
	struct intel_th *cocci_id/* drivers/hwtracing/intel_th/gth.c 579 */;
	struct intel_th_output *cocci_id/* drivers/hwtracing/intel_th/gth.c 536 */;
	struct gth_device {
		struct device *dev;
		void __iomem *base;
		struct attribute_group output_group;
		struct attribute_group master_group;
		struct gth_output output[TH_POSSIBLE_OUTPUTS];
		signed char master[TH_CONFIGURABLE_MASTERS + 1];
		spinlock_t gth_lock;
	} cocci_id/* drivers/hwtracing/intel_th/gth.c 50 */;
	struct intel_th_driver *cocci_id/* drivers/hwtracing/intel_th/gth.c 479 */;
	struct intel_th_device cocci_id/* drivers/hwtracing/intel_th/gth.c 478 */;
	bool cocci_id/* drivers/hwtracing/intel_th/gth.c 475 */;
	struct output_attribute cocci_id/* drivers/hwtracing/intel_th/gth.c 422 */;
	struct output_attribute *cocci_id/* drivers/hwtracing/intel_th/gth.c 411 */;
	char *cocci_id/* drivers/hwtracing/intel_th/gth.c 384 */;
	struct master_attribute cocci_id/* drivers/hwtracing/intel_th/gth.c 378 */;
	void *cocci_id/* drivers/hwtracing/intel_th/gth.c 373 */;
	struct attribute **cocci_id/* drivers/hwtracing/intel_th/gth.c 370 */;
	struct master_attribute *cocci_id/* drivers/hwtracing/intel_th/gth.c 369 */;
	struct gth_output {
		struct gth_device *gth;
		struct intel_th_output *output;
		unsigned int index;
		unsigned int port_type;
	DECLARE_BITMAP(master,TH_CONFIGURABLE_MASTERS+1)
		;
	} cocci_id/* drivers/hwtracing/intel_th/gth.c 32 */;
	const struct output_parm {
		const char *name;
		unsigned int (*get)(struct gth_device *gth, int port);
		void (*set)(struct gth_device *gth, int port,
			    unsigned int val);
		unsigned int mask;
		unsigned int readable:1,writable:1;
	} cocci_id/* drivers/hwtracing/intel_th/gth.c 233 */[];
	struct gth_device cocci_id/* drivers/hwtracing/intel_th/gth.c 22 */;
	struct output_attribute {
		struct device_attribute attr;
		struct gth_device *gth;
		unsigned int port;
		unsigned int parm;
	} cocci_id/* drivers/hwtracing/intel_th/gth.c 218 */;
	const char *cocci_id/* drivers/hwtracing/intel_th/gth.c 166 */;
	size_t cocci_id/* drivers/hwtracing/intel_th/gth.c 149 */;
	struct device_attribute *cocci_id/* drivers/hwtracing/intel_th/gth.c 143 */;
	ssize_t cocci_id/* drivers/hwtracing/intel_th/gth.c 142 */;
	u32 cocci_id/* drivers/hwtracing/intel_th/gth.c 128 */;
	struct gth_device *cocci_id/* drivers/hwtracing/intel_th/gth.c 124 */;
	unsigned int cocci_id/* drivers/hwtracing/intel_th/gth.c 124 */;
	int cocci_id/* drivers/hwtracing/intel_th/gth.c 124 */;
	void cocci_id/* drivers/hwtracing/intel_th/gth.c 123 */;
	struct master_attribute {
		struct device_attribute attr;
		struct gth_device *gth;
		unsigned int master;
	} cocci_id/* drivers/hwtracing/intel_th/gth.c 117 */;
}
