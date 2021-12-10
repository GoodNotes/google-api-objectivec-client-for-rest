// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Composer API (composer/v1)
// Description:
//   Manages Apache Airflow environments on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/composer/

#import "GTLRCloudComposerObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudComposer_CheckUpgradeResponse.containsPypiModulesConflict
NSString * const kGTLRCloudComposer_CheckUpgradeResponse_ContainsPypiModulesConflict_Conflict = @"CONFLICT";
NSString * const kGTLRCloudComposer_CheckUpgradeResponse_ContainsPypiModulesConflict_ConflictResultUnspecified = @"CONFLICT_RESULT_UNSPECIFIED";
NSString * const kGTLRCloudComposer_CheckUpgradeResponse_ContainsPypiModulesConflict_NoConflict = @"NO_CONFLICT";

// GTLRCloudComposer_Environment.state
NSString * const kGTLRCloudComposer_Environment_State_Creating = @"CREATING";
NSString * const kGTLRCloudComposer_Environment_State_Deleting = @"DELETING";
NSString * const kGTLRCloudComposer_Environment_State_Error    = @"ERROR";
NSString * const kGTLRCloudComposer_Environment_State_Running  = @"RUNNING";
NSString * const kGTLRCloudComposer_Environment_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRCloudComposer_Environment_State_Updating = @"UPDATING";

// GTLRCloudComposer_EnvironmentConfig.environmentSize
NSString * const kGTLRCloudComposer_EnvironmentConfig_EnvironmentSize_EnvironmentSizeLarge = @"ENVIRONMENT_SIZE_LARGE";
NSString * const kGTLRCloudComposer_EnvironmentConfig_EnvironmentSize_EnvironmentSizeMedium = @"ENVIRONMENT_SIZE_MEDIUM";
NSString * const kGTLRCloudComposer_EnvironmentConfig_EnvironmentSize_EnvironmentSizeSmall = @"ENVIRONMENT_SIZE_SMALL";
NSString * const kGTLRCloudComposer_EnvironmentConfig_EnvironmentSize_EnvironmentSizeUnspecified = @"ENVIRONMENT_SIZE_UNSPECIFIED";

// GTLRCloudComposer_OperationMetadata.operationType
NSString * const kGTLRCloudComposer_OperationMetadata_OperationType_Check = @"CHECK";
NSString * const kGTLRCloudComposer_OperationMetadata_OperationType_Create = @"CREATE";
NSString * const kGTLRCloudComposer_OperationMetadata_OperationType_Delete = @"DELETE";
NSString * const kGTLRCloudComposer_OperationMetadata_OperationType_LoadState = @"LOAD_STATE";
NSString * const kGTLRCloudComposer_OperationMetadata_OperationType_StoreState = @"STORE_STATE";
NSString * const kGTLRCloudComposer_OperationMetadata_OperationType_TypeUnspecified = @"TYPE_UNSPECIFIED";
NSString * const kGTLRCloudComposer_OperationMetadata_OperationType_Update = @"UPDATE";

// GTLRCloudComposer_OperationMetadata.state
NSString * const kGTLRCloudComposer_OperationMetadata_State_Failed = @"FAILED";
NSString * const kGTLRCloudComposer_OperationMetadata_State_Pending = @"PENDING";
NSString * const kGTLRCloudComposer_OperationMetadata_State_Running = @"RUNNING";
NSString * const kGTLRCloudComposer_OperationMetadata_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRCloudComposer_OperationMetadata_State_Succeeded = @"SUCCEEDED";
NSString * const kGTLRCloudComposer_OperationMetadata_State_Successful = @"SUCCESSFUL";

// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_AllowedIpRange
//

@implementation GTLRCloudComposer_AllowedIpRange
@dynamic descriptionProperty, value;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_CheckUpgradeResponse
//

@implementation GTLRCloudComposer_CheckUpgradeResponse
@dynamic buildLogUri, containsPypiModulesConflict, imageVersion,
         pypiConflictBuildLogExtract, pypiDependencies;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_CheckUpgradeResponse_PypiDependencies
//

@implementation GTLRCloudComposer_CheckUpgradeResponse_PypiDependencies

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_DatabaseConfig
//

@implementation GTLRCloudComposer_DatabaseConfig
@dynamic machineType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_Date
//

@implementation GTLRCloudComposer_Date
@dynamic day, month, year;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_Empty
//

@implementation GTLRCloudComposer_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_EncryptionConfig
//

@implementation GTLRCloudComposer_EncryptionConfig
@dynamic kmsKeyName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_Environment
//

@implementation GTLRCloudComposer_Environment
@dynamic config, createTime, labels, name, state, updateTime, uuid;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_Environment_Labels
//

