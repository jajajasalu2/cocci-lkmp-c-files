cocci_test_suite() {
	const struct nfp_nffw_info_data *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 98 */;
	struct nfp_nffw_info {
		struct nfp_cpp *cpp;
		struct nfp_resource *res;
		struct nfp_nffw_info_data fwinf;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 78 */;
	struct nfp_nffw_info_data {
		__le32 flags[2];
		union {
			struct nfp_nffw_info_v1 v1;
			struct nfp_nffw_info_v2 v2;
		} info;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 70 */;
	struct nfp_nffw_info_v2 {
		struct nffw_meinfo meinfo[NFFW_MEINFO_CNT_V2];
		struct nffw_fwinfo fwinfo[NFFW_FWINFO_CNT_V2];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 64 */;
	struct nfp_nffw_info_v1 {
		struct nffw_meinfo meinfo[NFFW_MEINFO_CNT_V1];
		struct nffw_fwinfo fwinfo[NFFW_FWINFO_CNT_V1];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 59 */;
	struct nffw_fwinfo {
		__le32 loaded__mu_da__mip_off_hi;
		__le32 mip_cppid;
		__le32 mip_offset_lo;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 53 */;
	struct nffw_meinfo {
		__le32 ctxmask__fwid__meid;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 49 */;
	u64 *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 242 */;
	u32 *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 242 */;
	int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 242 */;
	struct nffw_fwinfo *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 218 */;
	struct nfp_nffw_info *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 206 */;
	void cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 206 */;
	struct nfp_cpp *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 159 */;
	struct nfp_nffw_info_data *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 130 */;
	struct nffw_fwinfo **cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 130 */;
	unsigned int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 129 */;
	u64 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 122 */;
	u32 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 104 */;
	const struct nffw_fwinfo *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nffw.c 104 */;
}
