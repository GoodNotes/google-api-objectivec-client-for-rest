// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   AdSense Management API (adsense/v2)
// Description:
//   The AdSense Management API allows publishers to access their inventory and
//   run earnings and performance reports.
// Documentation:
//   https://developers.google.com/adsense/management/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAdsense_Account;
@class GTLRAdsense_AdClient;
@class GTLRAdsense_AdUnit;
@class GTLRAdsense_Alert;
@class GTLRAdsense_Cell;
@class GTLRAdsense_ContentAdsSettings;
@class GTLRAdsense_CustomChannel;
@class GTLRAdsense_Date;
@class GTLRAdsense_Header;
@class GTLRAdsense_HttpBody_Extensions_Item;
@class GTLRAdsense_Payment;
@class GTLRAdsense_Row;
@class GTLRAdsense_SavedReport;
@class GTLRAdsense_Site;
@class GTLRAdsense_TimeZone;
@class GTLRAdsense_UrlChannel;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRAdsense_AdUnit.state

/**
 *  Ad unit has been activated by the user.
 *
 *  Value: "ACTIVE"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_AdUnit_State_Active;
/**
 *  Ad unit has been archived by the user. Note that archived ad units are only
 *  removed from the default view in the UI. Archived ad units can still serve
 *  ads.
 *
 *  Value: "ARCHIVED"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_AdUnit_State_Archived;
/**
 *  State unspecified.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_AdUnit_State_StateUnspecified;

// ----------------------------------------------------------------------------
// GTLRAdsense_Alert.severity

/**
 *  Info.
 *
 *  Value: "INFO"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Alert_Severity_Info;
/**
 *  Severe.
 *
 *  Value: "SEVERE"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Alert_Severity_Severe;
/**
 *  Unspecified severity.
 *
 *  Value: "SEVERITY_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Alert_Severity_SeverityUnspecified;
/**
 *  Warning.
 *
 *  Value: "WARNING"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Alert_Severity_Warning;

// ----------------------------------------------------------------------------
// GTLRAdsense_ContentAdsSettings.type

/**
 *  In-article ad unit.
 *
 *  Value: "ARTICLE"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_ContentAdsSettings_Type_Article;
/**
 *  Display ad unit.
 *
 *  Value: "DISPLAY"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_ContentAdsSettings_Type_Display;
/**
 *  In-feed ad unit.
 *
 *  Value: "FEED"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_ContentAdsSettings_Type_Feed;
/**
 *  Link ad unit. Note that link ad units have now been retired, see
 *  https://support.google.com/adsense/answer/9987221.
 *
 *  Value: "LINK"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_ContentAdsSettings_Type_Link;
/**
 *  Matched content unit.
 *
 *  Value: "MATCHED_CONTENT"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_ContentAdsSettings_Type_MatchedContent;
/**
 *  Unspecified ad unit type.
 *
 *  Value: "TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_ContentAdsSettings_Type_TypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRAdsense_Header.type

/**
 *  Dimension header type.
 *
 *  Value: "DIMENSION"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Header_Type_Dimension;
/**
 *  Unspecified header.
 *
 *  Value: "HEADER_TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Header_Type_HeaderTypeUnspecified;
/**
 *  Currency header type.
 *
 *  Value: "METRIC_CURRENCY"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Header_Type_MetricCurrency;
/**
 *  Decimal header type.
 *
 *  Value: "METRIC_DECIMAL"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Header_Type_MetricDecimal;
/**
 *  Milliseconds header type.
 *
 *  Value: "METRIC_MILLISECONDS"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Header_Type_MetricMilliseconds;
/**
 *  Ratio header type.
 *
 *  Value: "METRIC_RATIO"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Header_Type_MetricRatio;
/**
 *  Tally header type.
 *
 *  Value: "METRIC_TALLY"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Header_Type_MetricTally;

// ----------------------------------------------------------------------------
// GTLRAdsense_Site.state

/**
 *  Running some checks on the site. This usually takes a few days, but in some
 *  cases can take up to 2 weeks.
 *
 *  Value: "GETTING_READY"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Site_State_GettingReady;
/**
 *  Publisher needs to fix some issues before the site is ready to show ads.
 *
 *  Value: "NEEDS_ATTENTION"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Site_State_NeedsAttention;
/**
 *  The site is ready to show ads.
 *
 *  Value: "READY"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Site_State_Ready;
/**
 *  The site hasn't been checked yet.
 *
 *  Value: "REQUIRES_REVIEW"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Site_State_RequiresReview;
/**
 *  State unspecified.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRAdsense_Site_State_StateUnspecified;

/**
 *  Representation of an account.
 */
