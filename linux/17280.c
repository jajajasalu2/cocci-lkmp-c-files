cocci_test_suite() {
	u64 *cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 73 */;
	void *cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 72 */;
	size_t cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 72 */;
	struct debug_block cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 68 */;
	struct debug_block {
		struct gelic_descr descr;
		u8 pkt[1520];
	}__packed cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 55 */;
	struct gelic_descr {
		__be32 buf_addr;
		__be32 buf_size;
		__be32 next_descr_addr;
		__be32 dmac_cmd_status;
		__be32 result_size;
		__be32 valid_size;
		__be32 data_status;
		__be32 data_error;
	}__attribute__((aligned(32))) cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 43 */;
	u64 cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 41 */;
	void __init cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 233 */;
	char cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 224 */;
	u32 cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 195 */;
	u16 *cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 194 */;
	int cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 192 */;
	char *cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 181 */;
	struct udphdr *cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 177 */;
	struct udphdr cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 176 */;
	struct iphdr cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 168 */;
	struct iphdr *cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 162 */;
	struct vlan_hdr *cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 159 */;
	struct vlan_hdr cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 158 */;
	struct ethhdr cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 149 */;
	struct ethhdr *cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 144 */;
	s64 cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 118 */;
	void cocci_id/* arch/powerpc/platforms/ps3/gelic_udbg.c 116 */;
}
