cocci_test_suite() {
	struct acpi_table_xsdt *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 91 */;
	struct acpi_table_rsdt *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 90 */;
	struct acpi_table_fadt *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 89 */;
	struct acpi_table_header cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 889 */;
	struct acpi_table_rsdp cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 88 */;
	u8 cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 80 */;
	u8 *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 773 */;
	acpi_status cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 70 */(acpi_status default_status);
	acpi_status cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 64 */(char *signature,
											      u32 instance,
											      struct acpi_table_header **table,
											      acpi_physical_address *address);
	acpi_status cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 62 */(void);
	acpi_status cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 55 */(char *pathname,
											      char *signature,
											      u32 instance,
											      struct acpi_table_header **table,
											      acpi_physical_address *address);
	acpi_status cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 53 */(char *directory);
	void cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 519 */;
	acpi_physical_address cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 49 */(void);
	acpi_size cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 466 */;
	acpi_physical_address cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 46 */(FILE *file,
													const char *keyword);
	void cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 44 */(struct acpi_table_header *table);
	FILE *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 433 */;
	char cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 406 */[32];
	unsigned long long cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 405 */;
	char cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 404 */[80];
	const char *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 402 */;
	acpi_status cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 40 */(acpi_size address,
											      char *signature,
											      struct acpi_table_header **table);
	struct osl_table_info *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 352 */;
	u32 *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 350 */;
	acpi_physical_address *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 350 */;
	acpi_status cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 35 */(char *filename,
											      acpi_size file_offset,
											      char *signature,
											      struct acpi_table_header **table);
	acpi_status cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 33 */(char *signature,
											      u32 instance);
	acpi_status cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 30 */(char *filename,
											      char *signature,
											      u32 *instance);
	struct osl_table_info cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 284 */;
	char *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 219 */;
	struct osl_table_info {
		struct osl_table_info *next;
		u32 instance;
		char signature[ACPI_NAMESEG_SIZE];
	} cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 19 */;
	struct acpi_table_header *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 159 */;
	u32 cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 158 */;
	struct acpi_table_header **cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 156 */;
	acpi_physical_address cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 155 */;
	acpi_status cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 154 */;
	char cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 1315 */[PATH_MAX];
	char cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 1314 */[ACPI_NAMESEG_SIZE];
	void *cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 1312 */;
	s32 cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 1206 */;
	int cocci_id/* tools/power/acpi/os_specific/service_layers/oslinuxtbl.c 1167 */;
}
