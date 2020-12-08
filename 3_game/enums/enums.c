enum PVEZ_RPC {
	UPDATE_CONFIG_ON_CLIENT = 48102075,
	UPDATE_ICON_ON_CLIENT,
	NOTIFICATION_PERSONAL,
	NOTIFICATION_SERVERWIDE,
	UPDATE_ZONES_ON_SERVER,
	UPDATE_ZONES_ON_CLIENT,
	UPDATE_MARKERS_ON_CLIENT,
	UPDATE_LAWBREAKER_STATUS,
	ADMIN_ACCESS_REQUEST,
	ADMIN_UPDATE_CONFIG_ON_SERVER,
	ADMIN_LAWBREAKERS_DATA_REQUEST,
	ADMIN_ZONES_DATA_REQUEST,
	ADMIN_UPDATE_LAWBREAKERS_ON_SERVER
}

enum PVEZ_NotificationTypes {
	NOTIF_ZONE_ENTER = 0,
	NOTIF_ZONE_EXIT,
	NOTIF_EXIT_COUNTDOWN,
	NOTIF_LB_PERSONAL,
	NOTIF_LB_SERVERWIDE
}