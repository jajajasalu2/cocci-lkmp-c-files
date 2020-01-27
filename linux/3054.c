cocci_test_suite() {
	struct nvs_page {
		unsigned long phys_start;
		unsigned int size;
		void *kaddr;
		void *data;
		bool unmap;
		struct list_head node;
	} cocci_id/* drivers/acpi/nvs.c 73 */;
	struct nvs_region *cocci_id/* drivers/acpi/nvs.c 54 */;
	void *cocci_id/* drivers/acpi/nvs.c 51 */;
	int (*cocci_id/* drivers/acpi/nvs.c 50 */)(__u64 start, __u64 size,
						   void *data);
	int cocci_id/* drivers/acpi/nvs.c 50 */;
	__u64 cocci_id/* drivers/acpi/nvs.c 36 */;
	int cocci_id/* drivers/acpi/nvs.c 28 */(unsigned long start,
						unsigned long size);
	struct nvs_region {
		__u64 phys_start;
		__u64 size;
		struct list_head node;
	} cocci_id/* drivers/acpi/nvs.c 19 */;
	struct nvs_page *cocci_id/* drivers/acpi/nvs.c 154 */;
	void cocci_id/* drivers/acpi/nvs.c 152 */;
	unsigned long cocci_id/* drivers/acpi/nvs.c 134 */;
	struct nvs_page cocci_id/* drivers/acpi/nvs.c 103 */;
	unsigned int cocci_id/* drivers/acpi/nvs.c 101 */;
}
