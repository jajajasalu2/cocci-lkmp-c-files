cocci_test_suite() {
	const struct radar_types cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 65 */;
	const struct radar_detector_specs cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 55 */[];
	enum nl80211_dfs_regions cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 354 */;
	struct ath_common *cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 353 */;
	const struct dfs_pattern_detector cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 344 */;
	const struct radar_types *cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 321 */;
	struct ath_dfs_pool_stats cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 312 */;
	struct radar_types {
		enum nl80211_dfs_regions region;
		u32 num_radar_types;
		const struct radar_detector_specs *radar_types;
	} cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 30 */;
	struct pri_sequence *cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 296 */;
	struct radar_detector_specs *cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 272 */;
	struct pulse_event *cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 271 */;
	bool cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 270 */;
	struct pri_detector *cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 213 */;
	const struct radar_detector_specs *cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 212 */;
	u32 cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 197 */;
	u16 cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 195 */;
	struct dfs_pattern_detector *cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 195 */;
	struct channel_detector *cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 194 */;
	void cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 178 */;
	struct channel_detector {
		struct list_head head;
		u16 freq;
		struct pri_detector **detectors;
	} cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 160 */;
	const struct radar_types *cocci_id/* drivers/net/wireless/ath/dfs_pattern_detector.c 128 */[];
}
