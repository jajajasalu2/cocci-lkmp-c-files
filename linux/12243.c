cocci_test_suite() {
	drm_via_state_t cocci_id/* drivers/gpu/drm/via/via_verifier.c 969 */;
	drm_via_sequence_t cocci_id/* drivers/gpu/drm/via/via_verifier.c 85 */[];
	verifier_state_t cocci_id/* drivers/gpu/drm/via/via_verifier.c 803 */;
	int *cocci_id/* drivers/gpu/drm/via/via_verifier.c 718 */;
	const hazard_t *cocci_id/* drivers/gpu/drm/via/via_verifier.c 632 */;
	drm_via_private_t *cocci_id/* drivers/gpu/drm/via/via_verifier.c 524 */;
	enum{no_check=0, check_for_header2, check_for_header1, check_for_header2_err, check_for_header1_err, check_for_fire, check_z_buffer_addr0, check_z_buffer_addr1, check_z_buffer_addr_mode, check_destination_addr0, check_destination_addr1, check_destination_addr_mode, check_for_dummy, check_for_dd, check_texture_addr0, check_texture_addr1, check_texture_addr2, check_texture_addr3, check_texture_addr4, check_texture_addr5, check_texture_addr6, check_texture_addr7, check_texture_addr8, check_texture_addr_mode, check_for_vertex_count, check_number_texunits, forbidden_command,} cocci_id/* drivers/gpu/drm/via/via_verifier.c 48 */;
	enum{state_command, state_header2, state_header1, state_vheader5, state_vheader6, state_error,} cocci_id/* drivers/gpu/drm/via/via_verifier.c 39 */;
	uint32_t cocci_id/* drivers/gpu/drm/via/via_verifier.c 348 */;
	hazard_t cocci_id/* drivers/gpu/drm/via/via_verifier.c 348 */;
	uint32_t *cocci_id/* drivers/gpu/drm/via/via_verifier.c 306 */;
	unsigned long cocci_id/* drivers/gpu/drm/via/via_verifier.c 305 */;
	drm_via_state_t *cocci_id/* drivers/gpu/drm/via/via_verifier.c 290 */;
	struct drm_map_list *cocci_id/* drivers/gpu/drm/via/via_verifier.c 258 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/via/via_verifier.c 256 */;
	drm_local_map_t *cocci_id/* drivers/gpu/drm/via/via_verifier.c 253 */;
	const uint32_t *cocci_id/* drivers/gpu/drm/via/via_verifier.c 239 */;
	const uint32_t **cocci_id/* drivers/gpu/drm/via/via_verifier.c 239 */;
	unsigned cocci_id/* drivers/gpu/drm/via/via_verifier.c 239 */;
	int cocci_id/* drivers/gpu/drm/via/via_verifier.c 238 */;
	hazard_t cocci_id/* drivers/gpu/drm/via/via_verifier.c 234 */[256];
	hz_init_t cocci_id/* drivers/gpu/drm/via/via_verifier.c 118 */[];
	struct {
		unsigned int code;
		hazard_t hz;
	} cocci_id/* drivers/gpu/drm/via/via_verifier.c 113 */;
	hazard_t cocci_id/* drivers/gpu/drm/via/via_verifier.c 1093 */[];
	void cocci_id/* drivers/gpu/drm/via/via_verifier.c 1092 */;
	unsigned int cocci_id/* drivers/gpu/drm/via/via_verifier.c 1040 */;
}