@interface GTLRAdsense_Account : GTLRObject

/** Output only. Creation time of the account. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/** Output only. Display name of this account. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** Resource name of the account. Format: accounts/pub-[0-9]+ */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. Outstanding tasks that need to be completed as part of the
 *  sign-up process for a new account. e.g. "billing-profile-creation",
 *  "phone-pin-verification".
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *pendingTasks;

/**
 *  Output only. Whether this account is premium.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *premium;

/**
 *  The account time zone, as used by reporting. For more information, see
 *  [changing the time zone of your
 *  reports](https://support.google.com/adsense/answer/9830725).
 */
@property(nonatomic, strong, nullable) GTLRAdsense_TimeZone *timeZone;

@end


/**
 *  Representation of an ad client. An ad client represents a user's
 *  subscription with a specific AdSense product.
 */
@interface GTLRAdsense_AdClient : GTLRObject

/**
 *  Resource name of the ad client. Format:
 *  accounts/{account}/adclients/{adclient}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. Product code of the ad client. For example, "AFC" for AdSense
 *  for Content.
 */
@property(nonatomic, copy, nullable) NSString *productCode;

/**
 *  Output only. Unique ID of the ad client as used in the `AD_CLIENT_ID`
 *  reporting dimension. Present only if the ad client supports reporting.
 */
@property(nonatomic, copy, nullable) NSString *reportingDimensionId;

@end


/**
 *  Representation of the AdSense code for a given ad client. For more
 *  information, see [About the AdSense
 *  code](https://support.google.com/adsense/answer/9274634).
 */
@interface GTLRAdsense_AdClientAdCode : GTLRObject

/**
 *  Output only. The AdSense code snippet to add to the head of an HTML page.
 */
@property(nonatomic, copy, nullable) NSString *adCode;

/**
 *  Output only. The AdSense code snippet to add to the body of an AMP page.
 */
@property(nonatomic, copy, nullable) NSString *ampBody;

/**
 *  Output only. The AdSense code snippet to add to the head of an AMP page.
 */
@property(nonatomic, copy, nullable) NSString *ampHead;

@end


/**
 *  Representation of an ad unit. An ad unit represents a saved ad unit with a
 *  specific set of ad settings that have been customized within an account.
 */
@interface GTLRAdsense_AdUnit : GTLRObject

/** Settings specific to content ads (AFC). */
@property(nonatomic, strong, nullable) GTLRAdsense_ContentAdsSettings *contentAdsSettings;

/** Display name of the ad unit, as provided when the ad unit was created. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Resource name of the ad unit. Format:
 *  accounts/{account}/adclients/{adclient}/adunits/{adunit}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. Unique ID of the ad unit as used in the `AD_UNIT_ID` reporting
 *  dimension.
 */
@property(nonatomic, copy, nullable) NSString *reportingDimensionId;

/**
 *  State of the ad unit.
 *
 *  Likely values:
 *    @arg @c kGTLRAdsense_AdUnit_State_Active Ad unit has been activated by the
 *        user. (Value: "ACTIVE")
 *    @arg @c kGTLRAdsense_AdUnit_State_Archived Ad unit has been archived by
 *        the user. Note that archived ad units are only removed from the
 *        default view in the UI. Archived ad units can still serve ads. (Value:
 *        "ARCHIVED")
 *    @arg @c kGTLRAdsense_AdUnit_State_StateUnspecified State unspecified.
 *        (Value: "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  Representation of the AdSense code for a given ad unit.
 */
@interface GTLRAdsense_AdUnitAdCode : GTLRObject

/**
 *  Output only. The AdSense code snippet to add to the body of an HTML page.
 */
