cocci_test_suite() {
	struct cs_range cocci_id/* arch/powerpc/boot/cuboot-pq2.c 79 */;
	struct pci_range cocci_id/* arch/powerpc/boot/cuboot-pq2.c 38 */[MAX_PROP_LEN / sizeof(struct pci_range)];
	struct cs_range cocci_id/* arch/powerpc/boot/cuboot-pq2.c 37 */[MAX_PROP_LEN / sizeof(struct cs_range)];
	struct pci_range {
		u32 flags;
		u32 pci_addr[2];
		u32 phys_addr;
		u32 size[2];
	} cocci_id/* arch/powerpc/boot/cuboot-pq2.c 30 */;
	unsigned long cocci_id/* arch/powerpc/boot/cuboot-pq2.c 262 */;
	u32 *cocci_id/* arch/powerpc/boot/cuboot-pq2.c 230 */;
	struct cs_range {
		u32 csnum;
		u32 base;
		u32 addr;
		u32 size;
	} cocci_id/* arch/powerpc/boot/cuboot-pq2.c 23 */;
	bd_t cocci_id/* arch/powerpc/boot/cuboot-pq2.c 21 */;
	struct pci_range cocci_id/* arch/powerpc/boot/cuboot-pq2.c 158 */;
	unsigned long *cocci_id/* arch/powerpc/boot/cuboot-pq2.c 136 */;
	u32 cocci_id/* arch/powerpc/boot/cuboot-pq2.c 128 */;
	void *cocci_id/* arch/powerpc/boot/cuboot-pq2.c 127 */;
	int cocci_id/* arch/powerpc/boot/cuboot-pq2.c 126 */;
	u8 *cocci_id/* arch/powerpc/boot/cuboot-pq2.c 125 */;
	u32 *cocci_id/* arch/powerpc/boot/cuboot-pq2.c 124 */[3];
	struct pci_range *cocci_id/* arch/powerpc/boot/cuboot-pq2.c 122 */;
	void cocci_id/* arch/powerpc/boot/cuboot-pq2.c 120 */;
}
