cocci_test_suite() {
	u64 cocci_id/* block/partitions/aix.c 79 */;
	struct block_device *cocci_id/* block/partitions/aix.c 79 */;
	struct pvd {
		char reserved0[16];
		__be16 pp_count;
		char reserved18[2];
		__be32 psn_part1;
		char reserved24[8];
		struct ppe ppe[1016];
	} cocci_id/* block/partitions/aix.c 59 */;
	struct ppe {
		__be16 lv_ix;
		unsigned short res2;
		unsigned short res4;
		__be16 lp_ix;
		unsigned short res8[12];
	} cocci_id/* block/partitions/aix.c 51 */;
	struct lvname {
		char name[64];
	} cocci_id/* block/partitions/aix.c 47 */;
	struct lvd {
		__be16 lv_ix;
		__be16 res2;
		__be16 res4;
		__be16 maxsize;
		__be16 lv_state;
		__be16 mirror;
		__be16 mirror_policy;
		__be16 num_lps;
		__be16 res10[8];
	} cocci_id/* block/partitions/aix.c 35 */;
	char cocci_id/* block/partitions/aix.c 287 */[sizeof(n[i].name) + 1];
	char cocci_id/* block/partitions/aix.c 271 */[70];
	unsigned int cocci_id/* block/partitions/aix.c 250 */;
	struct ppe *cocci_id/* block/partitions/aix.c 249 */;
	struct vgda {
		__be32 secs;
		__be32 usec;
		char reserved8[16];
		__be16 numlvs;
		__be16 maxlvs;
		__be16 pp_size;
		__be16 numpvs;
		__be16 total_vgdas;
		__be16 vgda_size;
	} cocci_id/* block/partitions/aix.c 23 */;
	struct lvd *cocci_id/* block/partitions/aix.c 223 */;
	struct lv_info cocci_id/* block/partitions/aix.c 219 */;
	struct vgda *cocci_id/* block/partitions/aix.c 214 */;
	char cocci_id/* block/partitions/aix.c 193 */[64];
	u16 cocci_id/* block/partitions/aix.c 192 */;
	struct lvm_rec *cocci_id/* block/partitions/aix.c 191 */;
	struct lvname *cocci_id/* block/partitions/aix.c 187 */;
	struct lv_info {
		unsigned short pps_per_lv;
		unsigned short pps_found;
		unsigned char lv_is_contiguous;
	} *cocci_id/* block/partitions/aix.c 182 */;
	struct pvd *cocci_id/* block/partitions/aix.c 181 */;
	u32 cocci_id/* block/partitions/aix.c 176 */;
	unsigned char *cocci_id/* block/partitions/aix.c 175 */;
	Sector cocci_id/* block/partitions/aix.c 174 */;
	struct parsed_partitions *cocci_id/* block/partitions/aix.c 171 */;
	int cocci_id/* block/partitions/aix.c 171 */;
	u8 *cocci_id/* block/partitions/aix.c 164 */;
	struct lvname cocci_id/* block/partitions/aix.c 157 */;
	size_t cocci_id/* block/partitions/aix.c 157 */;
	struct pvd cocci_id/* block/partitions/aix.c 132 */;
	struct lvm_rec {
		char lvm_id[4];
		char reserved4[16];
		__be32 lvmarea_len;
		__be32 vgda_len;
		__be32 vgda_psn[2];
		char reserved36[10];
		__be16 pp_size;
		char reserved46[12];
		__be16 version;
	} cocci_id/* block/partitions/aix.c 11 */;
}
