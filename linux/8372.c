cocci_test_suite() {
	u64 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 85 */;
	u32 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 72 */;
	struct nfp_resource_entry cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 71 */;
	struct nfp_resource *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 69 */;
	struct nfp_cpp *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 69 */;
	int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 69 */;
	struct nfp_resource {
		char name[NFP_RESOURCE_ENTRY_NAME_SZ + 1];
		u32 cpp_id;
		u64 addr;
		u64 size;
		struct nfp_cpp_mutex *mutex;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 61 */;
	struct nfp_resource_entry {
		struct nfp_resource_entry_mutex {
			u32 owner;
			u32 key;
		} mutex;
		struct nfp_resource_entry_region {
			u8 name[NFP_RESOURCE_ENTRY_NAME_SZ];
			u8 reserved[5];
			u8 cpp_action;
			u8 cpp_token;
			u8 cpp_target;
			u32 page_offset;
			u32 page_size;
		} region;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 41 */;
	unsigned int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 231 */;
	void cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 213 */;
	struct nfp_cpp_mutex *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 154 */;
	unsigned long cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 152 */;
	const char *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_resource.c 150 */;
}