@property(nonatomic, copy, nullable) NSString *adCode;

@end


/**
 *  Representation of an alert.
 */
@interface GTLRAdsense_Alert : GTLRObject

/**
 *  Output only. The localized alert message. This may contain HTML markup, such
 *  as phrase elements or links.
 */
@property(nonatomic, copy, nullable) NSString *message;

/** Resource name of the alert. Format: accounts/{account}/alerts/{alert} */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. Severity of this alert.
 *
 *  Likely values:
 *    @arg @c kGTLRAdsense_Alert_Severity_Info Info. (Value: "INFO")
 *    @arg @c kGTLRAdsense_Alert_Severity_Severe Severe. (Value: "SEVERE")
 *    @arg @c kGTLRAdsense_Alert_Severity_SeverityUnspecified Unspecified
 *        severity. (Value: "SEVERITY_UNSPECIFIED")
 *    @arg @c kGTLRAdsense_Alert_Severity_Warning Warning. (Value: "WARNING")
 */
@property(nonatomic, copy, nullable) NSString *severity;

/**
 *  Output only. Type of alert. This identifies the broad type of this alert,
 *  and provides a stable machine-readable identifier that will not be
 *  translated. For example, "payment-hold".
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Cell representation.
 */
@interface GTLRAdsense_Cell : GTLRObject

/**
 *  Value in the cell. The dimension cells contain strings, and the metric cells
 *  contain numbers.
 */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  Settings specific to content ads (AFC).
 */
@interface GTLRAdsense_ContentAdsSettings : GTLRObject

/** Size of the ad unit. e.g. "728x90", "1x3" (for responsive ad units). */
@property(nonatomic, copy, nullable) NSString *size;

/**
 *  Type of the ad unit.
 *
 *  Likely values:
 *    @arg @c kGTLRAdsense_ContentAdsSettings_Type_Article In-article ad unit.
 *        (Value: "ARTICLE")
 *    @arg @c kGTLRAdsense_ContentAdsSettings_Type_Display Display ad unit.
 *        (Value: "DISPLAY")
 *    @arg @c kGTLRAdsense_ContentAdsSettings_Type_Feed In-feed ad unit. (Value:
 *        "FEED")
 *    @arg @c kGTLRAdsense_ContentAdsSettings_Type_Link Link ad unit. Note that
 *        link ad units have now been retired, see
 *        https://support.google.com/adsense/answer/9987221. (Value: "LINK")
 *    @arg @c kGTLRAdsense_ContentAdsSettings_Type_MatchedContent Matched
 *        content unit. (Value: "MATCHED_CONTENT")
 *    @arg @c kGTLRAdsense_ContentAdsSettings_Type_TypeUnspecified Unspecified
 *        ad unit type. (Value: "TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Representation of a custom channel.
 */
@interface GTLRAdsense_CustomChannel : GTLRObject

/** Display name of the custom channel. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Resource name of the custom channel. Format:
 *  accounts/{account}/adclients/{adclient}/customchannels/{customchannel}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. Unique ID of the custom channel as used in the
 *  `CUSTOM_CHANNEL_ID` reporting dimension.
 */
@property(nonatomic, copy, nullable) NSString *reportingDimensionId;

@end


/**
 *  Represents a whole or partial calendar date, such as a birthday. The time of
 *  day and time zone are either specified elsewhere or are insignificant. The
 *  date is relative to the Gregorian Calendar. This can represent one of the
 *  following: * A full date, with non-zero year, month, and day values * A
 *  month and day value, with a zero year, such as an anniversary * A year on
 *  its own, with zero month and day values * A year and month value, with a
 *  zero day, such as a credit card expiration date Related types are
 *  google.type.TimeOfDay and `google.protobuf.Timestamp`.
 */
@interface GTLRAdsense_Date : GTLRObject

/**
 *  Day of a month. Must be from 1 to 31 and valid for the year and month, or 0
 *  to specify a year by itself or a year and month where the day isn't
 *  significant.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *day;

/**
 *  Month of a year. Must be from 1 to 12, or 0 to specify a year without a
 *  month and day.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *month;

/**
 *  Year of the date. Must be from 1 to 9999, or 0 to specify a date without a
 *  year.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *year;

@end


/**
 *  The header information of the columns requested in the report.
 */