@implementation GTLRCloudComposer_Environment_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_EnvironmentConfig
//

@implementation GTLRCloudComposer_EnvironmentConfig
@dynamic airflowUri, dagGcsPrefix, databaseConfig, encryptionConfig,
         environmentSize, gkeCluster, maintenanceWindow, nodeConfig, nodeCount,
         privateEnvironmentConfig, softwareConfig, webServerConfig,
         webServerNetworkAccessControl, workloadsConfig;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_ImageVersion
//

@implementation GTLRCloudComposer_ImageVersion
@dynamic creationDisabled, imageVersionId, isDefault, releaseDate,
         supportedPythonVersions, upgradeDisabled;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"supportedPythonVersions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_IPAllocationPolicy
//

@implementation GTLRCloudComposer_IPAllocationPolicy
@dynamic clusterIpv4CidrBlock, clusterSecondaryRangeName, servicesIpv4CidrBlock,
         servicesSecondaryRangeName, useIpAliases;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_ListEnvironmentsResponse
//

@implementation GTLRCloudComposer_ListEnvironmentsResponse
@dynamic environments, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"environments" : [GTLRCloudComposer_Environment class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"environments";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_ListImageVersionsResponse
//

@implementation GTLRCloudComposer_ListImageVersionsResponse
@dynamic imageVersions, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"imageVersions" : [GTLRCloudComposer_ImageVersion class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"imageVersions";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_ListOperationsResponse
//

@implementation GTLRCloudComposer_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRCloudComposer_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_MaintenanceWindow
//

@implementation GTLRCloudComposer_MaintenanceWindow
@dynamic endTime, recurrence, startTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_NodeConfig
//

@implementation GTLRCloudComposer_NodeConfig
@dynamic diskSizeGb, ipAllocationPolicy, location, machineType, network,
         oauthScopes, serviceAccount, subnetwork, tags;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"oauthScopes" : [NSString class],
    @"tags" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_Operation
//

@implementation GTLRCloudComposer_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_Operation_Metadata
//

@implementation GTLRCloudComposer_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_Operation_Response
//

@implementation GTLRCloudComposer_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_OperationMetadata
//

@implementation GTLRCloudComposer_OperationMetadata
@dynamic createTime, endTime, operationType, resource, resourceUuid, state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_PrivateClusterConfig
//

@implementation GTLRCloudComposer_PrivateClusterConfig
@dynamic enablePrivateEndpoint, masterIpv4CidrBlock, masterIpv4ReservedRange;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_PrivateEnvironmentConfig
//

@implementation GTLRCloudComposer_PrivateEnvironmentConfig
@dynamic cloudComposerNetworkIpv4CidrBlock,
         cloudComposerNetworkIpv4ReservedRange, cloudSqlIpv4CidrBlock,
         enablePrivateEnvironment, privateClusterConfig, webServerIpv4CidrBlock,
         webServerIpv4ReservedRange;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_SchedulerResource
//

@implementation GTLRCloudComposer_SchedulerResource
@dynamic count, cpu, memoryGb, storageGb;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_SoftwareConfig
//

@implementation GTLRCloudComposer_SoftwareConfig
@dynamic airflowConfigOverrides, envVariables, imageVersion, pypiPackages,
         pythonVersion, schedulerCount;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_SoftwareConfig_AirflowConfigOverrides
//

@implementation GTLRCloudComposer_SoftwareConfig_AirflowConfigOverrides

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_SoftwareConfig_EnvVariables
//

@implementation GTLRCloudComposer_SoftwareConfig_EnvVariables

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_SoftwareConfig_PypiPackages
//

@implementation GTLRCloudComposer_SoftwareConfig_PypiPackages

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_Status
//

@implementation GTLRCloudComposer_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRCloudComposer_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_Status_Details_Item
//

@implementation GTLRCloudComposer_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_WebServerConfig
//

@implementation GTLRCloudComposer_WebServerConfig
@dynamic machineType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_WebServerNetworkAccessControl
//

@implementation GTLRCloudComposer_WebServerNetworkAccessControl
@dynamic allowedIpRanges;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allowedIpRanges" : [GTLRCloudComposer_AllowedIpRange class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_WebServerResource
//

@implementation GTLRCloudComposer_WebServerResource
@dynamic cpu, memoryGb, storageGb;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_WorkerResource
//

@implementation GTLRCloudComposer_WorkerResource
@dynamic cpu, maxCount, memoryGb, minCount, storageGb;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudComposer_WorkloadsConfig
//

@implementation GTLRCloudComposer_WorkloadsConfig
@dynamic scheduler, webServer, worker;
@end
