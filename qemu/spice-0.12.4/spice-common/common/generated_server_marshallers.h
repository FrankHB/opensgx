/* this is a file autogenerated by spice_codegen.py */
#include "messages.h"
#include <spice/protocol.h>
#include "marshaller.h"

#ifndef _GENERATED_HEADERS_H
#define _GENERATED_HEADERS_H
void spice_marshall_msg_migrate(SpiceMarshaller *m, SpiceMsgMigrate *msg);
void spice_marshall_SpiceMsgData(SpiceMarshaller *m, SpiceMsgData *msg);
void spice_marshall_msg_set_ack(SpiceMarshaller *m, SpiceMsgSetAck *msg);
void spice_marshall_msg_ping(SpiceMarshaller *m, SpiceMsgPing *msg);
void spice_marshall_msg_wait_for_channels(SpiceMarshaller *m, SpiceMsgWaitForChannels *msg);
void spice_marshall_msg_disconnecting(SpiceMarshaller *m, SpiceMsgDisconnect *msg);
void spice_marshall_msg_notify(SpiceMarshaller *m, SpiceMsgNotify *msg);
void spice_marshall_msg_main_migrate_begin(SpiceMarshaller *m, SpiceMsgMainMigrationBegin *msg);
void spice_marshall_SpiceMsgEmpty(SpiceMarshaller *m, SpiceMsgEmpty *msg);
void spice_marshall_msg_main_init(SpiceMarshaller *m, SpiceMsgMainInit *msg);
void spice_marshall_msg_main_channels_list(SpiceMarshaller *m, SpiceMsgChannels *msg);
void spice_marshall_msg_main_mouse_mode(SpiceMarshaller *m, SpiceMsgMainMouseMode *msg);
void spice_marshall_msg_main_multi_media_time(SpiceMarshaller *m, SpiceMsgMainMultiMediaTime *msg);
void spice_marshall_msg_main_agent_disconnected(SpiceMarshaller *m, SpiceMsgMainAgentDisconnect *msg);
void spice_marshall_msg_main_agent_token(SpiceMarshaller *m, SpiceMsgMainAgentTokens *msg);
void spice_marshall_msg_main_migrate_switch_host(SpiceMarshaller *m, SpiceMsgMainMigrationSwitchHost *msg);
void spice_marshall_msg_main_name(SpiceMarshaller *m, SpiceMsgMainName *msg);
void spice_marshall_msg_main_uuid(SpiceMarshaller *m, SpiceMsgMainUuid *msg);
void spice_marshall_msg_main_agent_connected_tokens(SpiceMarshaller *m, SpiceMsgMainAgentConnectedTokens *msg);
void spice_marshall_msg_main_migrate_begin_seamless(SpiceMarshaller *m, SpiceMsgMainMigrateBeginSeamless *msg);
void spice_marshall_msg_display_mode(SpiceMarshaller *m, SpiceMsgDisplayMode *msg);
void spice_marshall_msg_display_copy_bits(SpiceMarshaller *m, SpiceMsgDisplayCopyBits *msg);
void spice_marshall_msg_display_inval_list(SpiceMarshaller *m, SpiceResourceList *msg);
void spice_marshall_msg_display_inval_all_pixmaps(SpiceMarshaller *m, SpiceMsgWaitForChannels *msg);
void spice_marshall_msg_display_inval_palette(SpiceMarshaller *m, SpiceMsgDisplayInvalOne *msg);
void spice_marshall_msg_display_stream_create(SpiceMarshaller *m, SpiceMsgDisplayStreamCreate *msg);
void spice_marshall_msg_display_stream_data(SpiceMarshaller *m, SpiceMsgDisplayStreamData *msg);
void spice_marshall_msg_display_stream_clip(SpiceMarshaller *m, SpiceMsgDisplayStreamClip *msg);
void spice_marshall_msg_display_stream_destroy(SpiceMarshaller *m, SpiceMsgDisplayStreamDestroy *msg);
void spice_marshall_msg_display_draw_fill(SpiceMarshaller *m, SpiceMsgDisplayDrawFill *msg, SpiceMarshaller **brush_pat_out, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_msg_display_draw_opaque(SpiceMarshaller *m, SpiceMsgDisplayDrawOpaque *msg, SpiceMarshaller **src_bitmap_out, SpiceMarshaller **pat_out, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_msg_display_draw_copy(SpiceMarshaller *m, SpiceMsgDisplayDrawCopy *msg, SpiceMarshaller **src_bitmap_out, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_Image(SpiceMarshaller *m, SpiceImage *msg, SpiceMarshaller **bitmap_palette_out, SpiceMarshaller **lzplt_palette_out);
void spice_marshall_Palette(SpiceMarshaller *m, SpicePalette *msg);
void spice_marshall_msg_display_draw_blend(SpiceMarshaller *m, SpiceMsgDisplayDrawBlend *msg, SpiceMarshaller **src_bitmap_out, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_msg_display_draw_blackness(SpiceMarshaller *m, SpiceMsgDisplayDrawBlackness *msg, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_msg_display_draw_whiteness(SpiceMarshaller *m, SpiceMsgDisplayDrawWhiteness *msg, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_msg_display_draw_invers(SpiceMarshaller *m, SpiceMsgDisplayDrawInvers *msg, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_msg_display_draw_rop3(SpiceMarshaller *m, SpiceMsgDisplayDrawRop3 *msg, SpiceMarshaller **src_bitmap_out, SpiceMarshaller **pat_out, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_msg_display_draw_stroke(SpiceMarshaller *m, SpiceMsgDisplayDrawStroke *msg, SpiceMarshaller **style_out, SpiceMarshaller **pat_out);
void spice_marshall_msg_display_draw_text(SpiceMarshaller *m, SpiceMsgDisplayDrawText *msg, SpiceMarshaller **fore_brush_pat_out, SpiceMarshaller **back_brush_pat_out);
void spice_marshall_msg_display_draw_transparent(SpiceMarshaller *m, SpiceMsgDisplayDrawTransparent *msg, SpiceMarshaller **src_bitmap_out);
void spice_marshall_msg_display_draw_alpha_blend(SpiceMarshaller *m, SpiceMsgDisplayDrawAlphaBlend *msg, SpiceMarshaller **src_bitmap_out);
void spice_marshall_msg_display_surface_create(SpiceMarshaller *m, SpiceMsgSurfaceCreate *msg);
void spice_marshall_msg_display_surface_destroy(SpiceMarshaller *m, SpiceMsgSurfaceDestroy *msg);
void spice_marshall_msg_display_stream_data_sized(SpiceMarshaller *m, SpiceMsgDisplayStreamDataSized *msg);
void spice_marshall_msg_display_monitors_config(SpiceMarshaller *m, SpiceMsgDisplayMonitorsConfig *msg);
void spice_marshall_msg_display_draw_composite(SpiceMarshaller *m, SpiceMsgDisplayDrawComposite *msg, SpiceMarshaller **src_bitmap_out, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_msg_display_stream_activate_report(SpiceMarshaller *m, SpiceMsgDisplayStreamActivateReport *msg);
void spice_marshall_msg_inputs_init(SpiceMarshaller *m, SpiceMsgInputsInit *msg);
void spice_marshall_msg_inputs_key_modifiers(SpiceMarshaller *m, SpiceMsgInputsKeyModifiers *msg);
void spice_marshall_msg_cursor_init(SpiceMarshaller *m, SpiceMsgCursorInit *msg);
void spice_marshall_msg_cursor_set(SpiceMarshaller *m, SpiceMsgCursorSet *msg);
void spice_marshall_msg_cursor_move(SpiceMarshaller *m, SpiceMsgCursorMove *msg);
void spice_marshall_msg_cursor_trail(SpiceMarshaller *m, SpiceMsgCursorTrail *msg);
void spice_marshall_msg_cursor_inval_one(SpiceMarshaller *m, SpiceMsgDisplayInvalOne *msg);
void spice_marshall_msg_playback_data(SpiceMarshaller *m, SpiceMsgPlaybackPacket *msg);
void spice_marshall_msg_playback_mode(SpiceMarshaller *m, SpiceMsgPlaybackMode *msg);
void spice_marshall_msg_playback_start(SpiceMarshaller *m, SpiceMsgPlaybackStart *msg);
void spice_marshall_SpiceMsgAudioVolume(SpiceMarshaller *m, SpiceMsgAudioVolume *msg);
void spice_marshall_SpiceMsgAudioMute(SpiceMarshaller *m, SpiceMsgAudioMute *msg);
void spice_marshall_msg_playback_latency(SpiceMarshaller *m, SpiceMsgPlaybackLatency *msg);
void spice_marshall_msg_record_start(SpiceMarshaller *m, SpiceMsgRecordStart *msg);
void spice_marshall_msg_tunnel_init(SpiceMarshaller *m, SpiceMsgTunnelInit *msg);
void spice_marshall_msg_tunnel_service_ip_map(SpiceMarshaller *m, SpiceMsgTunnelServiceIpMap *msg);
void spice_marshall_msg_tunnel_socket_open(SpiceMarshaller *m, SpiceMsgTunnelSocketOpen *msg);
void spice_marshall_msg_tunnel_socket_fin(SpiceMarshaller *m, SpiceMsgTunnelSocketFin *msg);
void spice_marshall_msg_tunnel_socket_close(SpiceMarshaller *m, SpiceMsgTunnelSocketClose *msg);
void spice_marshall_msg_tunnel_socket_data(SpiceMarshaller *m, SpiceMsgTunnelSocketData *msg);
void spice_marshall_msg_tunnel_socket_closed_ack(SpiceMarshaller *m, SpiceMsgTunnelSocketClosedAck *msg);
void spice_marshall_msg_tunnel_socket_token(SpiceMarshaller *m, SpiceMsgTunnelSocketTokens *msg);
#ifdef USE_SMARTCARD
void spice_marshall_msg_smartcard_data(SpiceMarshaller *m, SpiceMsgSmartcard *msg);
#endif /* USE_SMARTCARD */
void spice_marshall_msg_port_init(SpiceMarshaller *m, SpiceMsgPortInit *msg);
void spice_marshall_msg_port_event(SpiceMarshaller *m, SpiceMsgPortEvent *msg);
void spice_marshall_String(SpiceMarshaller *m, SpiceString *msg);
void spice_marshall_Rect(SpiceMarshaller *m, SpiceRect *msg);
void spice_marshall_Point(SpiceMarshaller *m, SpicePoint *msg);
void spice_marshall_DisplayBase(SpiceMarshaller *m, SpiceMsgDisplayBase *msg);
void spice_marshall_Fill(SpiceMarshaller *m, SpiceFill *msg, SpiceMarshaller **brush_pat_out, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_Opaque(SpiceMarshaller *m, SpiceOpaque *msg, SpiceMarshaller **src_bitmap_out, SpiceMarshaller **pat_out, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_Copy(SpiceMarshaller *m, SpiceCopy *msg, SpiceMarshaller **src_bitmap_out, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_Blend(SpiceMarshaller *m, SpiceCopy *msg, SpiceMarshaller **src_bitmap_out, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_Blackness(SpiceMarshaller *m, SpiceBlackness *msg, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_Whiteness(SpiceMarshaller *m, SpiceWhiteness *msg, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_Invers(SpiceMarshaller *m, SpiceInvers *msg, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_Rop3(SpiceMarshaller *m, SpiceRop3 *msg, SpiceMarshaller **src_bitmap_out, SpiceMarshaller **pat_out, SpiceMarshaller **mask_bitmap_out);
void spice_marshall_Stroke(SpiceMarshaller *m, SpiceStroke *msg, SpiceMarshaller **style_out, SpiceMarshaller **pat_out);
void spice_marshall_Path(SpiceMarshaller *m, SpicePath *msg);
void spice_marshall_Text(SpiceMarshaller *m, SpiceText *msg, SpiceMarshaller **fore_brush_pat_out, SpiceMarshaller **back_brush_pat_out);
void spice_marshall_Transparent(SpiceMarshaller *m, SpiceTransparent *msg, SpiceMarshaller **src_bitmap_out);
void spice_marshall_AlphaBlend(SpiceMarshaller *m, SpiceAlphaBlend *msg, SpiceMarshaller **src_bitmap_out);
void spice_marshall_Composite(SpiceMarshaller *m, SpiceComposite *msg, SpiceMarshaller **src_bitmap_out, SpiceMarshaller **mask_bitmap_out);
#endif