@interface GTLRAdsense_Header : GTLRObject

/**
 *  The [ISO-4217 currency code](https://en.wikipedia.org/wiki/ISO_4217) of this
 *  column. Only present if the header type is METRIC_CURRENCY.
 */
@property(nonatomic, copy, nullable) NSString *currencyCode;

/** Required. Name of the header. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required. Type of the header.
 *
 *  Likely values:
 *    @arg @c kGTLRAdsense_Header_Type_Dimension Dimension header type. (Value:
 *        "DIMENSION")
 *    @arg @c kGTLRAdsense_Header_Type_HeaderTypeUnspecified Unspecified header.
 *        (Value: "HEADER_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRAdsense_Header_Type_MetricCurrency Currency header type.
 *        (Value: "METRIC_CURRENCY")
 *    @arg @c kGTLRAdsense_Header_Type_MetricDecimal Decimal header type.
 *        (Value: "METRIC_DECIMAL")
 *    @arg @c kGTLRAdsense_Header_Type_MetricMilliseconds Milliseconds header
 *        type. (Value: "METRIC_MILLISECONDS")
 *    @arg @c kGTLRAdsense_Header_Type_MetricRatio Ratio header type. (Value:
 *        "METRIC_RATIO")
 *    @arg @c kGTLRAdsense_Header_Type_MetricTally Tally header type. (Value:
 *        "METRIC_TALLY")
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Message that represents an arbitrary HTTP body. It should only be used for
 *  payload formats that can't be represented as JSON, such as raw binary or an
 *  HTML page. This message can be used both in streaming and non-streaming API
 *  methods in the request as well as the response. It can be used as a
 *  top-level request field, which is convenient if one wants to extract
 *  parameters from either the URL or HTTP template into the request fields and
 *  also want access to the raw HTTP body. Example: message GetResourceRequest {
 *  // A unique request id. string request_id = 1; // The raw HTTP body is bound
 *  to this field. google.api.HttpBody http_body = 2; } service ResourceService
 *  { rpc GetResource(GetResourceRequest) returns (google.api.HttpBody); rpc
 *  UpdateResource(google.api.HttpBody) returns (google.protobuf.Empty); }
 *  Example with streaming methods: service CaldavService { rpc
 *  GetCalendar(stream google.api.HttpBody) returns (stream
 *  google.api.HttpBody); rpc UpdateCalendar(stream google.api.HttpBody) returns
 *  (stream google.api.HttpBody); } Use of this type only changes how the
 *  request and response bodies are handled, all other features will continue to
 *  work unchanged.
 */
@interface GTLRAdsense_HttpBody : GTLRObject

/**
 *  The HTTP Content-Type header value specifying the content type of the body.
 */
@property(nonatomic, copy, nullable) NSString *contentType;

/**
 *  The HTTP request/response body as raw binary.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *data;

/**
 *  Application specific response metadata. Must be set in the first response
 *  for streaming APIs.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_HttpBody_Extensions_Item *> *extensions;

@end


/**
 *  GTLRAdsense_HttpBody_Extensions_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAdsense_HttpBody_Extensions_Item : GTLRObject
@end


/**
 *  Response definition for the account list rpc.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "accounts" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdsense_ListAccountsResponse : GTLRCollectionObject

/**
 *  The accounts returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_Account *> *accounts;

/**
 *  Continuation token used to page through accounts. To retrieve the next page
 *  of the results, set the next request's "page_token" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response definition for the ad client list rpc.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "adClients" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdsense_ListAdClientsResponse : GTLRCollectionObject

/**
 *  The ad clients returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_AdClient *> *adClients;

/**
 *  Continuation token used to page through ad clients. To retrieve the next
 *  page of the results, set the next request's "page_token" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response definition for the adunit list rpc.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "adUnits" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdsense_ListAdUnitsResponse : GTLRCollectionObject

/**
 *  The ad units returned in the list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_AdUnit *> *adUnits;

/**
 *  Continuation token used to page through ad units. To retrieve the next page
 *  of the results, set the next request's "page_token" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response definition for the alerts list rpc.
 */
