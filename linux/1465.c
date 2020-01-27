cocci_test_suite() {
	struct snd_pcm_runtime *cocci_id/* drivers/usb/gadget/function/u_audio.c 87 */;
	struct snd_pcm_substream *cocci_id/* drivers/usb/gadget/function/u_audio.c 86 */;
	struct uac_req *cocci_id/* drivers/usb/gadget/function/u_audio.c 85 */;
	unsigned long cocci_id/* drivers/usb/gadget/function/u_audio.c 82 */;
	unsigned int cocci_id/* drivers/usb/gadget/function/u_audio.c 81 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/function/u_audio.c 79 */;
	const struct snd_pcm_hardware cocci_id/* drivers/usb/gadget/function/u_audio.c 68 */;
	struct snd_card *cocci_id/* drivers/usb/gadget/function/u_audio.c 611 */;
	struct uac_req cocci_id/* drivers/usb/gadget/function/u_audio.c 521 */;
	struct snd_pcm *cocci_id/* drivers/usb/gadget/function/u_audio.c 497 */;
	const char *cocci_id/* drivers/usb/gadget/function/u_audio.c 492 */;
	struct snd_uac_chip {
		struct g_audio *audio_dev;
		struct uac_rtd_params p_prm;
		struct uac_rtd_params c_prm;
		struct snd_card *card;
		struct snd_pcm *pcm;
		unsigned int p_interval;
		unsigned int p_residue;
		unsigned int p_pktsize;
		unsigned int p_pktsize_residue;
		unsigned int p_framesize;
	} cocci_id/* drivers/usb/gadget/function/u_audio.c 49 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/usb/gadget/function/u_audio.c 426 */;
	struct device *cocci_id/* drivers/usb/gadget/function/u_audio.c 369 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/function/u_audio.c 368 */;
	int cocci_id/* drivers/usb/gadget/function/u_audio.c 342 */;
	struct uac_params *cocci_id/* drivers/usb/gadget/function/u_audio.c 341 */;
	struct g_audio *cocci_id/* drivers/usb/gadget/function/u_audio.c 340 */;
	struct snd_uac_chip *cocci_id/* drivers/usb/gadget/function/u_audio.c 339 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/function/u_audio.c 337 */;
	struct uac_rtd_params *cocci_id/* drivers/usb/gadget/function/u_audio.c 337 */;
	void cocci_id/* drivers/usb/gadget/function/u_audio.c 337 */;
	const struct snd_pcm_ops cocci_id/* drivers/usb/gadget/function/u_audio.c 326 */;
	struct uac_rtd_params {
		struct snd_uac_chip *uac;
		bool ep_enabled;
		struct snd_pcm_substream *ss;
		ssize_t hw_ptr;
		void *rbuf;
		unsigned int max_psize;
		struct uac_req *ureq;
		spinlock_t lock;
	} cocci_id/* drivers/usb/gadget/function/u_audio.c 32 */;
	struct uac_req {
		struct uac_rtd_params *pp;
		struct usb_request *req;
	} cocci_id/* drivers/usb/gadget/function/u_audio.c 26 */;
	struct snd_pcm_hw_params *cocci_id/* drivers/usb/gadget/function/u_audio.c 243 */;
	snd_pcm_uframes_t cocci_id/* drivers/usb/gadget/function/u_audio.c 229 */;
}
