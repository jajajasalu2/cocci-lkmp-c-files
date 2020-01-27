cocci_test_suite() {
	struct memory_initiator *cocci_id/* drivers/acpi/numa/hmat.c 97 */;
	unsigned int cocci_id/* drivers/acpi/numa/hmat.c 95 */;
	void cocci_id/* drivers/acpi/numa/hmat.c 95 */;
	struct acpi_table_hmat cocci_id/* drivers/acpi/numa/hmat.c 847 */;
	struct acpi_table_srat cocci_id/* drivers/acpi/numa/hmat.c 825 */;
	acpi_status cocci_id/* drivers/acpi/numa/hmat.c 815 */;
	enum acpi_hmat_type cocci_id/* drivers/acpi/numa/hmat.c 814 */;
	struct acpi_table_header *cocci_id/* drivers/acpi/numa/hmat.c 813 */;
	struct resource *cocci_id/* drivers/acpi/numa/hmat.c 782 */;
	struct target_cache *cocci_id/* drivers/acpi/numa/hmat.c 779 */;
	struct notifier_block cocci_id/* drivers/acpi/numa/hmat.c 769 */;
	struct memory_notify *cocci_id/* drivers/acpi/numa/hmat.c 754 */;
	void *cocci_id/* drivers/acpi/numa/hmat.c 751 */;
	unsigned long cocci_id/* drivers/acpi/numa/hmat.c 751 */;
	struct notifier_block *cocci_id/* drivers/acpi/numa/hmat.c 750 */;
	int cocci_id/* drivers/acpi/numa/hmat.c 750 */;
	struct memory_locality {
		struct list_head node;
		struct acpi_hmat_locality *hmat_loc;
	} cocci_id/* drivers/acpi/numa/hmat.c 70 */;
	struct memory_initiator {
		struct list_head node;
		unsigned int processor_pxm;
	} cocci_id/* drivers/acpi/numa/hmat.c 65 */;
	struct memregion_info cocci_id/* drivers/acpi/numa/hmat.c 647 */;
	struct platform_device *cocci_id/* drivers/acpi/numa/hmat.c 646 */;
	unsigned cocci_id/* drivers/acpi/numa/hmat.c 624 */;
	struct memory_initiator cocci_id/* drivers/acpi/numa/hmat.c 553 */;
	unsigned long *cocci_id/* drivers/acpi/numa/hmat.c 551 */;
	struct list_head *cocci_id/* drivers/acpi/numa/hmat.c 547 */;
	struct memory_target {
		struct list_head node;
		unsigned int memory_pxm;
		unsigned int processor_pxm;
		struct resource memregions;
		struct node_hmem_attrs hmem_attrs;
		struct list_head caches;
		struct node_cache_attrs cache_attrs;
		bool registered;
	} cocci_id/* drivers/acpi/numa/hmat.c 54 */;
	bool cocci_id/* drivers/acpi/numa/hmat.c 518 */;
	struct target_cache {
		struct list_head node;
		struct node_cache_attrs cache_attrs;
	} cocci_id/* drivers/acpi/numa/hmat.c 49 */;
	u16 *cocci_id/* drivers/acpi/numa/hmat.c 486 */;
	u32 *cocci_id/* drivers/acpi/numa/hmat.c 485 */;
	u32 cocci_id/* drivers/acpi/numa/hmat.c 480 */;
	struct acpi_srat_mem_affinity *cocci_id/* drivers/acpi/numa/hmat.c 470 */;
	struct memory_locality *cocci_id/* drivers/acpi/numa/hmat.c 47 */[4];
	struct acpi_hmat_structure *cocci_id/* drivers/acpi/numa/hmat.c 450 */;
	struct acpi_hmat_proximity_domain *cocci_id/* drivers/acpi/numa/hmat.c 410 */;
	int __init cocci_id/* drivers/acpi/numa/hmat.c 407 */;
	enum locality_types{WRITE_LATENCY, READ_LATENCY, WRITE_BANDWIDTH, READ_BANDWIDTH,} cocci_id/* drivers/acpi/numa/hmat.c 40 */;
	struct acpi_hmat_cache *cocci_id/* drivers/acpi/numa/hmat.c 347 */;
	const unsigned long cocci_id/* drivers/acpi/numa/hmat.c 345 */;
	union acpi_subtable_headers *cocci_id/* drivers/acpi/numa/hmat.c 344 */;
	struct memory_locality *cocci_id/* drivers/acpi/numa/hmat.c 248 */;
	struct acpi_hmat_locality *cocci_id/* drivers/acpi/numa/hmat.c 246 */;
	u64 cocci_id/* drivers/acpi/numa/hmat.c 182 */;
	u16 cocci_id/* drivers/acpi/numa/hmat.c 182 */;
	u8 cocci_id/* drivers/acpi/numa/hmat.c 146 */;
	const char *cocci_id/* drivers/acpi/numa/hmat.c 146 */;
	struct resource cocci_id/* drivers/acpi/numa/hmat.c 126 */;
	struct memory_target *cocci_id/* drivers/acpi/numa/hmat.c 117 */;
	resource_size_t cocci_id/* drivers/acpi/numa/hmat.c 115 */;
}
