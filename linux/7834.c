cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 876 */;
	struct platform_device *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 842 */;
	u8 *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 84 */;
	void cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 824 */;
	void cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 82 */(struct hwsim_phy *phy);
	int cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 80 */(struct genl_info *info,
								      struct device *dev,
								      bool init);
	struct hwsim_pib *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 735 */;
	struct ieee802154_hw *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 733 */;
	bool cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 731 */;
	struct genl_info *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 730 */;
	struct device *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 730 */;
	struct hwsim_phy {
		struct ieee802154_hw *hw;
		u32 idx;
		struct hwsim_pib __rcu *pib;
		bool suspended;
		struct list_head edges;
		struct list_head list;
	} cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 68 */;
	struct hwsim_edge {
		struct hwsim_phy *endpoint;
		struct hwsim_edge_info __rcu *info;
		struct list_head list;
		struct rcu_head rcu;
	} cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 60 */;
	const struct genl_ops cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 586 */[];
	const struct nla_policy cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 579 */[MAC802154_HWSIM_ATTR_MAX + 1];
	struct hwsim_edge_info {
		u8 lqi;
		struct rcu_head rcu;
	} cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 54 */;
	u32 cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 481 */;
	struct nlattr *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 478 */[MAC802154_HWSIM_EDGE_ATTR_MAX + 1];
	struct hwsim_pib {
		u8 page;
		u8 channel;
		struct rcu_head rcu;
	} cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 47 */;
	const struct genl_multicast_group cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 43 */[];
	enum hwsim_multicast_groups{HWSIM_MCGRP_CONFIG,} cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 39 */;
	u8 cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 380 */;
	const struct nla_policy cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 375 */[MAC802154_HWSIM_EDGE_ATTR_MAX + 1];
	uint32_t cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 363 */;
	struct genl_family cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 35 */;
	struct netlink_callback *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 332 */;
	void *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 270 */;
	struct hwsim_edge *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 209 */;
	struct hwsim_edge_info *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 208 */;
	struct nlattr *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 207 */;
	struct sk_buff *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 205 */;
	struct hwsim_phy *cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 205 */;
	int cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 205 */;
	s64 cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 185 */;
	const struct ieee802154_ops cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 167 */;
	const bool cocci_id/* drivers/net/ieee802154/mac802154_hwsim.c 162 */;
}
