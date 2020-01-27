cocci_test_suite() {
	u8 *cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 94 */;
	size_t cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 85 */;
	unsigned int cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 84 */;
	bool cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 82 */;
	struct biosmemcon_ebda *cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 52 */;
	void cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 52 */;
	loff_t cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 46 */;
	ssize_t cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 46 */;
	char *cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 43 */;
	struct biosmemcon_ebda {
		u32 signature;
		union {
			struct {
				u8 enabled;
				u32 buffer_addr;
				u16 start;
				u16 end;
				u16 num_chars;
				u8 wrapped;
			}__packed v1;
			struct {
				u32 buffer_addr;
				u16 num_bytes;
				u16 start;
				u16 end;
			}__packed v2;
		};
	}__packed cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 22 */;
	void __exit cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 148 */;
	int __init cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 140 */;
	bool __init cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 132 */;
	const struct dmi_system_id cocci_id/* drivers/firmware/google/memconsole-x86-legacy.c 121 */[]__initconst;
}