@interface GTLRAdsense_ListAlertsResponse : GTLRObject

/** The alerts returned in this list response. */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_Alert *> *alerts;

@end


/**
 *  Response definition for the child account list rpc.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "accounts" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdsense_ListChildAccountsResponse : GTLRCollectionObject

/**
 *  The accounts returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_Account *> *accounts;

/**
 *  Continuation token used to page through accounts. To retrieve the next page
 *  of the results, set the next request's "page_token" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response definition for the custom channel list rpc.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "customChannels" property. If returned as the result of a query,
 *        it should support automatic pagination (when @c shouldFetchNextPages
 *        is enabled).
 */
@interface GTLRAdsense_ListCustomChannelsResponse : GTLRCollectionObject

/**
 *  The custom channels returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_CustomChannel *> *customChannels;

/**
 *  Continuation token used to page through alerts. To retrieve the next page of
 *  the results, set the next request's "page_token" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response definition for the ad units linked to a custom channel list rpc.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "adUnits" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdsense_ListLinkedAdUnitsResponse : GTLRCollectionObject

/**
 *  The ad units returned in the list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_AdUnit *> *adUnits;

/**
 *  Continuation token used to page through ad units. To retrieve the next page
 *  of the results, set the next request's "page_token" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response definition for the custom channels linked to an adunit list rpc.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "customChannels" property. If returned as the result of a query,
 *        it should support automatic pagination (when @c shouldFetchNextPages
 *        is enabled).
 */
@interface GTLRAdsense_ListLinkedCustomChannelsResponse : GTLRCollectionObject

/**
 *  The custom channels returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_CustomChannel *> *customChannels;

/**
 *  Continuation token used to page through alerts. To retrieve the next page of
 *  the results, set the next request's "page_token" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response definition for the payments list rpc.
 */
@interface GTLRAdsense_ListPaymentsResponse : GTLRObject

/** The payments returned in this list response. */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_Payment *> *payments;

@end


/**
 *  Response definition for the saved reports list rpc.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "savedReports" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdsense_ListSavedReportsResponse : GTLRCollectionObject

/**
 *  Continuation token used to page through reports. To retrieve the next page
 *  of the results, set the next request's "page_token" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The reports returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_SavedReport *> *savedReports;

@end


/**
 *  Response definition for the sites list rpc.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "sites" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdsense_ListSitesResponse : GTLRCollectionObject

/**
 *  Continuation token used to page through sites. To retrieve the next page of
 *  the results, set the next request's "page_token" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The sites returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_Site *> *sites;

@end


/**
 *  Response definition for the url channels list rpc.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "urlChannels" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdsense_ListUrlChannelsResponse : GTLRCollectionObject

/**
 *  Continuation token used to page through url channels. To retrieve the next
 *  page of the results, set the next request's "page_token" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The url channels returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_UrlChannel *> *urlChannels;

@end


/**
 *  Representation of an unpaid or paid payment. See [Payment timelines for
 *  AdSense](https://support.google.com/adsense/answer/7164703) for more
 *  information about payments.
 */
@interface GTLRAdsense_Payment : GTLRObject

/**
 *  Output only. The amount of unpaid or paid earnings, as a formatted string,
 *  including the currency. E.g. "¥1,235 JPY", "$1,234.57", "£87.65".
 */
@property(nonatomic, copy, nullable) NSString *amount;

/**
 *  Output only. For paid earnings, the date that the payment was credited. For
 *  unpaid earnings, this field is empty. Payment dates are always returned in
 *  the billing timezone (America/Los_Angeles).
 */
@property(nonatomic, strong, nullable) GTLRAdsense_Date *date;

/**
 *  Resource name of the payment. Format: accounts/{account}/payments/unpaid for
 *  unpaid (current) earnings. accounts/{account}/payments/yyyy-MM-dd for paid
 *  earnings.
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Result of a generated report.
 */
@interface GTLRAdsense_ReportResult : GTLRObject

/**
 *  The averages of the report. This is the same length as any other row in the
 *  report; cells corresponding to dimension columns are empty.
 */
@property(nonatomic, strong, nullable) GTLRAdsense_Row *averages;

