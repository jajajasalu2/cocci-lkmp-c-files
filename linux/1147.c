cocci_test_suite() {
	u64 cocci_id/* drivers/cpufreq/pcc-cpufreq.c 99 */;
	struct acpi_generic_address cocci_id/* drivers/cpufreq/pcc-cpufreq.c 97 */;
	struct pcc_header __iomem *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 93 */;
	void __iomem *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 92 */;
	struct pcc_header {
		u32 signature;
		u16 length;
		u8 major;
		u8 minor;
		u32 features;
		u16 command;
		u16 status;
		u32 latency;
		u32 minimum_time;
		u32 maximum_time;
		u32 nominal;
		u32 throttled_frequency;
		u32 minimum_frequency;
	} cocci_id/* drivers/cpufreq/pcc-cpufreq.c 76 */;
	struct cpufreq_driver cocci_id/* drivers/cpufreq/pcc-cpufreq.c 74 */;
	const struct acpi_device_id cocci_id/* drivers/cpufreq/pcc-cpufreq.c 619 */[];
	void __exit cocci_id/* drivers/cpufreq/pcc-cpufreq.c 610 */;
	struct pcc_memory_resource {
		u8 descriptor;
		u16 length;
		u8 space_id;
		u8 resource_usage;
		u8 type_specific;
		u64 granularity;
		u64 minimum;
		u64 maximum;
		u64 translation_offset;
		u64 address_length;
	}__attribute__((packed)) cocci_id/* drivers/cpufreq/pcc-cpufreq.c 61 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 564 */;
	unsigned int cocci_id/* drivers/cpufreq/pcc-cpufreq.c 539 */;
	struct pcc_cpu cocci_id/* drivers/cpufreq/pcc-cpufreq.c 518 */;
	struct pcc_register_resource {
		u8 descriptor;
		u16 length;
		u8 space_id;
		u8 bit_width;
		u8 bit_offset;
		u8 access_size;
		u64 address;
	}__attribute__((packed)) cocci_id/* drivers/cpufreq/pcc-cpufreq.c 51 */;
	acpi_handle cocci_id/* drivers/cpufreq/pcc-cpufreq.c 394 */;
	struct pcc_register_resource *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 392 */;
	struct pcc_memory_resource *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 391 */;
	u32 *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 341 */;
	u8 *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 323 */;
	u32 cocci_id/* drivers/cpufreq/pcc-cpufreq.c 308 */;
	u32 cocci_id/* drivers/cpufreq/pcc-cpufreq.c 307 */[2];
	union acpi_object *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 306 */;
	union acpi_object cocci_id/* drivers/cpufreq/pcc-cpufreq.c 305 */[4];
	struct acpi_buffer cocci_id/* drivers/cpufreq/pcc-cpufreq.c 304 */;
	struct acpi_object_list cocci_id/* drivers/cpufreq/pcc-cpufreq.c 303 */;
	acpi_status cocci_id/* drivers/cpufreq/pcc-cpufreq.c 302 */;
	acpi_handle *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 300 */;
	int __init cocci_id/* drivers/cpufreq/pcc-cpufreq.c 300 */;
	struct acpi_processor *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 254 */;
	u16 cocci_id/* drivers/cpufreq/pcc-cpufreq.c 203 */;
	struct cpufreq_freqs cocci_id/* drivers/cpufreq/pcc-cpufreq.c 202 */;
	struct pcc_cpu *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 201 */;
	void cocci_id/* drivers/cpufreq/pcc-cpufreq.c 133 */;
	int cocci_id/* drivers/cpufreq/pcc-cpufreq.c 121 */;
	struct pcc_cpu __percpu *cocci_id/* drivers/cpufreq/pcc-cpufreq.c 110 */;
	struct pcc_cpu {
		u32 input_offset;
		u32 output_offset;
	} cocci_id/* drivers/cpufreq/pcc-cpufreq.c 105 */;
	u8 cocci_id/* drivers/cpufreq/pcc-cpufreq.c 102 */[16];
}