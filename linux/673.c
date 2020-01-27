cocci_test_suite() {
	struct nvdimm_bus *cocci_id/* drivers/nvdimm/core.c 80 */;
	resource_size_t cocci_id/* drivers/nvdimm/core.c 78 */;
	unsigned long cocci_id/* drivers/nvdimm/core.c 78 */;
	size_t cocci_id/* drivers/nvdimm/core.c 78 */;
	struct nvdimm_map *cocci_id/* drivers/nvdimm/core.c 77 */;
	struct device *cocci_id/* drivers/nvdimm/core.c 77 */;
	struct nvdimm_map {
		struct nvdimm_bus *nvdimm_bus;
		struct list_head list;
		resource_size_t offset;
		unsigned long flags;
		size_t size;
		union {
			void *mem;
			void __iomem *iomem;
		};
		struct kref kref;
	} cocci_id/* drivers/nvdimm/core.c 52 */;
	void cocci_id/* drivers/nvdimm/core.c 456 */;
	bool cocci_id/* drivers/nvdimm/core.c 42 */;
	struct blk_integrity cocci_id/* drivers/nvdimm/core.c 406 */;
	struct gendisk *cocci_id/* drivers/nvdimm/core.c 404 */;
	const struct attribute_group *cocci_id/* drivers/nvdimm/core.c 392 */[];
	const struct attribute_group cocci_id/* drivers/nvdimm/core.c 388 */;
	struct attribute *cocci_id/* drivers/nvdimm/core.c 381 */[];
	struct nvdimm_bus_descriptor *cocci_id/* drivers/nvdimm/core.c 317 */;
	int cocci_id/* drivers/nvdimm/core.c 315 */;
	struct device_attribute *cocci_id/* drivers/nvdimm/core.c 313 */;
	char *cocci_id/* drivers/nvdimm/core.c 313 */;
	ssize_t cocci_id/* drivers/nvdimm/core.c 312 */;
	unsigned long *cocci_id/* drivers/nvdimm/core.c 288 */;
	const char *cocci_id/* drivers/nvdimm/core.c 287 */;
	const unsigned long *cocci_id/* drivers/nvdimm/core.c 273 */;
	u8 **cocci_id/* drivers/nvdimm/core.c 251 */;
	u8 cocci_id/* drivers/nvdimm/core.c 220 */[16];
	u8 *cocci_id/* drivers/nvdimm/core.c 216 */;
	char cocci_id/* drivers/nvdimm/core.c 209 */;
	__le32 cocci_id/* drivers/nvdimm/core.c 187 */;
	u32 cocci_id/* drivers/nvdimm/core.c 182 */;
	u32 *cocci_id/* drivers/nvdimm/core.c 181 */;
	u64 cocci_id/* drivers/nvdimm/core.c 179 */;
	void *cocci_id/* drivers/nvdimm/core.c 156 */;
	struct nvdimm_map cocci_id/* drivers/nvdimm/core.c 126 */;
	struct kref *cocci_id/* drivers/nvdimm/core.c 121 */;
}
