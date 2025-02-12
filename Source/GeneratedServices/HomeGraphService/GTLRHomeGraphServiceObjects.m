// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   HomeGraph API (homegraph/v1)
// Documentation:
//   https://developers.google.com/actions/smarthome/create-app#request-sync

#import "GTLRHomeGraphServiceObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_AgentDeviceId
//

@implementation GTLRHomeGraphService_AgentDeviceId
@dynamic identifier;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_AgentOtherDeviceId
//

@implementation GTLRHomeGraphService_AgentOtherDeviceId
@dynamic agentId, deviceId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_Device
//

@implementation GTLRHomeGraphService_Device
@dynamic attributes, customData, deviceInfo, identifier, name, otherDeviceIds,
         roomHint, structureHint, traits, type, willReportState;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"otherDeviceIds" : [GTLRHomeGraphService_AgentOtherDeviceId class],
    @"traits" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_Device_Attributes
//

@implementation GTLRHomeGraphService_Device_Attributes

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_DeviceInfo
//

@implementation GTLRHomeGraphService_DeviceInfo
@dynamic hwVersion, manufacturer, model, swVersion;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_DeviceNames
//

@implementation GTLRHomeGraphService_DeviceNames
@dynamic defaultNames, name, nicknames;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"defaultNames" : [NSString class],
    @"nicknames" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_Empty
//

@implementation GTLRHomeGraphService_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_QueryRequest
//

@implementation GTLRHomeGraphService_QueryRequest
@dynamic agentUserId, inputs, requestId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"inputs" : [GTLRHomeGraphService_QueryRequestInput class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_QueryRequestInput
//

@implementation GTLRHomeGraphService_QueryRequestInput
@dynamic payload;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_QueryRequestPayload
//

@implementation GTLRHomeGraphService_QueryRequestPayload
@dynamic devices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"devices" : [GTLRHomeGraphService_AgentDeviceId class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_QueryResponse
//

@implementation GTLRHomeGraphService_QueryResponse
@dynamic payload, requestId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_QueryResponsePayload
//

@implementation GTLRHomeGraphService_QueryResponsePayload
@dynamic devices;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_QueryResponsePayload_Devices
//

@implementation GTLRHomeGraphService_QueryResponsePayload_Devices

+ (Class)classForAdditionalProperties {
  return [GTLRHomeGraphService_QueryResponsePayload_Devices_Device class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_QueryResponsePayload_Devices_Device
//

@implementation GTLRHomeGraphService_QueryResponsePayload_Devices_Device

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_ReportStateAndNotificationDevice
//

@implementation GTLRHomeGraphService_ReportStateAndNotificationDevice
@dynamic notifications, states;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_ReportStateAndNotificationDevice_Notifications
//

@implementation GTLRHomeGraphService_ReportStateAndNotificationDevice_Notifications

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_ReportStateAndNotificationDevice_States
//

@implementation GTLRHomeGraphService_ReportStateAndNotificationDevice_States

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_ReportStateAndNotificationRequest
//

@implementation GTLRHomeGraphService_ReportStateAndNotificationRequest
@dynamic agentUserId, eventId, followUpToken, payload, requestId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_ReportStateAndNotificationResponse
//

@implementation GTLRHomeGraphService_ReportStateAndNotificationResponse
@dynamic requestId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_RequestSyncDevicesRequest
//

@implementation GTLRHomeGraphService_RequestSyncDevicesRequest
@dynamic agentUserId, async;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_RequestSyncDevicesResponse
//

@implementation GTLRHomeGraphService_RequestSyncDevicesResponse
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_StateAndNotificationPayload
//

@implementation GTLRHomeGraphService_StateAndNotificationPayload
@dynamic devices;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_SyncRequest
//

@implementation GTLRHomeGraphService_SyncRequest
@dynamic agentUserId, requestId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_SyncResponse
//

@implementation GTLRHomeGraphService_SyncResponse
@dynamic payload, requestId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRHomeGraphService_SyncResponsePayload
//

@implementation GTLRHomeGraphService_SyncResponsePayload
@dynamic agentUserId, devices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"devices" : [GTLRHomeGraphService_Device class]
  };
  return map;
}

@end