/** Required. End date of the range (inclusive). */
@property(nonatomic, strong, nullable) GTLRAdsense_Date *endDate;

/**
 *  The header information; one for each dimension in the request, followed by
 *  one for each metric in the request.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_Header *> *headers;

/**
 *  The output rows of the report. Each row is a list of cells; one for each
 *  dimension in the request, followed by one for each metric in the request.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_Row *> *rows;

/** Required. Start date of the range (inclusive). */
@property(nonatomic, strong, nullable) GTLRAdsense_Date *startDate;

/**
 *  The total number of rows matched by the report request.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalMatchedRows;

/**
 *  The totals of the report. This is the same length as any other row in the
 *  report; cells corresponding to dimension columns are empty.
 */
@property(nonatomic, strong, nullable) GTLRAdsense_Row *totals;

/**
 *  Any warnings associated with generation of the report. These warnings are
 *  always returned in English.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *warnings;

@end


/**
 *  Row representation.
 */
@interface GTLRAdsense_Row : GTLRObject

/** Cells in the row. */
@property(nonatomic, strong, nullable) NSArray<GTLRAdsense_Cell *> *cells;

@end


/**
 *  Representation of a saved report.
 */
@interface GTLRAdsense_SavedReport : GTLRObject

/**
 *  Resource name of the report. Format: accounts/{account}/reports/{report}
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Report title as specified by publisher. */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  Representation of a Site.
 */
@interface GTLRAdsense_Site : GTLRObject

/**
 *  Whether auto ads is turned on for the site.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *autoAdsEnabled;

/**
 *  Domain (or subdomain) of the site, e.g. "example.com" or "www.example.com".
 *  This is used in the `OWNED_SITE_DOMAIN_NAME` reporting dimension.
 */
@property(nonatomic, copy, nullable) NSString *domain;

/** Resource name of a site. Format: accounts/{account}/sites/{site} */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. Unique ID of the site as used in the `OWNED_SITE_ID` reporting
 *  dimension.
 */
@property(nonatomic, copy, nullable) NSString *reportingDimensionId;

/**
 *  Output only. State of a site.
 *
 *  Likely values:
 *    @arg @c kGTLRAdsense_Site_State_GettingReady Running some checks on the
 *        site. This usually takes a few days, but in some cases can take up to
 *        2 weeks. (Value: "GETTING_READY")
 *    @arg @c kGTLRAdsense_Site_State_NeedsAttention Publisher needs to fix some
 *        issues before the site is ready to show ads. (Value:
 *        "NEEDS_ATTENTION")
 *    @arg @c kGTLRAdsense_Site_State_Ready The site is ready to show ads.
 *        (Value: "READY")
 *    @arg @c kGTLRAdsense_Site_State_RequiresReview The site hasn't been
 *        checked yet. (Value: "REQUIRES_REVIEW")
 *    @arg @c kGTLRAdsense_Site_State_StateUnspecified State unspecified.
 *        (Value: "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  Represents a time zone from the [IANA Time Zone
 *  Database](https://www.iana.org/time-zones).
 */
@interface GTLRAdsense_TimeZone : GTLRObject

/**
 *  IANA Time Zone Database time zone, e.g. "America/New_York".
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Optional. IANA Time Zone Database version number, e.g. "2019a". */
@property(nonatomic, copy, nullable) NSString *version;

@end


/**
 *  Representation of a URL channel. URL channels allow you to track the
 *  performance of particular pages in your site; see [URL
 *  channels](https://support.google.com/adsense/answer/2923836) for more
 *  information.
 */
@interface GTLRAdsense_UrlChannel : GTLRObject

/**
 *  Resource name of the URL channel. Format:
 *  accounts/{account}/adclients/{adclient}/urlchannels/{urlchannel}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. Unique ID of the custom channel as used in the `URL_CHANNEL_ID`
 *  reporting dimension.
 */
@property(nonatomic, copy, nullable) NSString *reportingDimensionId;

/**
 *  URI pattern of the channel. Does not include "http://" or "https://".
 *  Example: www.example.com/home
 */
@property(nonatomic, copy, nullable) NSString *uriPattern;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
