cocci_test_suite() {
	u8 cocci_id/* samples/bpf/ibumad_kern.c 81 */;
	u64 cocci_id/* samples/bpf/ibumad_kern.c 80 */;
	struct ib_umad_rw_args *cocci_id/* samples/bpf/ibumad_kern.c 78 */;
	int cocci_id/* samples/bpf/ibumad_kern.c 78 */;
	struct ib_umad_rw_args {
		u64 pad;
		u8 port_num;
		u8 sl;
		u8 path_bits;
		u8 grh_present;
		u32 id;
		u32 status;
		u32 timeout_ms;
		u32 retires;
		u32 length;
		u32 qpn;
		u32 qkey;
		u8 gid_index;
		u8 hop_limit;
		u16 lid;
		u16 attr_id;
		u16 pkey_index;
		u8 base_version;
		u8 mgmt_class;
		u8 class_version;
		u8 method;
		u32 flow_label;
		u16 mad_status;
		u16 class_specific;
		u32 attr_mod;
		u64 tid;
		u8 gid[16];
		u32 dev_index;
		u8 traffic_class;
	} cocci_id/* samples/bpf/ibumad_kern.c 45 */;
}
