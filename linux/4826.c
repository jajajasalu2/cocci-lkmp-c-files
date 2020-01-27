cocci_test_suite() {
	int (*cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 87 */[])(struct ib_flow_action_attrs_esp_keymats *keymat);
	struct ib_uverbs_flow_action_esp_keymat_aes_gcm *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 68 */;
	struct ib_flow_action_attrs_esp_keymats *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 66 */;
	u32 cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 52 */;
	bool cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 52 */;
	u64 cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 51 */;
	struct uverbs_attr_bundle *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 51 */;
	const struct uapi_definition cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 444 */[];
	struct ib_flow_action *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 41 */;
	enum rdma_remove_reason cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 38 */;
	struct ib_uverbs_flow_action_esp_replay_bmp cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 377 */;
	struct ib_uobject *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 37 */;
	struct ib_uverbs_flow_action_esp_keymat_aes_gcm cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 365 */;
	const struct uverbs_attr_spec cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 361 */[];
	struct ib_uverbs_flow_action_esp cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 232 */;
	struct ib_flow_action_esp_attr *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 229 */;
	struct ib_device *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 227 */;
	struct ib_flow_action_esp_attr {
		struct ib_flow_action_attrs_esp hdr;
		struct ib_flow_action_attrs_esp_keymats keymat;
		struct ib_flow_action_attrs_esp_replays replay;
		struct ib_flow_spec_list encap;
	} cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 218 */;
	struct ib_uverbs_flow_action_esp_encap cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 196 */;
	struct ib_flow_spec_list *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 193 */;
	int cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 193 */;
	struct ib_uverbs_flow_ipv6_filter cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 152 */;
	struct ib_uverbs_flow_ipv4_filter cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 150 */;
	const void *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 144 */;
	union {
		struct ib_uverbs_flow_ipv4_filter ipv4;
		struct ib_uverbs_flow_ipv6_filter ipv6;
	} cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 140 */;
	const struct ib_uverbs_flow_ipv6_filter cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 130 */;
	const struct ib_uverbs_flow_ipv4_filter cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 122 */;
	union ib_flow_spec *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 119 */;
	size_t cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 119 */;
	const void __user *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 118 */;
	enum ib_flow_spec_type cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 117 */;
	int (*cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 111 */[])(struct ib_flow_action_attrs_esp_replays *replay,
											  bool is_modify);
	struct ib_flow_action_attrs_esp_replays *cocci_id/* drivers/infiniband/core/uverbs_std_types_flow_action.c 102 */;
}
