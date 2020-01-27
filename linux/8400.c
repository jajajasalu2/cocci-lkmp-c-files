cocci_test_suite() {
	struct nfp_level_size {
		__be32 requested_level;
		u32 total_size;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 99 */;
	struct nfp_dump_error {
		struct nfp_dump_tl tl;
		__be32 error;
		char padding[4];
		char spec[0];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 91 */;
	struct nfp_dump_prolog {
		struct nfp_dump_tl tl;
		__be32 dump_level;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 86 */;
	struct nfp_dump_rtsym {
		struct nfp_dump_tl tl;
		struct nfp_dump_common_cpp cpp;
		__be32 error;
		u8 padded_name_length;
		char rtsym[0];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 77 */;
	struct nfp_dump_state cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 740 */;
	struct ethtool_dump *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 738 */;
	struct nfp_dump_prolog *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 722 */;
	struct nfp_dump_csr {
		struct nfp_dump_tl tl;
		struct nfp_dump_common_cpp cpp;
		__be32 register_width;
		__be32 error;
		__be32 error_offset;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 69 */;
	struct nfp_dumpspec_rtsym {
		struct nfp_dump_tl tl;
		char rtsym[0];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 63 */;
	struct nfp_dumpspec_cpp_isl_id cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 601 */;
	struct nfp_dump_rtsym *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 600 */;
	struct nfp_dumpspec_csr {
		struct nfp_dump_tl tl;
		struct nfp_dump_common_cpp cpp;
		__be32 register_width;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 57 */;
	struct nfp_dump_common_cpp {
		struct nfp_dumpspec_cpp_isl_id cpp_id;
		__be32 offset;
		__be32 dump_length;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 50 */;
	struct nfp_dump_csr *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 452 */;
	bool cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 442 */;
	struct nfp_dumpspec_cpp_isl_id *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 442 */;
	struct nfp_dumpspec_cpp_isl_id {
		u8 target;
		u8 action;
		u8 token;
		u8 island;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 43 */;
	char *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 395 */;
	struct nfp_dump_tl {
		__be32 type;
		__be32 length;
		char data[0];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 36 */;
	struct nfp_dump_error *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 352 */;
	struct nfp_dump_tl *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 331 */;
	u32 cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 329 */;
	struct nfp_dump_state *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 329 */;
	int cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 329 */;
	struct nfp_dump_prolog cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 319 */;
	struct nfp_level_size cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 315 */;
	s64 cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 312 */;
	struct nfp_dumpspec *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 312 */;
	struct nfp_level_size *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 302 */;
	struct nfp_dump_tl cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 285 */;
	struct nfp_dump_csr cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 268 */;
	u32 *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 254 */;
	struct nfp_dumpspec_csr *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 253 */;
	struct nfp_pf *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 251 */;
	void *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 251 */;
	struct nfp_dump_rtsym cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 246 */;
	const struct nfp_rtsym *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 233 */;
	struct nfp_dumpspec_rtsym *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 232 */;
	struct nfp_rtsym_table *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 231 */;
	const char *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 200 */;
	struct nfp_dump_error cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 186 */;
	enum nfp_dumpspec_type{NFP_DUMPSPEC_TYPE_CPP_CSR=0, NFP_DUMPSPEC_TYPE_XPB_CSR=1, NFP_DUMPSPEC_TYPE_ME_CSR=2, NFP_DUMPSPEC_TYPE_INDIRECT_ME_CSR=3, NFP_DUMPSPEC_TYPE_RTSYM=4, NFP_DUMPSPEC_TYPE_HWINFO=5, NFP_DUMPSPEC_TYPE_FWNAME=6, NFP_DUMPSPEC_TYPE_HWINFO_FIELD=7, NFP_DUMPSPEC_TYPE_PROLOG=10000, NFP_DUMPSPEC_TYPE_ERROR=10001,} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 17 */;
	u64 cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 161 */;
	struct nfp_cpp *cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 156 */;
	long long cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 119 */;
	nfp_tlv_visit cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 117 */;
	int (*cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 112 */)(struct nfp_pf *pf,
											struct nfp_dump_tl *tl,
											void *param);
	struct nfp_dump_state {
		__be32 requested_level;
		u32 dumped_size;
		u32 buf_size;
		void *p;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfp_net_debugdump.c 105 */;
}
