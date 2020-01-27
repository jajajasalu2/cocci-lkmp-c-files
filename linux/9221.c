cocci_test_suite() {
	struct keygen_scheme cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 754 */;
	struct fman_kg_scheme_regs cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 540 */;
	struct fman_kg_regs __iomem *cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 489 */;
	struct keygen_scheme *cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 467 */;
	u8 *cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 445 */;
	struct fman_keygen *cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 445 */;
	int cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 445 */;
	struct fman_kg_scheme_regs *cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 398 */;
	void cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 381 */;
	u8 cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 361 */;
	u32 cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 361 */;
	bool cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 361 */;
	struct fman_keygen {
		struct keygen_scheme schemes[FM_KG_MAX_NUM_OF_SCHEMES];
		struct fman_kg_regs __iomem *keygen_regs;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 256 */;
	struct keygen_scheme {
		bool used;
		u8 hw_port_id;
		u32 base_fqid;
		u32 hash_fqid_count;
		bool use_hashing;
		bool symmetric_hash;
		u8 hashShift;
		u32 match_vector;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 224 */;
	struct fman_kg_regs {
		u32 fmkg_gcr;
		u32 res004;
		u32 res008;
		u32 fmkg_eer;
		u32 fmkg_eeer;
		u32 res014;
		u32 res018;
		u32 fmkg_seer;
		u32 fmkg_seeer;
		u32 fmkg_gsr;
		u32 fmkg_tpc;
		u32 fmkg_serc;
		u32 res030[4];
		u32 fmkg_fdor;
		u32 fmkg_gdv0r;
		u32 fmkg_gdv1r;
		u32 res04c[6];
		u32 fmkg_feer;
		u32 res068[38];
		union {
			u32 fmkg_indirect[63];
			struct fman_kg_scheme_regs fmkg_sch;
			struct fman_kg_pe_regs fmkg_pe;
		};
		u32 fmkg_ar;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 195 */;
	struct fman_kg_pe_regs {
		u32 fmkg_pe_sp;
		u32 fmkg_pe_cpp;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 185 */;
	struct fman_kg_scheme_regs {
		u32 kgse_mode;
		u32 kgse_ekfc;
		u32 kgse_ekdv;
		u32 kgse_bmch;
		u32 kgse_bmcl;
		u32 kgse_fqb;
		u32 kgse_hc;
		u32 kgse_ppc;
		u32 kgse_gec[FM_KG_NUM_OF_GENERIC_REGS];
		u32 kgse_spc;
		u32 kgse_dv0;
		u32 kgse_dv1;
		u32 kgse_ccbs;
		u32 kgse_mv;
		u32 kgse_om;
		u32 kgse_vsp;
	} cocci_id/* drivers/net/ethernet/freescale/fman/fman_keygen.c 161 */;
}
