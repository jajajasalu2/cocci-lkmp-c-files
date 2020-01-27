cocci_test_suite() {
	const struct psp_var_map_entry cocci_id/* arch/mips/ar7/prom.c 76 */[];
	struct psp_var_map_entry {
		u8 num;
		char *value;
	} cocci_id/* arch/mips/ar7/prom.c 71 */;
	struct psp_env_chunk {
		u8 num;
		u8 ctrl;
		u16 csum;
		u8 len;
		char data[11];
	}__packed cocci_id/* arch/mips/ar7/prom.c 63 */;
	const char cocci_id/* arch/mips/ar7/prom.c 61 */[]__initconst;
	struct psbl_rec {
		u32 psbl_size;
		u32 env_base;
		u32 env_size;
		u32 ffs_base;
		u32 ffs_size;
	} cocci_id/* arch/mips/ar7/prom.c 53 */;
	char *cocci_id/* arch/mips/ar7/prom.c 42 */[];
	const char *cocci_id/* arch/mips/ar7/prom.c 30 */;
	struct env_var cocci_id/* arch/mips/ar7/prom.c 28 */[MAX_ENTRY];
	unsigned int cocci_id/* arch/mips/ar7/prom.c 241 */;
	char **cocci_id/* arch/mips/ar7/prom.c 235 */;
	struct env_var {
		char *name;
		char *value;
	} cocci_id/* arch/mips/ar7/prom.c 23 */;
	char cocci_id/* arch/mips/ar7/prom.c 192 */;
	char cocci_id/* arch/mips/ar7/prom.c 190 */[40];
	void cocci_id/* arch/mips/ar7/prom.c 187 */;
	void *cocci_id/* arch/mips/ar7/prom.c 176 */;
	struct psbl_rec *cocci_id/* arch/mips/ar7/prom.c 175 */;
	struct env_var *cocci_id/* arch/mips/ar7/prom.c 172 */;
	struct psp_env_chunk cocci_id/* arch/mips/ar7/prom.c 154 */;
	struct psp_env_chunk *cocci_id/* arch/mips/ar7/prom.c 149 */;
	int __init cocci_id/* arch/mips/ar7/prom.c 145 */;
	int cocci_id/* arch/mips/ar7/prom.c 131 */;
	char *cocci_id/* arch/mips/ar7/prom.c 129 */;
	void __init cocci_id/* arch/mips/ar7/prom.c 129 */;
	u8 cocci_id/* arch/mips/ar7/prom.c 118 */;
	char *__init cocci_id/* arch/mips/ar7/prom.c 118 */;
	char cocci_id/* arch/mips/ar7/prom.c 116 */[PSP_ENV_SIZE];
}
