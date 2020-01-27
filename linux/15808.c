cocci_test_suite() {
	int cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 98 */;
	struct vc_audio_msg cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 97 */;
	struct bcm2835_audio_instance *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 96 */;
	const enum vchi_callback_reason cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 93 */;
	void *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 92 */;
	void cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 92 */;
	bool cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 74 */;
	struct vc_audio_msg *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 74 */;
	struct bcm2835_alsa_stream *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 306 */;
	unsigned int cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 264 */;
	struct bcm2835_chip *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 250 */;
	struct bcm2835_vchi_ctx *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 207 */;
	struct device *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 171 */;
	struct service_creation cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 128 */;
	struct vchi_instance_handle *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 125 */;
	struct bcm2835_audio_instance {
		struct device *dev;
		struct vchi_service_handle *vchi_handle;
		struct completion msg_avail_comp;
		struct mutex vchi_mutex;
		struct bcm2835_alsa_stream *alsa_stream;
		int result;
		unsigned int max_packet;
		short peer_version;
	} cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835-vchiq.c 10 */;
}
