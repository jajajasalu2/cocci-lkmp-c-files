cocci_test_suite() {
	struct tag *cocci_id/* arch/arm/kernel/atags_compat.c 94 */;
	struct param_struct *cocci_id/* arch/arm/kernel/atags_compat.c 92 */;
	void *cocci_id/* arch/arm/kernel/atags_compat.c 92 */;
	void __init cocci_id/* arch/arm/kernel/atags_compat.c 92 */;
	struct tag *__init cocci_id/* arch/arm/kernel/atags_compat.c 81 */;
	unsigned long cocci_id/* arch/arm/kernel/atags_compat.c 81 */;
	struct param_struct {
		union {
			struct {
				unsigned long page_size;
				unsigned long nr_pages;
				unsigned long ramdisk_size;
				unsigned long flags;
#define FLAG_READONLY 1
#define FLAG_RDLOAD 4
#define FLAG_RDPROMPT 8
				unsigned long rootdev;
				unsigned long video_num_cols;
				unsigned long video_num_rows;
				unsigned long video_x;
				unsigned long video_y;
				unsigned long memc_control_reg;
				unsigned char sounddefault;
				unsigned char adfsdrives;
				unsigned char bytes_per_char_h;
				unsigned char bytes_per_char_v;
				unsigned long pages_in_bank[4];
				unsigned long pages_in_vram;
				unsigned long initrd_start;
				unsigned long initrd_size;
				unsigned long rd_start;
				unsigned long system_rev;
				unsigned long system_serial_low;
				unsigned long system_serial_high;
				unsigned long mem_fclk_21285;
			} s;
			char unused[256];
		} u1;
		union {
			char paths[8][128];
			struct {
				unsigned long magic;
				char n[1024 - sizeof(unsigned long)];
			} s;
		} u2;
		char commandline[COMMAND_LINE_SIZE];
	} cocci_id/* arch/arm/kernel/atags_compat.c 39 */;
	struct tag_header cocci_id/* arch/arm/kernel/atags_compat.c 199 */;
	int cocci_id/* arch/arm/kernel/atags_compat.c 152 */;
}
