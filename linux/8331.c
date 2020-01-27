cocci_test_suite() {
	s64 cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 908 */;
	unsigned int cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 834 */;
	struct octeon_firmware_file_header cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 820 */;
	struct timespec64 cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 813 */;
	char cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 812 */[MAX_BOOTTIME_SIZE];
	struct octeon_firmware_file_header *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 811 */;
	const u8 *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 808 */;
	struct cvmx_bootmem_desc {
		u32 lock;
		u32 flags;
		u64 head_addr;
		u32 major_version;
		u32 minor_version;
		u64 app_data_addr;
		u64 app_data_size;
		u32 nb_num_blocks;
		u32 named_block_name_len;
		u64 named_block_array_addr;
	} cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 71 */;
	void *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 693 */;
	struct octeon_pci_console cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 675 */;
	struct octeon_pci_console_desc cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 672 */;
	struct delayed_work *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 659 */;
	struct cavium_wk *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 484 */;
	struct octeon_console *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 483 */;
	size_t cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 482 */;
	s32 cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 481 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 479 */;
	char cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 430 */[OCTEON_CONSOLE_MAX_READ_BYTES];
	int cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 38 */(struct octeon_device *oct,
										   u32 console_num,
										   char *buffer,
										   u32 buf_size);
	u64 cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 35 */(struct octeon_device *oct,
										   const char *name,
										   u32 flags);
	u64 *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 336 */;
	void cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 33 */(void);
	struct cvmx_bootmem_named_block_desc *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 231 */;
	const char *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 229 */;
	const struct cvmx_bootmem_named_block_desc *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 227 */;
	long long cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 220 */;
	struct cvmx_bootmem_desc cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 207 */;
	int cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 195 */;
	u8 *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 179 */;
	struct cvmx_bootmem_named_block_desc cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 178 */;
	u32 cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 176 */;
	char *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 175 */;
	u64 cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 174 */;
	struct octeon_device *cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 173 */;
	void cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 173 */;
	struct octeon_pci_console_desc {
		u32 major_version;
		u32 minor_version;
		u32 lock;
		u32 flags;
		u32 num_consoles;
		u32 pad;
		u64 console_addr_array[0];
	} cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 121 */;
	struct octeon_pci_console {
		u64 input_base_addr;
		u32 input_read_index;
		u32 input_write_index;
		u64 output_base_addr;
		u32 output_read_index;
		u32 output_write_index;
		u32 lock;
		u32 buf_size;
	} cocci_id/* drivers/net/ethernet/cavium/liquidio/octeon_console.c 106 */;
}
